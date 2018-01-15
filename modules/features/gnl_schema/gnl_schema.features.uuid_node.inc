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
        'value' => '<p>The Detroit Ledger provides a picture of philanthropy in Detroit. We collect data on grants given to organizations in the city of Detroit, focusing on non-profits and civic projects that receive money from foundations.  All of our data is available for free, online, in bulk, under a copyright-free license.</p>

<!--<p>There’s a lot of talk about the reach and impact of nonprofits and foundations in Detroit. We find ourselves curious about how much money comes into the city and how it is used. We see many amazing non-profit organizations doing great work and want to show how they put resources to good use.</p>

<p>For all of the good work that organizations are doing in Detroit, much of it happens sight unseen. It’s difficult for nonprofits, residents, and scholars to see the bigger picture of the funding system they inhabit. Some funders do a great job of listing their grants online, but many don’t. Some non-profit organizations post annual reports online, but the digital divide can make this task difficult and expensive.</p>-->

<h2>Our team</h2>

<h3>Benjamin Chodoroff</h3>

<p>"I am a programmer who works with various free software projects. For fun, I build wireless networks so my neighbors and I can collaboratively control eachother\'s porch lights and share secret messages."</p>

<h3>Matt Hampel</h3>

<p>"In 2012, I worked through Code for America with the City of Detroit to help build TextMyBus, a real-time bus arrival system for Detroit. My company, LocalData, is making tech tools for neighborhood organizations that allow groups to quickly collect and map important information. I’ve previously worked on technology projects at the University of Michigan and Chicago Tribune, among other places."</p>

<h3>Jessica McInchak</h3>

<p>“I\'m a researcher and technologist in Detroit. My favorite projects to work on involve investigating how complex systems work, visualizing information, and making data more engaging and participatory.”</p>

<p>The Ledger’s research efforts have also been supported by our Data Interns Sarah Breen, Molly Maher, and Colleen Marquis.</p>

<h2>Contact us</h2>

<p>You can always reach our team at <a href="mailto:hello@detroitledger.org">hello@detroitledger.org</a> with research inquiries, ideas, and tips.</p>

<p>Or <a target="_blank" href="https://tinyletter.com/ledger">subscribe to our newsletter</a> to hear about our project updates, new data and features on our site, and local nonprofit news.</p>
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
  'title' => 'Data & Methods',
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

<p>All of the Ledger\'s data is available for free for any use.</p>

<p>Our data is made available under the <a target="_blank" href="http://opendatacommons.org/licenses/odbl/1.0/">Open Database License</a>. Any rights in individual contents of the database are licensed under the <a target="_blank" href="http://opendatacommons.org/licenses/dbcl/1.0/">Database Contents License.</a></p>

<p>You can download Excel-compatible <strong>CSV exports</strong> of <a href="https://data.detroitledger.org/sites/default/files/grants.csv">all grants</a> and <a href="https://data.detroitledger.org/sites/default/files/organizations.csv">all organizations</a>. Detailed field descriptions are provided in <a target="_blank" href="https://docs.google.com/spreadsheets/d/1ZLdaOLt49ZEYVcpTVLVVkYxlqrYPTIkZF26gMCo_DqY/edit?usp=sharing">our data dictionary</a>.</p>

<p>We also offer a <strong>data API</strong> with endpoints for organizations, grants, NTEE codes, and broader stats. Learn how to access through <a target="_blank" href="http://docs.detroitledger.apiary.io/">our API docs</a>.</p>

<p>Please contact us at <a href="mailto:hello@detroitledger.org">hello@detroitledger.org</a> if we can provide additional information, data in other formats, or technical assistance.</p>

<h2>Our methods</h2>

<p>We collect data about philanthropic and public grants awarded to organizations based in Detroit from 2010 onward. We include a handful of multi-year grants beginning prior to 2010 and relevant suburban organizations who are implementing grant-funded projects in the City.</p>

<p>Beyond grant data, we curate nonprofit news related to our organizations, provide baseline statistics from the IRS like annual revenue and expenses, and collect data about board member relationships and terms.</p>

<p>We’re building this database by utilizing public record IRS Form 990s for tax-exempt organizations, scraping foundation and government agency websites, importing bulk funding records from federal data portals like <a target="_blank" href="https://www.usaspending.gov/">USAspending.gov</a>, and scouring popular news sources. We welcome new data, corrections, and suggestions at <a href="mailto:hello@detroitledger.org">hello@detroitledger.org</a>.<p>

<p>We code our data to offer many search keys to our end-users. These attributes include: organization name and any known former names; <a target="_blank" href="http://nccs.urban.org/classification/ntee.cfm">National Taxonomy of Exempt Entities (NTEE)</a> classifications; grant start date and length; award amount; and several other categories as applicable. Each grant has a direct source link to follow for funder-specific details or a static citation.</p>

<p>If our data source does not specify the end date of a grant, we record that grant as active for a single fiscal year. We also note all award purposes, project descriptions, and re-granting details connected to individual grants whenever possible, but this type of qualitative information is unfortunately one of the most inconsistently reported amongst our sources.</p>

<h2>Our conversations</h2>

<p>Alongside data collection, we reach out to foundation representatives, funders, nonprofit staffers, community experts, and others doing work relevant to philanthropy in the city. We share <a href="https://www.detroitledger.org/#!/outreach">our field notes</a> once they are approved by the interviewees. These notes are transcribed and edited after our conversations to correct errors, maintain any agreed upon confidentiality, or add further detail.</p>

<p>We would love to hear your perspective of grantmaking and philanthropy in Detroit. Conversations generally last 30-60 minutes. If you’d like to be a contributing voice, please get in touch at <a href="mailto:hello@detroitledger.org">hello@detroitledger.org</a>.</p>',
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
