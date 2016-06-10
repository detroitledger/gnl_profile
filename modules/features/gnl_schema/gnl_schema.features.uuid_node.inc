<?php
/**
 * @file
 * gnl_schema.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function gnl_schema_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Transparency',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'und',
  'created' => 1375230550,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '22c6d32e-d297-46d0-8050-95c9d49ef1ca',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Our goal is to make this project as transparent as possible. To that end, we\'re committed to sharing as many details as possible. Please peruse our project\'s planning and documentation:</p>
        <ul>
          <li><a href="https://drive.google.com/#folders/0B9y9maMoYSDFTTdGSWdBemZWUGM">Our Google Drive documents</a></li>
          <li><a href="https://trello.com/board/detroit-ledger-sprints/51ad360e37bb425f76000cf7">Our todo list</a></li>
          <li><a href="https://github.com/detroitledger">Github</a></li>
        </ul>

<h2>Our mistakes</h2>

<p>The nonprofit <a href="http://www.givewell.org/about/shortcomings">GiveWell</a> shares "mistakes we\'ve made, strategies we should have planned and executed differently, and lessons we\'ve learned." We\'ll do the same here.</p>

<h3>Website wording issues</h3>

<p>From late 2013 through June 2014, our website included some outdated and ambiguous wording about the work the Ledger does. We used aspirational phrasing long after the work was completed. We also made references to a fundraising campaign that was completed.</p>

<h3>Wrong title listed for HUD employees</h3>

<p>For several months in the middle of 2014, the titles on our interview with <a href="/#!/keith-hernandez-and-ellen-chung-department-housing-and-urban-development-hud">Keith Hernandez and Ellen Chung</a> incorrectly called them employees of the City of Detroit. They work for the Department of Housing and Urban Development.</p>

<h3>Poor search engine optimization</h3>

<p>In June 2014, we redesigned this site to present more data to the public and make it easier for us develop. In this process, we failed to ensure that pages were easily crawlable by search engines, meaning people cannot easily find our organizational profiles. We fixed the issue in January 2015.</p>',
        'summary' => '',
        'format' => 'raw_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'path' => '/transparency',
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-07-30 20:29:10 -0400',
  'user_uuid' => '4ce1c447-25d6-449f-a3ad-8976ce9efb0b',
);
  $nodes[] = array(
  'title' => 'About the Detroit Ledger',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'und',
  'created' => 1375229535,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7ea570ba-598c-436c-9c7b-29e7e974f14b',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The Detroit Ledger provides a picture of philanthropy in Detroit. We collect data on grants and loans given to organizations in the city of Detroit, focusing on non-profits and civic projects that receive money from foundations.  All the data is available for free, online, in bulk, under a copyright-free license.</p>

<!--<p>There’s a lot of talk about the reach and impact of nonprofits and foundations in Detroit. We find ourselves curious about how much money comes into the city and how it is used. We see many amazing non-profit organizations doing great work and want to show how they put resources to good use.</p>

<p>For all of the good work that organizations are doing in Detroit, much of it happens sight unseen. It’s difficult for nonprofits, residents, and scholars to see the bigger picture of the funding system they inhabit. Some funders do a great job of listing their grants online, but many don’t. Some non-profit organizations post annual reports online, but the digital divide can make this task difficult and expensive.</p>-->

<h2>The Ledger Team</h2>

<h3>Benjamin Chodoroff</h3>

<p>"I am a programmer who works with various free software projects. For fun, I build wireless networks so my neighbors and I can collaboratively control eachother\'s porch lights and share secret messages."</p>

<h3>Matt Hampel</h3>

<p>"In 2012, I worked through Code for America with the City of Detroit to help build TextMyBus, a real-time bus arrival system for Detroit. My company, LocalData, is making tech tools for neighborhood organizations that allow groups to quickly collect and map important information. I’ve previously worked on technology projects at the University of Michigan and Chicago Tribune, among other places."</p>

<h3>Jessica McInchak</h3>

<p>“I am a recent graduate in urban sociology and do a lot of my thinking at the intersections of place-making, open-data, and spatial justice.  So far, this has all made for a creative niche where I get to work doing data-inspired, community-focused projects, just like this one.  In past years, I’ve interned with National Neighborhood Indicator Partners in Detroit and Chicago.”</p>

',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'path' => '/about-detroit-ledger',
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-07-30 20:12:15 -0400',
  'user_uuid' => '4ce1c447-25d6-449f-a3ad-8976ce9efb0b',
);
  $nodes[] = array(
  'title' => 'Our Data & Methods',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'und',
  'created' => 1375230230,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd0766f2c-35c8-4338-b8fc-28cee03b2dd5',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The Ledger collects data, presents it in an easily digestible format, and talks with individuals and organizations working in the nonprofit sector.</p>

<h2>Our data</h2>

<p>All of the Ledger\'s data is available for free for any use. Please contact us at <a href="mailto:hello@detroitledger.org">hello@detroitledger.org</a> if we can provide additional information about the data available, data in additional formats, or technical assistance.

<p>You can download Excel-compatible <strong>CSV exports</strong> of <a href="https://data.detroitledger.org/sites/default/files/grants.csv">all grants</a> and <a href="https://data.detroitledger.org/sites/default/files/organizations.csv">all organizations</a>. We also offer a <strong>data API</strong> with endpoints for organizations, grants, NTEE codes, and broader stats. <a href="http://docs.detroitledger.apiary.io/">Read our API docs</a> for more information on how to access the data.</p>

<p>The data is made available under the <a href="http://opendatacommons.org/licenses/odbl/1.0/">Open Database License</a>. Any rights in individual contents of the database are licensed under the <a href="http://opendatacommons.org/licenses/dbcl/1.0/">Database Contents License.</a></p>

<h2>Our methods</h2>

<p>We collect data about grantees within city boundaries who have received funds from 2011 onward. A few older grants that are still active today are also in our collection.</p>

<p>We’re building our database by scraping foundation websites and utilizing publicly reported IRS 990 forms.  In some cases, we are also reach out to organizations to ask for data and additional information. We welcome suggestions and data at <a href="mailto:hello@detroitledger.org">hello@detroitledger.org</a>.<p>

<p>We code the data with the intent to provide many search keys to our end-users. Fields collected including granter foundation, grantee organization, National Tax-Exempt Entity (NTEE) classification, year granted and length of funds, awarded amount, impacted neighborhoods, and several other categories.  Whenever possible, each grant has a direct source link to follow for foundation-specific details. Otherwise, each grant has a static source citation.</p>

<p>If our data source has not specifically listed the end date of a grant, we record that grant as active for a single fiscal year.  Many grants we’ve come across seem to be allocated for the broad purposes of “general operations” and “areas of greatest need.”  This commonality is not specifically recorded, but we note all project-specific and re-granting details when applicable to our sources.  </p>

<h2>Conversing with People</h2>

<p>In addition to our data collection work, we also conduct outreach to foundation representatives, funders, community experts, and others doing work relevant to philanthropy in the city.  We are compiling and publishing our field notes once they are approved the interviewees.  Notes are transcribed and edited after our conversations to correct errors, maintain any agreed upon confidentiality, or add further detail. </p>

<p>We would love to hear your perspective of grants, loans, and philanthropy in Detroit. Conversations generally last 30 - 60 minutes. If you want to be a contributing voice, please email us at <a href="mailto:hello@detroitledger.org">hello@detroitledger.org</a>.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'path' => '/our-methods',
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-07-30 20:23:50 -0400',
  'user_uuid' => '4ce1c447-25d6-449f-a3ad-8976ce9efb0b',
);
  return $nodes;
}
