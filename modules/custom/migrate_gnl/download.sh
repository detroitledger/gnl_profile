# Download the data for the Ledger

CLASSIFICATIONS_BASE='https://docs.google.com/spreadsheets/d/1nriru1nAGTgy20JgbXLFweieCXYIrddFXIuSujLIKRU/export?format=csv&gid=';
GRANTS_BASE='https://docs.google.com/spreadsheets/d/1h6Exjsz_VjgQn46qiNmnzsCoggjjpPDClYbKCP0qNhY/export?format=csv&gid=';

WGET=`which wget`

DESTDIR=/tmp/migrate_battlecreek

mkdir -p $DESTDIR

$WGET -O $DESTDIR/orgs_masterlist_NTEE.csv "${CLASSIFICATIONS_BASE}4"

$WGET -O $DESTDIR/classify_nonprofits_detail.csv "${CLASSIFICATIONS_BASE}1"

$WGET -O $DESTDIR/classify_grants.csv "${CLASSIFICATIONS_BASE}0"

for SHEET in 1051064171
do
  URL=$GRANTS_BASE$SHEET
  $WGET -O $DESTDIR/grants$SHEET.csv "$URL"
  echo >> $DESTDIR/grants$SHEET.csv # ensure all sheets have a newline at end
done

# concatenate
cat $DESTDIR/grants*.csv | grep -v 'granter,granter_program,grantee,grantee_city,grantee_state,amount,notes,start_date,end_date,data_source' > $DESTDIR/allgrants-raw.csv

# add empty id field
sed 's/^/,/' $DESTDIR/allgrants-raw.csv > $DESTDIR/allgrants-raw-emptyfirst.csv

# add autoincrement to empty id field
awk -F, '$1=NR' OFS=, $DESTDIR/allgrants-raw-emptyfirst.csv > $DESTDIR/allgrants-raw-incremented.csv

# add header row
echo 'granter,granter_program,grantee,grantee_city,grantee_state,amount,notes,start_date,end_date,data_source' > $DESTDIR/allgrants.csv

cat $DESTDIR/allgrants-raw-incremented.csv >> $DESTDIR/allgrants.csv

