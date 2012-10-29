  


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>MSM7X30_KERNEL/drivers/cpufreq/cpufreq_savagedzen.c at jb-hack · simonsimons34/MSM7X30_KERNEL · GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon-precomposed" sizes="57x57" href="apple-touch-icon-114.png" />
    <link rel="apple-touch-icon-precomposed" sizes="114x114" href="apple-touch-icon-114.png" />
    <link rel="apple-touch-icon-precomposed" sizes="72x72" href="apple-touch-icon-144.png" />
    <link rel="apple-touch-icon-precomposed" sizes="144x144" href="apple-touch-icon-144.png" />
    <meta name="msapplication-TileImage" content="/windows-tile.png">
    <meta name="msapplication-TileColor" content="#ffffff">

    
    
    <link rel="icon" type="image/x-icon" href="/favicon.ico" />

    <meta content="authenticity_token" name="csrf-param" />
<meta content="mOMbXJn4o9ZWtR1yDLwsan/Y2DZFsyid8UZHjmn3KDg=" name="csrf-token" />

    <link href="https://a248.e.akamai.net/assets.github.com/assets/github-0847bd737d4f854733d2b40bf1044b607d71ed61.css" media="screen" rel="stylesheet" type="text/css" />
    <link href="https://a248.e.akamai.net/assets.github.com/assets/github2-8cc490732a1aba027618f7536553508a847d468e.css" media="screen" rel="stylesheet" type="text/css" />
    


    <script src="https://a248.e.akamai.net/assets.github.com/assets/frameworks-28923941200b998a3e7422badab5b9be240f9be4.js" type="text/javascript"></script>
    <script src="https://a248.e.akamai.net/assets.github.com/assets/github-ce42349d8927bb7e11a380f0ea22babd66cbf335.js" type="text/javascript"></script>
    

      <link rel='permalink' href='/simonsimons34/MSM7X30_KERNEL/blob/da537af6870fabbd4426a9ef5e12529d0fe32d26/drivers/cpufreq/cpufreq_savagedzen.c'>
    <meta property="og:title" content="MSM7X30_KERNEL"/>
    <meta property="og:type" content="githubog:gitrepository"/>
    <meta property="og:url" content="https://github.com/simonsimons34/MSM7X30_KERNEL"/>
    <meta property="og:image" content="https://a248.e.akamai.net/assets.github.com/images/gravatars/gravatar-user-420.png?1345673561"/>
    <meta property="og:site_name" content="GitHub"/>
    <meta property="og:description" content="MSM7X30_KERNEL - MSM Kernel for Sense(master) and AOSP/CAF (ics/jb)"/>

    <meta name="description" content="MSM7X30_KERNEL - MSM Kernel for Sense(master) and AOSP/CAF (ics/jb)" />
  <link href="https://github.com/simonsimons34/MSM7X30_KERNEL/commits/jb-hack.atom" rel="alternate" title="Recent Commits to MSM7X30_KERNEL:jb-hack" type="application/atom+xml" />

  </head>


  <body class="logged_out page-blob  vis-public env-production ">
    <div id="wrapper">

    
    

    

      <div id="header" class="true clearfix">
        <div class="container clearfix">
          <a class="site-logo " href="https://github.com/">
            <img alt="GitHub" class="github-logo-4x" height="30" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7@4x.png?1340659511" />
            <img alt="GitHub" class="github-logo-4x-hover" height="30" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7@4x-hover.png?1340659511" />
          </a>


                  <!--
      make sure to use fully qualified URLs here since this nav
      is used on error pages on other domains
    -->
    <ul class="top-nav logged_out">
        <li class="pricing"><a href="https://github.com/plans">Signup and Pricing</a></li>
        <li class="explore"><a href="https://github.com/explore">Explore GitHub</a></li>
      <li class="features"><a href="https://github.com/features">Features</a></li>
        <li class="blog"><a href="https://github.com/blog">Blog</a></li>
      <li class="login"><a href="https://github.com/login?return_to=%2Fsimonsimons34%2FMSM7X30_KERNEL%2Fblob%2Fjb-hack%2Fdrivers%2Fcpufreq%2Fcpufreq_savagedzen.c">Sign in</a></li>
    </ul>



          
        </div>
      </div>

      

      


            <div class="site hfeed" itemscope itemtype="http://schema.org/WebPage">
      <div class="hentry">
        
        <div class="pagehead repohead instapaper_ignore readability-menu">
          <div class="container">
            <div class="title-actions-bar">
              


                  <ul class="pagehead-actions">


          <li>
            <span class="star-button"><a href="/login?return_to=%2Fsimonsimons34%2FMSM7X30_KERNEL" class="minibutton js-toggler-target entice tooltipped leftwards" title="You must be signed in to use this feature" rel="nofollow"><span class="mini-icon mini-icon-star"></span>Star</a><a class="social-count js-social-count" href="/simonsimons34/MSM7X30_KERNEL/stargazers">1</a></span>
          </li>
          <li>
            <a href="/login?return_to=%2Fsimonsimons34%2FMSM7X30_KERNEL" class="minibutton js-toggler-target fork-button entice tooltipped leftwards"  title="You must be signed in to fork a repository" rel="nofollow"><span class="mini-icon mini-icon-fork"></span>Fork</a><a href="/simonsimons34/MSM7X30_KERNEL/network" class="social-count">6</a>
          </li>
    </ul>

              <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
                <span class="repo-label"><span>public</span></span>
                <span class="mega-icon mega-icon-public-repo"></span>
                <span class="author vcard">
                  <a href="/simonsimons34" class="url fn" itemprop="url" rel="author">
                  <span itemprop="title">simonsimons34</span>
                  </a></span> /
                <strong><a href="/simonsimons34/MSM7X30_KERNEL" class="js-current-repository">MSM7X30_KERNEL</a></strong>
              </h1>
            </div>

            

  <ul class="tabs">
    <li><a href="/simonsimons34/MSM7X30_KERNEL/tree/jb-hack" class="selected" highlight="repo_sourcerepo_downloadsrepo_commitsrepo_tagsrepo_branches">Code</a></li>
    <li><a href="/simonsimons34/MSM7X30_KERNEL/network" highlight="repo_network">Network</a></li>
    <li><a href="/simonsimons34/MSM7X30_KERNEL/pulls" highlight="repo_pulls">Pull Requests <span class='counter'>0</span></a></li>

      <li><a href="/simonsimons34/MSM7X30_KERNEL/issues" highlight="repo_issues">Issues <span class='counter'>1</span></a></li>



    <li><a href="/simonsimons34/MSM7X30_KERNEL/graphs" highlight="repo_graphsrepo_contributors">Graphs</a></li>


  </ul>
  
  <div class="frame frame-center tree-finder" style="display:none"
      data-tree-list-url="/simonsimons34/MSM7X30_KERNEL/tree-list/da537af6870fabbd4426a9ef5e12529d0fe32d26"
      data-blob-url-prefix="/simonsimons34/MSM7X30_KERNEL/blob/jb-hack">

  <div class="breadcrumb">
    <span class="bold"><a href="/simonsimons34/MSM7X30_KERNEL">MSM7X30_KERNEL</a></span> /
    <input class="tree-finder-input js-navigation-enable" type="text" name="query" autocomplete="off" spellcheck="false">
  </div>

    <div class="octotip">
      <p>
        <a href="/simonsimons34/MSM7X30_KERNEL/dismiss-tree-finder-help" class="dismiss js-dismiss-tree-list-help" title="Hide this notice forever" rel="nofollow">Dismiss</a>
        <span class="bold">Octotip:</span> You've activated the <em>file finder</em>
        by pressing <span class="kbd">t</span> Start typing to filter the
        file list. Use <span class="kbd badmono">↑</span> and
        <span class="kbd badmono">↓</span> to navigate,
        <span class="kbd">enter</span> to view files.
      </p>
    </div>

  <table class="tree-browser css-truncate" cellpadding="0" cellspacing="0">
    <tr class="js-no-results no-results" style="display: none">
      <th colspan="2">No matching files</th>
    </tr>
    <tbody class="js-results-list js-navigation-container">
    </tbody>
  </table>
</div>

<div id="jump-to-line" style="display:none">
  <h2>Jump to Line</h2>
  <form accept-charset="UTF-8">
    <input class="textfield" type="text">
    <div class="full-button">
      <button type="submit" class="classy">
        Go
      </button>
    </div>
  </form>
</div>


<div class="tabnav">

  <span class="tabnav-right">
    <ul class="tabnav-tabs">
      <li><a href="/simonsimons34/MSM7X30_KERNEL/tags" class="tabnav-tab" highlight="repo_tags">Tags <span class="counter blank">0</span></a></li>
      <li><a href="/simonsimons34/MSM7X30_KERNEL/downloads" class="tabnav-tab" highlight="repo_downloads">Downloads <span class="counter blank">0</span></a></li>
    </ul>
    
  </span>

  <div class="tabnav-widget scope">


    <div class="context-menu-container js-menu-container js-context-menu">
      <a href="#"
         class="minibutton bigger switcher js-menu-target js-commitish-button btn-branch repo-tree"
         data-hotkey="w"
         data-ref="jb-hack">
         <span><em class="mini-icon mini-icon-branch"></em><i>branch:</i> jb-hack</span>
      </a>

      <div class="context-pane commitish-context js-menu-content">
        <a href="javascript:;" class="close js-menu-close"><span class="mini-icon mini-icon-remove-close"></span></a>
        <div class="context-title">Switch branches/tags</div>
        <div class="context-body pane-selector commitish-selector js-navigation-container">
          <div class="filterbar">
            <input type="text" id="context-commitish-filter-field" class="js-navigation-enable" placeholder="Filter branches/tags" data-filterable />
            <ul class="tabs">
              <li><a href="#" data-filter="branches" class="selected">Branches</a></li>
                <li><a href="#" data-filter="tags">Tags</a></li>
            </ul>
          </div>

          <div class="js-filter-tab js-filter-branches" data-filterable-for="context-commitish-filter-field" data-filterable-type=substring>
            <div class="no-results js-not-filterable">Nothing to show</div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/simonsimons34/MSM7X30_KERNEL/blob/ics/drivers/cpufreq/cpufreq_savagedzen.c" class="js-navigation-open" data-name="ics" rel="nofollow">ics</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/simonsimons34/MSM7X30_KERNEL/blob/jb/drivers/cpufreq/cpufreq_savagedzen.c" class="js-navigation-open" data-name="jb" rel="nofollow">jb</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target selected">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/simonsimons34/MSM7X30_KERNEL/blob/jb-hack/drivers/cpufreq/cpufreq_savagedzen.c" class="js-navigation-open" data-name="jb-hack" rel="nofollow">jb-hack</a>
                </h4>
              </div>
          </div>

            <div class="js-filter-tab js-filter-tags filter-tab-empty" style="display:none" data-filterable-for="context-commitish-filter-field" data-filterable-type=substring>
              <div class="no-results js-not-filterable">Nothing to show</div>
            </div>
        </div>
      </div><!-- /.commitish-context-context -->
    </div>
  </div> <!-- /.scope -->

  <ul class="tabnav-tabs">
    <li><a href="/simonsimons34/MSM7X30_KERNEL/tree/jb-hack" class="selected tabnav-tab" highlight="repo_source">Files</a></li>
    <li><a href="/simonsimons34/MSM7X30_KERNEL/commits/jb-hack" class="tabnav-tab" highlight="repo_commits">Commits</a></li>
    <li><a href="/simonsimons34/MSM7X30_KERNEL/branches" class="tabnav-tab" highlight="repo_branches" rel="nofollow">Branches <span class="counter ">3</span></a></li>
  </ul>

</div>

  
  
  


            
          </div>
        </div><!-- /.repohead -->

        <div id="js-repo-pjax-container" class="container context-loader-container" data-pjax-container>
          


<!-- blob contrib key: blob_contributors:v21:c70b29764e5167920ffb4effed6686df -->
<!-- blob contrib frag key: views10/v8/blob_contributors:v21:c70b29764e5167920ffb4effed6686df -->

<div id="slider">

    <div class="breadcrumb" data-path="drivers/cpufreq/cpufreq_savagedzen.c/">
      <b itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/simonsimons34/MSM7X30_KERNEL/tree/jb-hack" itemscope="url"><span itemprop="title">MSM7X30_KERNEL</span></a></b> / <span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/simonsimons34/MSM7X30_KERNEL/tree/jb-hack/drivers" itemscope="url"><span itemprop="title">drivers</span></a></span> / <span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/simonsimons34/MSM7X30_KERNEL/tree/jb-hack/drivers/cpufreq" itemscope="url"><span itemprop="title">cpufreq</span></a></span> / <strong class="final-path">cpufreq_savagedzen.c</strong> <span class="js-clippy mini-icon mini-icon-clippy " data-clipboard-text="drivers/cpufreq/cpufreq_savagedzen.c" data-copied-hint="copied!" data-copy-hint="copy to clipboard"></span>
    </div>

      <div class="commit file-history-tease js-blob-contributors-loader" data-request-url="/simonsimons34/MSM7X30_KERNEL/contributors/jb-hack/drivers/cpufreq/cpufreq_savagedzen.c" data-path="drivers/cpufreq/cpufreq_savagedzen.c/">
        Fetching contributors…

        <div class="participation">
          <p class="quickstat js-loading-status-text"><img alt="Octocat-spinner-32-eaf2f5" height="16" src="https://a248.e.akamai.net/assets.github.com/images/spinners/octocat-spinner-32-EAF2F5.gif?1340659511" width="16" /></p>
        </div>
      </div>

    <div class="frames">
      <div class="frame frame-center" data-path="drivers/cpufreq/cpufreq_savagedzen.c/" data-permalink-url="/simonsimons34/MSM7X30_KERNEL/blob/da537af6870fabbd4426a9ef5e12529d0fe32d26/drivers/cpufreq/cpufreq_savagedzen.c" data-title="MSM7X30_KERNEL/drivers/cpufreq/cpufreq_savagedzen.c at jb-hack · simonsimons34/MSM7X30_KERNEL · GitHub" data-type="blob">

        <div id="files" class="bubble">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><b class="mini-icon mini-icon-text-file"></b></span>
                <span class="mode" title="File Mode">file</span>
                  <span>752 lines (627 sloc)</span>
                <span>25.659 kb</span>
              </div>
              <ul class="button-group actions">
                  <li>
                    <a class="grouped-button file-edit-link minibutton bigger lighter" href="/simonsimons34/MSM7X30_KERNEL/edit/jb-hack/drivers/cpufreq/cpufreq_savagedzen.c" data-method="post" rel="nofollow" data-hotkey="e">Edit</a>
                  </li>
                <li>
                  <a href="/simonsimons34/MSM7X30_KERNEL/raw/jb-hack/drivers/cpufreq/cpufreq_savagedzen.c" class="minibutton grouped-button bigger lighter" id="raw-url">Raw</a>
                </li>
                  <li>
                    <a href="/simonsimons34/MSM7X30_KERNEL/blame/jb-hack/drivers/cpufreq/cpufreq_savagedzen.c" class="minibutton grouped-button bigger lighter">Blame</a>
                  </li>
                <li>
                  <a href="/simonsimons34/MSM7X30_KERNEL/commits/jb-hack/drivers/cpufreq/cpufreq_savagedzen.c" class="minibutton grouped-button bigger lighter" rel="nofollow">History</a>
                </li>
              </ul>
            </div>
                <div class="data type-c">
      <table cellpadding="0" cellspacing="0" class="lines">
        <tr>
          <td>
            <pre class="line_numbers"><span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
<span id="L140" rel="#L140">140</span>
<span id="L141" rel="#L141">141</span>
<span id="L142" rel="#L142">142</span>
<span id="L143" rel="#L143">143</span>
<span id="L144" rel="#L144">144</span>
<span id="L145" rel="#L145">145</span>
<span id="L146" rel="#L146">146</span>
<span id="L147" rel="#L147">147</span>
<span id="L148" rel="#L148">148</span>
<span id="L149" rel="#L149">149</span>
<span id="L150" rel="#L150">150</span>
<span id="L151" rel="#L151">151</span>
<span id="L152" rel="#L152">152</span>
<span id="L153" rel="#L153">153</span>
<span id="L154" rel="#L154">154</span>
<span id="L155" rel="#L155">155</span>
<span id="L156" rel="#L156">156</span>
<span id="L157" rel="#L157">157</span>
<span id="L158" rel="#L158">158</span>
<span id="L159" rel="#L159">159</span>
<span id="L160" rel="#L160">160</span>
<span id="L161" rel="#L161">161</span>
<span id="L162" rel="#L162">162</span>
<span id="L163" rel="#L163">163</span>
<span id="L164" rel="#L164">164</span>
<span id="L165" rel="#L165">165</span>
<span id="L166" rel="#L166">166</span>
<span id="L167" rel="#L167">167</span>
<span id="L168" rel="#L168">168</span>
<span id="L169" rel="#L169">169</span>
<span id="L170" rel="#L170">170</span>
<span id="L171" rel="#L171">171</span>
<span id="L172" rel="#L172">172</span>
<span id="L173" rel="#L173">173</span>
<span id="L174" rel="#L174">174</span>
<span id="L175" rel="#L175">175</span>
<span id="L176" rel="#L176">176</span>
<span id="L177" rel="#L177">177</span>
<span id="L178" rel="#L178">178</span>
<span id="L179" rel="#L179">179</span>
<span id="L180" rel="#L180">180</span>
<span id="L181" rel="#L181">181</span>
<span id="L182" rel="#L182">182</span>
<span id="L183" rel="#L183">183</span>
<span id="L184" rel="#L184">184</span>
<span id="L185" rel="#L185">185</span>
<span id="L186" rel="#L186">186</span>
<span id="L187" rel="#L187">187</span>
<span id="L188" rel="#L188">188</span>
<span id="L189" rel="#L189">189</span>
<span id="L190" rel="#L190">190</span>
<span id="L191" rel="#L191">191</span>
<span id="L192" rel="#L192">192</span>
<span id="L193" rel="#L193">193</span>
<span id="L194" rel="#L194">194</span>
<span id="L195" rel="#L195">195</span>
<span id="L196" rel="#L196">196</span>
<span id="L197" rel="#L197">197</span>
<span id="L198" rel="#L198">198</span>
<span id="L199" rel="#L199">199</span>
<span id="L200" rel="#L200">200</span>
<span id="L201" rel="#L201">201</span>
<span id="L202" rel="#L202">202</span>
<span id="L203" rel="#L203">203</span>
<span id="L204" rel="#L204">204</span>
<span id="L205" rel="#L205">205</span>
<span id="L206" rel="#L206">206</span>
<span id="L207" rel="#L207">207</span>
<span id="L208" rel="#L208">208</span>
<span id="L209" rel="#L209">209</span>
<span id="L210" rel="#L210">210</span>
<span id="L211" rel="#L211">211</span>
<span id="L212" rel="#L212">212</span>
<span id="L213" rel="#L213">213</span>
<span id="L214" rel="#L214">214</span>
<span id="L215" rel="#L215">215</span>
<span id="L216" rel="#L216">216</span>
<span id="L217" rel="#L217">217</span>
<span id="L218" rel="#L218">218</span>
<span id="L219" rel="#L219">219</span>
<span id="L220" rel="#L220">220</span>
<span id="L221" rel="#L221">221</span>
<span id="L222" rel="#L222">222</span>
<span id="L223" rel="#L223">223</span>
<span id="L224" rel="#L224">224</span>
<span id="L225" rel="#L225">225</span>
<span id="L226" rel="#L226">226</span>
<span id="L227" rel="#L227">227</span>
<span id="L228" rel="#L228">228</span>
<span id="L229" rel="#L229">229</span>
<span id="L230" rel="#L230">230</span>
<span id="L231" rel="#L231">231</span>
<span id="L232" rel="#L232">232</span>
<span id="L233" rel="#L233">233</span>
<span id="L234" rel="#L234">234</span>
<span id="L235" rel="#L235">235</span>
<span id="L236" rel="#L236">236</span>
<span id="L237" rel="#L237">237</span>
<span id="L238" rel="#L238">238</span>
<span id="L239" rel="#L239">239</span>
<span id="L240" rel="#L240">240</span>
<span id="L241" rel="#L241">241</span>
<span id="L242" rel="#L242">242</span>
<span id="L243" rel="#L243">243</span>
<span id="L244" rel="#L244">244</span>
<span id="L245" rel="#L245">245</span>
<span id="L246" rel="#L246">246</span>
<span id="L247" rel="#L247">247</span>
<span id="L248" rel="#L248">248</span>
<span id="L249" rel="#L249">249</span>
<span id="L250" rel="#L250">250</span>
<span id="L251" rel="#L251">251</span>
<span id="L252" rel="#L252">252</span>
<span id="L253" rel="#L253">253</span>
<span id="L254" rel="#L254">254</span>
<span id="L255" rel="#L255">255</span>
<span id="L256" rel="#L256">256</span>
<span id="L257" rel="#L257">257</span>
<span id="L258" rel="#L258">258</span>
<span id="L259" rel="#L259">259</span>
<span id="L260" rel="#L260">260</span>
<span id="L261" rel="#L261">261</span>
<span id="L262" rel="#L262">262</span>
<span id="L263" rel="#L263">263</span>
<span id="L264" rel="#L264">264</span>
<span id="L265" rel="#L265">265</span>
<span id="L266" rel="#L266">266</span>
<span id="L267" rel="#L267">267</span>
<span id="L268" rel="#L268">268</span>
<span id="L269" rel="#L269">269</span>
<span id="L270" rel="#L270">270</span>
<span id="L271" rel="#L271">271</span>
<span id="L272" rel="#L272">272</span>
<span id="L273" rel="#L273">273</span>
<span id="L274" rel="#L274">274</span>
<span id="L275" rel="#L275">275</span>
<span id="L276" rel="#L276">276</span>
<span id="L277" rel="#L277">277</span>
<span id="L278" rel="#L278">278</span>
<span id="L279" rel="#L279">279</span>
<span id="L280" rel="#L280">280</span>
<span id="L281" rel="#L281">281</span>
<span id="L282" rel="#L282">282</span>
<span id="L283" rel="#L283">283</span>
<span id="L284" rel="#L284">284</span>
<span id="L285" rel="#L285">285</span>
<span id="L286" rel="#L286">286</span>
<span id="L287" rel="#L287">287</span>
<span id="L288" rel="#L288">288</span>
<span id="L289" rel="#L289">289</span>
<span id="L290" rel="#L290">290</span>
<span id="L291" rel="#L291">291</span>
<span id="L292" rel="#L292">292</span>
<span id="L293" rel="#L293">293</span>
<span id="L294" rel="#L294">294</span>
<span id="L295" rel="#L295">295</span>
<span id="L296" rel="#L296">296</span>
<span id="L297" rel="#L297">297</span>
<span id="L298" rel="#L298">298</span>
<span id="L299" rel="#L299">299</span>
<span id="L300" rel="#L300">300</span>
<span id="L301" rel="#L301">301</span>
<span id="L302" rel="#L302">302</span>
<span id="L303" rel="#L303">303</span>
<span id="L304" rel="#L304">304</span>
<span id="L305" rel="#L305">305</span>
<span id="L306" rel="#L306">306</span>
<span id="L307" rel="#L307">307</span>
<span id="L308" rel="#L308">308</span>
<span id="L309" rel="#L309">309</span>
<span id="L310" rel="#L310">310</span>
<span id="L311" rel="#L311">311</span>
<span id="L312" rel="#L312">312</span>
<span id="L313" rel="#L313">313</span>
<span id="L314" rel="#L314">314</span>
<span id="L315" rel="#L315">315</span>
<span id="L316" rel="#L316">316</span>
<span id="L317" rel="#L317">317</span>
<span id="L318" rel="#L318">318</span>
<span id="L319" rel="#L319">319</span>
<span id="L320" rel="#L320">320</span>
<span id="L321" rel="#L321">321</span>
<span id="L322" rel="#L322">322</span>
<span id="L323" rel="#L323">323</span>
<span id="L324" rel="#L324">324</span>
<span id="L325" rel="#L325">325</span>
<span id="L326" rel="#L326">326</span>
<span id="L327" rel="#L327">327</span>
<span id="L328" rel="#L328">328</span>
<span id="L329" rel="#L329">329</span>
<span id="L330" rel="#L330">330</span>
<span id="L331" rel="#L331">331</span>
<span id="L332" rel="#L332">332</span>
<span id="L333" rel="#L333">333</span>
<span id="L334" rel="#L334">334</span>
<span id="L335" rel="#L335">335</span>
<span id="L336" rel="#L336">336</span>
<span id="L337" rel="#L337">337</span>
<span id="L338" rel="#L338">338</span>
<span id="L339" rel="#L339">339</span>
<span id="L340" rel="#L340">340</span>
<span id="L341" rel="#L341">341</span>
<span id="L342" rel="#L342">342</span>
<span id="L343" rel="#L343">343</span>
<span id="L344" rel="#L344">344</span>
<span id="L345" rel="#L345">345</span>
<span id="L346" rel="#L346">346</span>
<span id="L347" rel="#L347">347</span>
<span id="L348" rel="#L348">348</span>
<span id="L349" rel="#L349">349</span>
<span id="L350" rel="#L350">350</span>
<span id="L351" rel="#L351">351</span>
<span id="L352" rel="#L352">352</span>
<span id="L353" rel="#L353">353</span>
<span id="L354" rel="#L354">354</span>
<span id="L355" rel="#L355">355</span>
<span id="L356" rel="#L356">356</span>
<span id="L357" rel="#L357">357</span>
<span id="L358" rel="#L358">358</span>
<span id="L359" rel="#L359">359</span>
<span id="L360" rel="#L360">360</span>
<span id="L361" rel="#L361">361</span>
<span id="L362" rel="#L362">362</span>
<span id="L363" rel="#L363">363</span>
<span id="L364" rel="#L364">364</span>
<span id="L365" rel="#L365">365</span>
<span id="L366" rel="#L366">366</span>
<span id="L367" rel="#L367">367</span>
<span id="L368" rel="#L368">368</span>
<span id="L369" rel="#L369">369</span>
<span id="L370" rel="#L370">370</span>
<span id="L371" rel="#L371">371</span>
<span id="L372" rel="#L372">372</span>
<span id="L373" rel="#L373">373</span>
<span id="L374" rel="#L374">374</span>
<span id="L375" rel="#L375">375</span>
<span id="L376" rel="#L376">376</span>
<span id="L377" rel="#L377">377</span>
<span id="L378" rel="#L378">378</span>
<span id="L379" rel="#L379">379</span>
<span id="L380" rel="#L380">380</span>
<span id="L381" rel="#L381">381</span>
<span id="L382" rel="#L382">382</span>
<span id="L383" rel="#L383">383</span>
<span id="L384" rel="#L384">384</span>
<span id="L385" rel="#L385">385</span>
<span id="L386" rel="#L386">386</span>
<span id="L387" rel="#L387">387</span>
<span id="L388" rel="#L388">388</span>
<span id="L389" rel="#L389">389</span>
<span id="L390" rel="#L390">390</span>
<span id="L391" rel="#L391">391</span>
<span id="L392" rel="#L392">392</span>
<span id="L393" rel="#L393">393</span>
<span id="L394" rel="#L394">394</span>
<span id="L395" rel="#L395">395</span>
<span id="L396" rel="#L396">396</span>
<span id="L397" rel="#L397">397</span>
<span id="L398" rel="#L398">398</span>
<span id="L399" rel="#L399">399</span>
<span id="L400" rel="#L400">400</span>
<span id="L401" rel="#L401">401</span>
<span id="L402" rel="#L402">402</span>
<span id="L403" rel="#L403">403</span>
<span id="L404" rel="#L404">404</span>
<span id="L405" rel="#L405">405</span>
<span id="L406" rel="#L406">406</span>
<span id="L407" rel="#L407">407</span>
<span id="L408" rel="#L408">408</span>
<span id="L409" rel="#L409">409</span>
<span id="L410" rel="#L410">410</span>
<span id="L411" rel="#L411">411</span>
<span id="L412" rel="#L412">412</span>
<span id="L413" rel="#L413">413</span>
<span id="L414" rel="#L414">414</span>
<span id="L415" rel="#L415">415</span>
<span id="L416" rel="#L416">416</span>
<span id="L417" rel="#L417">417</span>
<span id="L418" rel="#L418">418</span>
<span id="L419" rel="#L419">419</span>
<span id="L420" rel="#L420">420</span>
<span id="L421" rel="#L421">421</span>
<span id="L422" rel="#L422">422</span>
<span id="L423" rel="#L423">423</span>
<span id="L424" rel="#L424">424</span>
<span id="L425" rel="#L425">425</span>
<span id="L426" rel="#L426">426</span>
<span id="L427" rel="#L427">427</span>
<span id="L428" rel="#L428">428</span>
<span id="L429" rel="#L429">429</span>
<span id="L430" rel="#L430">430</span>
<span id="L431" rel="#L431">431</span>
<span id="L432" rel="#L432">432</span>
<span id="L433" rel="#L433">433</span>
<span id="L434" rel="#L434">434</span>
<span id="L435" rel="#L435">435</span>
<span id="L436" rel="#L436">436</span>
<span id="L437" rel="#L437">437</span>
<span id="L438" rel="#L438">438</span>
<span id="L439" rel="#L439">439</span>
<span id="L440" rel="#L440">440</span>
<span id="L441" rel="#L441">441</span>
<span id="L442" rel="#L442">442</span>
<span id="L443" rel="#L443">443</span>
<span id="L444" rel="#L444">444</span>
<span id="L445" rel="#L445">445</span>
<span id="L446" rel="#L446">446</span>
<span id="L447" rel="#L447">447</span>
<span id="L448" rel="#L448">448</span>
<span id="L449" rel="#L449">449</span>
<span id="L450" rel="#L450">450</span>
<span id="L451" rel="#L451">451</span>
<span id="L452" rel="#L452">452</span>
<span id="L453" rel="#L453">453</span>
<span id="L454" rel="#L454">454</span>
<span id="L455" rel="#L455">455</span>
<span id="L456" rel="#L456">456</span>
<span id="L457" rel="#L457">457</span>
<span id="L458" rel="#L458">458</span>
<span id="L459" rel="#L459">459</span>
<span id="L460" rel="#L460">460</span>
<span id="L461" rel="#L461">461</span>
<span id="L462" rel="#L462">462</span>
<span id="L463" rel="#L463">463</span>
<span id="L464" rel="#L464">464</span>
<span id="L465" rel="#L465">465</span>
<span id="L466" rel="#L466">466</span>
<span id="L467" rel="#L467">467</span>
<span id="L468" rel="#L468">468</span>
<span id="L469" rel="#L469">469</span>
<span id="L470" rel="#L470">470</span>
<span id="L471" rel="#L471">471</span>
<span id="L472" rel="#L472">472</span>
<span id="L473" rel="#L473">473</span>
<span id="L474" rel="#L474">474</span>
<span id="L475" rel="#L475">475</span>
<span id="L476" rel="#L476">476</span>
<span id="L477" rel="#L477">477</span>
<span id="L478" rel="#L478">478</span>
<span id="L479" rel="#L479">479</span>
<span id="L480" rel="#L480">480</span>
<span id="L481" rel="#L481">481</span>
<span id="L482" rel="#L482">482</span>
<span id="L483" rel="#L483">483</span>
<span id="L484" rel="#L484">484</span>
<span id="L485" rel="#L485">485</span>
<span id="L486" rel="#L486">486</span>
<span id="L487" rel="#L487">487</span>
<span id="L488" rel="#L488">488</span>
<span id="L489" rel="#L489">489</span>
<span id="L490" rel="#L490">490</span>
<span id="L491" rel="#L491">491</span>
<span id="L492" rel="#L492">492</span>
<span id="L493" rel="#L493">493</span>
<span id="L494" rel="#L494">494</span>
<span id="L495" rel="#L495">495</span>
<span id="L496" rel="#L496">496</span>
<span id="L497" rel="#L497">497</span>
<span id="L498" rel="#L498">498</span>
<span id="L499" rel="#L499">499</span>
<span id="L500" rel="#L500">500</span>
<span id="L501" rel="#L501">501</span>
<span id="L502" rel="#L502">502</span>
<span id="L503" rel="#L503">503</span>
<span id="L504" rel="#L504">504</span>
<span id="L505" rel="#L505">505</span>
<span id="L506" rel="#L506">506</span>
<span id="L507" rel="#L507">507</span>
<span id="L508" rel="#L508">508</span>
<span id="L509" rel="#L509">509</span>
<span id="L510" rel="#L510">510</span>
<span id="L511" rel="#L511">511</span>
<span id="L512" rel="#L512">512</span>
<span id="L513" rel="#L513">513</span>
<span id="L514" rel="#L514">514</span>
<span id="L515" rel="#L515">515</span>
<span id="L516" rel="#L516">516</span>
<span id="L517" rel="#L517">517</span>
<span id="L518" rel="#L518">518</span>
<span id="L519" rel="#L519">519</span>
<span id="L520" rel="#L520">520</span>
<span id="L521" rel="#L521">521</span>
<span id="L522" rel="#L522">522</span>
<span id="L523" rel="#L523">523</span>
<span id="L524" rel="#L524">524</span>
<span id="L525" rel="#L525">525</span>
<span id="L526" rel="#L526">526</span>
<span id="L527" rel="#L527">527</span>
<span id="L528" rel="#L528">528</span>
<span id="L529" rel="#L529">529</span>
<span id="L530" rel="#L530">530</span>
<span id="L531" rel="#L531">531</span>
<span id="L532" rel="#L532">532</span>
<span id="L533" rel="#L533">533</span>
<span id="L534" rel="#L534">534</span>
<span id="L535" rel="#L535">535</span>
<span id="L536" rel="#L536">536</span>
<span id="L537" rel="#L537">537</span>
<span id="L538" rel="#L538">538</span>
<span id="L539" rel="#L539">539</span>
<span id="L540" rel="#L540">540</span>
<span id="L541" rel="#L541">541</span>
<span id="L542" rel="#L542">542</span>
<span id="L543" rel="#L543">543</span>
<span id="L544" rel="#L544">544</span>
<span id="L545" rel="#L545">545</span>
<span id="L546" rel="#L546">546</span>
<span id="L547" rel="#L547">547</span>
<span id="L548" rel="#L548">548</span>
<span id="L549" rel="#L549">549</span>
<span id="L550" rel="#L550">550</span>
<span id="L551" rel="#L551">551</span>
<span id="L552" rel="#L552">552</span>
<span id="L553" rel="#L553">553</span>
<span id="L554" rel="#L554">554</span>
<span id="L555" rel="#L555">555</span>
<span id="L556" rel="#L556">556</span>
<span id="L557" rel="#L557">557</span>
<span id="L558" rel="#L558">558</span>
<span id="L559" rel="#L559">559</span>
<span id="L560" rel="#L560">560</span>
<span id="L561" rel="#L561">561</span>
<span id="L562" rel="#L562">562</span>
<span id="L563" rel="#L563">563</span>
<span id="L564" rel="#L564">564</span>
<span id="L565" rel="#L565">565</span>
<span id="L566" rel="#L566">566</span>
<span id="L567" rel="#L567">567</span>
<span id="L568" rel="#L568">568</span>
<span id="L569" rel="#L569">569</span>
<span id="L570" rel="#L570">570</span>
<span id="L571" rel="#L571">571</span>
<span id="L572" rel="#L572">572</span>
<span id="L573" rel="#L573">573</span>
<span id="L574" rel="#L574">574</span>
<span id="L575" rel="#L575">575</span>
<span id="L576" rel="#L576">576</span>
<span id="L577" rel="#L577">577</span>
<span id="L578" rel="#L578">578</span>
<span id="L579" rel="#L579">579</span>
<span id="L580" rel="#L580">580</span>
<span id="L581" rel="#L581">581</span>
<span id="L582" rel="#L582">582</span>
<span id="L583" rel="#L583">583</span>
<span id="L584" rel="#L584">584</span>
<span id="L585" rel="#L585">585</span>
<span id="L586" rel="#L586">586</span>
<span id="L587" rel="#L587">587</span>
<span id="L588" rel="#L588">588</span>
<span id="L589" rel="#L589">589</span>
<span id="L590" rel="#L590">590</span>
<span id="L591" rel="#L591">591</span>
<span id="L592" rel="#L592">592</span>
<span id="L593" rel="#L593">593</span>
<span id="L594" rel="#L594">594</span>
<span id="L595" rel="#L595">595</span>
<span id="L596" rel="#L596">596</span>
<span id="L597" rel="#L597">597</span>
<span id="L598" rel="#L598">598</span>
<span id="L599" rel="#L599">599</span>
<span id="L600" rel="#L600">600</span>
<span id="L601" rel="#L601">601</span>
<span id="L602" rel="#L602">602</span>
<span id="L603" rel="#L603">603</span>
<span id="L604" rel="#L604">604</span>
<span id="L605" rel="#L605">605</span>
<span id="L606" rel="#L606">606</span>
<span id="L607" rel="#L607">607</span>
<span id="L608" rel="#L608">608</span>
<span id="L609" rel="#L609">609</span>
<span id="L610" rel="#L610">610</span>
<span id="L611" rel="#L611">611</span>
<span id="L612" rel="#L612">612</span>
<span id="L613" rel="#L613">613</span>
<span id="L614" rel="#L614">614</span>
<span id="L615" rel="#L615">615</span>
<span id="L616" rel="#L616">616</span>
<span id="L617" rel="#L617">617</span>
<span id="L618" rel="#L618">618</span>
<span id="L619" rel="#L619">619</span>
<span id="L620" rel="#L620">620</span>
<span id="L621" rel="#L621">621</span>
<span id="L622" rel="#L622">622</span>
<span id="L623" rel="#L623">623</span>
<span id="L624" rel="#L624">624</span>
<span id="L625" rel="#L625">625</span>
<span id="L626" rel="#L626">626</span>
<span id="L627" rel="#L627">627</span>
<span id="L628" rel="#L628">628</span>
<span id="L629" rel="#L629">629</span>
<span id="L630" rel="#L630">630</span>
<span id="L631" rel="#L631">631</span>
<span id="L632" rel="#L632">632</span>
<span id="L633" rel="#L633">633</span>
<span id="L634" rel="#L634">634</span>
<span id="L635" rel="#L635">635</span>
<span id="L636" rel="#L636">636</span>
<span id="L637" rel="#L637">637</span>
<span id="L638" rel="#L638">638</span>
<span id="L639" rel="#L639">639</span>
<span id="L640" rel="#L640">640</span>
<span id="L641" rel="#L641">641</span>
<span id="L642" rel="#L642">642</span>
<span id="L643" rel="#L643">643</span>
<span id="L644" rel="#L644">644</span>
<span id="L645" rel="#L645">645</span>
<span id="L646" rel="#L646">646</span>
<span id="L647" rel="#L647">647</span>
<span id="L648" rel="#L648">648</span>
<span id="L649" rel="#L649">649</span>
<span id="L650" rel="#L650">650</span>
<span id="L651" rel="#L651">651</span>
<span id="L652" rel="#L652">652</span>
<span id="L653" rel="#L653">653</span>
<span id="L654" rel="#L654">654</span>
<span id="L655" rel="#L655">655</span>
<span id="L656" rel="#L656">656</span>
<span id="L657" rel="#L657">657</span>
<span id="L658" rel="#L658">658</span>
<span id="L659" rel="#L659">659</span>
<span id="L660" rel="#L660">660</span>
<span id="L661" rel="#L661">661</span>
<span id="L662" rel="#L662">662</span>
<span id="L663" rel="#L663">663</span>
<span id="L664" rel="#L664">664</span>
<span id="L665" rel="#L665">665</span>
<span id="L666" rel="#L666">666</span>
<span id="L667" rel="#L667">667</span>
<span id="L668" rel="#L668">668</span>
<span id="L669" rel="#L669">669</span>
<span id="L670" rel="#L670">670</span>
<span id="L671" rel="#L671">671</span>
<span id="L672" rel="#L672">672</span>
<span id="L673" rel="#L673">673</span>
<span id="L674" rel="#L674">674</span>
<span id="L675" rel="#L675">675</span>
<span id="L676" rel="#L676">676</span>
<span id="L677" rel="#L677">677</span>
<span id="L678" rel="#L678">678</span>
<span id="L679" rel="#L679">679</span>
<span id="L680" rel="#L680">680</span>
<span id="L681" rel="#L681">681</span>
<span id="L682" rel="#L682">682</span>
<span id="L683" rel="#L683">683</span>
<span id="L684" rel="#L684">684</span>
<span id="L685" rel="#L685">685</span>
<span id="L686" rel="#L686">686</span>
<span id="L687" rel="#L687">687</span>
<span id="L688" rel="#L688">688</span>
<span id="L689" rel="#L689">689</span>
<span id="L690" rel="#L690">690</span>
<span id="L691" rel="#L691">691</span>
<span id="L692" rel="#L692">692</span>
<span id="L693" rel="#L693">693</span>
<span id="L694" rel="#L694">694</span>
<span id="L695" rel="#L695">695</span>
<span id="L696" rel="#L696">696</span>
<span id="L697" rel="#L697">697</span>
<span id="L698" rel="#L698">698</span>
<span id="L699" rel="#L699">699</span>
<span id="L700" rel="#L700">700</span>
<span id="L701" rel="#L701">701</span>
<span id="L702" rel="#L702">702</span>
<span id="L703" rel="#L703">703</span>
<span id="L704" rel="#L704">704</span>
<span id="L705" rel="#L705">705</span>
<span id="L706" rel="#L706">706</span>
<span id="L707" rel="#L707">707</span>
<span id="L708" rel="#L708">708</span>
<span id="L709" rel="#L709">709</span>
<span id="L710" rel="#L710">710</span>
<span id="L711" rel="#L711">711</span>
<span id="L712" rel="#L712">712</span>
<span id="L713" rel="#L713">713</span>
<span id="L714" rel="#L714">714</span>
<span id="L715" rel="#L715">715</span>
<span id="L716" rel="#L716">716</span>
<span id="L717" rel="#L717">717</span>
<span id="L718" rel="#L718">718</span>
<span id="L719" rel="#L719">719</span>
<span id="L720" rel="#L720">720</span>
<span id="L721" rel="#L721">721</span>
<span id="L722" rel="#L722">722</span>
<span id="L723" rel="#L723">723</span>
<span id="L724" rel="#L724">724</span>
<span id="L725" rel="#L725">725</span>
<span id="L726" rel="#L726">726</span>
<span id="L727" rel="#L727">727</span>
<span id="L728" rel="#L728">728</span>
<span id="L729" rel="#L729">729</span>
<span id="L730" rel="#L730">730</span>
<span id="L731" rel="#L731">731</span>
<span id="L732" rel="#L732">732</span>
<span id="L733" rel="#L733">733</span>
<span id="L734" rel="#L734">734</span>
<span id="L735" rel="#L735">735</span>
<span id="L736" rel="#L736">736</span>
<span id="L737" rel="#L737">737</span>
<span id="L738" rel="#L738">738</span>
<span id="L739" rel="#L739">739</span>
<span id="L740" rel="#L740">740</span>
<span id="L741" rel="#L741">741</span>
<span id="L742" rel="#L742">742</span>
<span id="L743" rel="#L743">743</span>
<span id="L744" rel="#L744">744</span>
<span id="L745" rel="#L745">745</span>
<span id="L746" rel="#L746">746</span>
<span id="L747" rel="#L747">747</span>
<span id="L748" rel="#L748">748</span>
<span id="L749" rel="#L749">749</span>
<span id="L750" rel="#L750">750</span>
<span id="L751" rel="#L751">751</span>
</pre>
          </td>
          <td width="100%">
                <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/*</span></div><div class='line' id='LC2'><span class="cm"> * drivers/cpufreq/cpufreq_savagedzen.c</span></div><div class='line' id='LC3'><span class="cm"> *</span></div><div class='line' id='LC4'><span class="cm"> * Copyright (C) 2010 Google, Inc.</span></div><div class='line' id='LC5'><span class="cm"> *</span></div><div class='line' id='LC6'><span class="cm"> * This software is licensed under the terms of the GNU General Public</span></div><div class='line' id='LC7'><span class="cm"> * License version 2, as published by the Free Software Foundation, and</span></div><div class='line' id='LC8'><span class="cm"> * may be copied, distributed, and modified under those terms.</span></div><div class='line' id='LC9'><span class="cm"> *</span></div><div class='line' id='LC10'><span class="cm"> * This program is distributed in the hope that it will be useful,</span></div><div class='line' id='LC11'><span class="cm"> * but WITHOUT ANY WARRANTY; without even the implied warranty of</span></div><div class='line' id='LC12'><span class="cm"> * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the</span></div><div class='line' id='LC13'><span class="cm"> * GNU General Public License for more details.</span></div><div class='line' id='LC14'><span class="cm"> *</span></div><div class='line' id='LC15'><span class="cm"> * Author: Joshua Seidel</span></div><div class='line' id='LC16'><br/></div><div class='line' id='LC17'><span class="cm"> * Based on the smartass governor by Erasmux</span></div><div class='line' id='LC18'><span class="cm"> *</span></div><div class='line' id='LC19'><span class="cm"> * Based on the interactive governor By Mike Chan (mike@android.com)</span></div><div class='line' id='LC20'><span class="cm"> * which was adaptated to 2.6.29 kernel by Nadlabak (pavel@doshaska.net)</span></div><div class='line' id='LC21'><span class="cm"> *</span></div><div class='line' id='LC22'><span class="cm"> * requires to add</span></div><div class='line' id='LC23'><span class="cm"> * EXPORT_SYMBOL_GPL(nr_running);</span></div><div class='line' id='LC24'><span class="cm"> * at the end of kernel/sched.c</span></div><div class='line' id='LC25'><span class="cm"> *</span></div><div class='line' id='LC26'><span class="cm"> */</span></div><div class='line' id='LC27'><br/></div><div class='line' id='LC28'><span class="cp">#include &lt;linux/cpu.h&gt;</span></div><div class='line' id='LC29'><span class="cp">#include &lt;linux/cpumask.h&gt;</span></div><div class='line' id='LC30'><span class="cp">#include &lt;linux/cpufreq.h&gt;</span></div><div class='line' id='LC31'><span class="cp">#include &lt;linux/sched.h&gt;</span></div><div class='line' id='LC32'><span class="cp">#include &lt;linux/tick.h&gt;</span></div><div class='line' id='LC33'><span class="cp">#include &lt;linux/timer.h&gt;</span></div><div class='line' id='LC34'><span class="cp">#include &lt;linux/workqueue.h&gt;</span></div><div class='line' id='LC35'><span class="cp">#include &lt;linux/moduleparam.h&gt;</span></div><div class='line' id='LC36'><span class="cp">#include &lt;asm/cputime.h&gt;</span></div><div class='line' id='LC37'><span class="cp">#include &lt;linux/earlysuspend.h&gt;</span></div><div class='line' id='LC38'><br/></div><div class='line' id='LC39'><span class="k">static</span> <span class="kt">void</span> <span class="p">(</span><span class="o">*</span><span class="n">pm_idle_old</span><span class="p">)(</span><span class="kt">void</span><span class="p">);</span></div><div class='line' id='LC40'><span class="k">static</span> <span class="n">atomic_t</span> <span class="n">active_count</span> <span class="o">=</span> <span class="n">ATOMIC_INIT</span><span class="p">(</span><span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC41'><br/></div><div class='line' id='LC42'><span class="k">struct</span> <span class="n">savagedzen_info_s</span> <span class="p">{</span></div><div class='line' id='LC43'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">cur_policy</span><span class="p">;</span></div><div class='line' id='LC44'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">timer_list</span> <span class="n">timer</span><span class="p">;</span></div><div class='line' id='LC45'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">u64</span> <span class="n">time_in_idle</span><span class="p">;</span></div><div class='line' id='LC46'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">u64</span> <span class="n">idle_exit_time</span><span class="p">;</span></div><div class='line' id='LC47'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">u64</span> <span class="n">freq_change_time</span><span class="p">;</span></div><div class='line' id='LC48'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">u64</span> <span class="n">freq_change_time_in_idle</span><span class="p">;</span></div><div class='line' id='LC49'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">cur_cpu_load</span><span class="p">;</span></div><div class='line' id='LC50'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">force_ramp_up</span><span class="p">;</span></div><div class='line' id='LC51'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">enable</span><span class="p">;</span></div><div class='line' id='LC52'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">max_speed</span><span class="p">;</span></div><div class='line' id='LC53'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">min_speed</span><span class="p">;</span></div><div class='line' id='LC54'><span class="p">};</span></div><div class='line' id='LC55'><span class="k">static</span> <span class="n">DEFINE_PER_CPU</span><span class="p">(</span><span class="k">struct</span> <span class="n">savagedzen_info_s</span><span class="p">,</span> <span class="n">savagedzen_info</span><span class="p">);</span></div><div class='line' id='LC56'><br/></div><div class='line' id='LC57'><span class="cm">/* Workqueues handle frequency scaling */</span></div><div class='line' id='LC58'><span class="k">static</span> <span class="k">struct</span> <span class="n">workqueue_struct</span> <span class="o">*</span><span class="n">up_wq</span><span class="p">;</span></div><div class='line' id='LC59'><span class="k">static</span> <span class="k">struct</span> <span class="n">workqueue_struct</span> <span class="o">*</span><span class="n">down_wq</span><span class="p">;</span></div><div class='line' id='LC60'><span class="k">static</span> <span class="k">struct</span> <span class="n">work_struct</span> <span class="n">freq_scale_work</span><span class="p">;</span></div><div class='line' id='LC61'><br/></div><div class='line' id='LC62'><span class="k">static</span> <span class="n">cpumask_t</span> <span class="n">work_cpumask</span><span class="p">;</span></div><div class='line' id='LC63'><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">suspended</span><span class="p">;</span></div><div class='line' id='LC64'><br/></div><div class='line' id='LC65'><span class="k">enum</span> <span class="p">{</span></div><div class='line' id='LC66'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">SAVAGEDZEN_DEBUG_JUMPS</span><span class="o">=</span><span class="mi">1</span><span class="p">,</span></div><div class='line' id='LC67'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">SAVAGEDZEN_DEBUG_LOAD</span><span class="o">=</span><span class="mi">2</span></div><div class='line' id='LC68'><span class="p">};</span></div><div class='line' id='LC69'><br/></div><div class='line' id='LC70'><span class="cm">/*</span></div><div class='line' id='LC71'><span class="cm"> * Combination of the above debug flags.</span></div><div class='line' id='LC72'><span class="cm"> */</span></div><div class='line' id='LC73'><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">debug_mask</span><span class="p">;</span></div><div class='line' id='LC74'><br/></div><div class='line' id='LC75'><span class="cm">/*</span></div><div class='line' id='LC76'><span class="cm"> * The minimum amount of time to spend at a frequency before we can ramp up.</span></div><div class='line' id='LC77'><span class="cm"> */</span></div><div class='line' id='LC78'><span class="cp">#define DEFAULT_UP_RATE_US 12000;</span></div><div class='line' id='LC79'><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">up_rate_us</span><span class="p">;</span></div><div class='line' id='LC80'><br/></div><div class='line' id='LC81'><span class="cm">/*</span></div><div class='line' id='LC82'><span class="cm"> * The minimum amount of time to spend at a frequency before we can ramp down.</span></div><div class='line' id='LC83'><span class="cm"> */</span></div><div class='line' id='LC84'><span class="cp">#define DEFAULT_DOWN_RATE_US 24000;</span></div><div class='line' id='LC85'><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">down_rate_us</span><span class="p">;</span></div><div class='line' id='LC86'><br/></div><div class='line' id='LC87'><span class="cm">/*</span></div><div class='line' id='LC88'><span class="cm"> * When ramping up frequency with no idle cycles jump to at least this frequency.</span></div><div class='line' id='LC89'><span class="cm"> * Zero disables. Set a very high value to jump to policy max freqeuncy.</span></div><div class='line' id='LC90'><span class="cm"> */</span></div><div class='line' id='LC91'><span class="cp">#define DEFAULT_UP_MIN_FREQ 0</span></div><div class='line' id='LC92'><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">up_min_freq</span><span class="p">;</span></div><div class='line' id='LC93'><br/></div><div class='line' id='LC94'><span class="cm">/*</span></div><div class='line' id='LC95'><span class="cm"> * When sleep_max_freq&gt;0 the frequency when suspended will be capped</span></div><div class='line' id='LC96'><span class="cm"> * by this frequency. Also will wake up at max frequency of policy</span></div><div class='line' id='LC97'><span class="cm"> * to minimize wakeup issues.</span></div><div class='line' id='LC98'><span class="cm"> * Set sleep_max_freq=0 to disable this behavior.</span></div><div class='line' id='LC99'><span class="cm"> */</span></div><div class='line' id='LC100'><span class="cp">#define DEFAULT_SLEEP_MAX_FREQ 400000</span></div><div class='line' id='LC101'><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">sleep_max_freq</span><span class="p">;</span></div><div class='line' id='LC102'><br/></div><div class='line' id='LC103'><span class="cm">/*</span></div><div class='line' id='LC104'><span class="cm"> * The frequency to set when waking up from sleep.</span></div><div class='line' id='LC105'><span class="cm"> * When sleep_max_freq=0 this will have no effect.</span></div><div class='line' id='LC106'><span class="cm"> */</span></div><div class='line' id='LC107'><span class="cp">#define DEFAULT_SLEEP_WAKEUP_FREQ 800000</span></div><div class='line' id='LC108'><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">sleep_wakeup_freq</span><span class="p">;</span></div><div class='line' id='LC109'><br/></div><div class='line' id='LC110'><span class="cm">/*</span></div><div class='line' id='LC111'><span class="cm"> * When awake_min_freq&gt;0 the frequency when not suspended will not</span></div><div class='line' id='LC112'><span class="cm"> * go below this frequency.</span></div><div class='line' id='LC113'><span class="cm"> * Set awake_min_freq=0 to disable this behavior.</span></div><div class='line' id='LC114'><span class="cm"> */</span></div><div class='line' id='LC115'><span class="cp">#define DEFAULT_AWAKE_MIN_FREQ 200000</span></div><div class='line' id='LC116'><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">awake_min_freq</span><span class="p">;</span></div><div class='line' id='LC117'><br/></div><div class='line' id='LC118'><span class="cm">/*</span></div><div class='line' id='LC119'><span class="cm"> * Sampling rate, I highly recommend to leave it at 2.</span></div><div class='line' id='LC120'><span class="cm"> */</span></div><div class='line' id='LC121'><span class="cp">#define DEFAULT_SAMPLE_RATE_JIFFIES 2</span></div><div class='line' id='LC122'><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">sample_rate_jiffies</span><span class="p">;</span></div><div class='line' id='LC123'><br/></div><div class='line' id='LC124'><span class="cm">/*</span></div><div class='line' id='LC125'><span class="cm"> * Freqeuncy delta when ramping up.</span></div><div class='line' id='LC126'><span class="cm"> * zero disables and causes to always jump straight to max frequency.</span></div><div class='line' id='LC127'><span class="cm"> */</span></div><div class='line' id='LC128'><span class="cp">#define DEFAULT_RAMP_UP_STEP 600000</span></div><div class='line' id='LC129'><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">ramp_up_step</span><span class="p">;</span></div><div class='line' id='LC130'><br/></div><div class='line' id='LC131'><span class="cm">/*</span></div><div class='line' id='LC132'><span class="cm"> * Freqeuncy delta when ramping down.</span></div><div class='line' id='LC133'><span class="cm"> * zero disables and will calculate ramp down according to load heuristic.</span></div><div class='line' id='LC134'><span class="cm"> */</span></div><div class='line' id='LC135'><span class="cp">#define DEFAULT_RAMP_DOWN_STEP 0</span></div><div class='line' id='LC136'><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">ramp_down_step</span><span class="p">;</span></div><div class='line' id='LC137'><br/></div><div class='line' id='LC138'><span class="cm">/*</span></div><div class='line' id='LC139'><span class="cm"> * CPU freq will be increased if measured load &gt; max_cpu_load;</span></div><div class='line' id='LC140'><span class="cm"> */</span></div><div class='line' id='LC141'><span class="cp">#define DEFAULT_MAX_CPU_LOAD 65</span></div><div class='line' id='LC142'><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">max_cpu_load</span><span class="p">;</span></div><div class='line' id='LC143'><br/></div><div class='line' id='LC144'><span class="cm">/*</span></div><div class='line' id='LC145'><span class="cm"> * CPU freq will be decreased if measured load &lt; min_cpu_load;</span></div><div class='line' id='LC146'><span class="cm"> */</span></div><div class='line' id='LC147'><span class="cp">#define DEFAULT_MIN_CPU_LOAD 50</span></div><div class='line' id='LC148'><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">min_cpu_load</span><span class="p">;</span></div><div class='line' id='LC149'><br/></div><div class='line' id='LC150'><br/></div><div class='line' id='LC151'><span class="k">static</span> <span class="kt">int</span> <span class="n">cpufreq_governor_savagedzen</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span></div><div class='line' id='LC152'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">event</span><span class="p">);</span></div><div class='line' id='LC153'><br/></div><div class='line' id='LC154'><span class="cp">#ifndef CONFIG_CPU_FREQ_DEFAULT_GOV_SAVAGEDZEN</span></div><div class='line' id='LC155'><span class="k">static</span></div><div class='line' id='LC156'><span class="cp">#endif</span></div><div class='line' id='LC157'><span class="k">struct</span> <span class="n">cpufreq_governor</span> <span class="n">cpufreq_gov_savagedzen</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC158'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">.</span><span class="n">name</span> <span class="o">=</span> <span class="s">&quot;SavagedZen&quot;</span><span class="p">,</span></div><div class='line' id='LC159'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">.</span><span class="n">governor</span> <span class="o">=</span> <span class="n">cpufreq_governor_savagedzen</span><span class="p">,</span></div><div class='line' id='LC160'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">.</span><span class="n">max_transition_latency</span> <span class="o">=</span> <span class="mi">9000000</span><span class="p">,</span></div><div class='line' id='LC161'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">.</span><span class="n">owner</span> <span class="o">=</span> <span class="n">THIS_MODULE</span><span class="p">,</span></div><div class='line' id='LC162'><span class="p">};</span></div><div class='line' id='LC163'><br/></div><div class='line' id='LC164'><span class="k">static</span> <span class="kt">void</span> <span class="nf">savagedzen_update_min_max</span><span class="p">(</span><span class="k">struct</span> <span class="n">savagedzen_info_s</span> <span class="o">*</span><span class="n">this_savagedzen</span><span class="p">,</span> <span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span> <span class="kt">int</span> <span class="n">suspend</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC165'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">suspend</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC166'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">min_speed</span> <span class="o">=</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">min</span><span class="p">;</span></div><div class='line' id='LC167'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">max_speed</span> <span class="o">=</span> <span class="c1">// sleep_max_freq; but make sure it obeys the policy min/max</span></div><div class='line' id='LC168'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">policy</span><span class="o">-&gt;</span><span class="n">max</span> <span class="o">&gt;</span> <span class="n">sleep_max_freq</span> <span class="o">?</span> <span class="p">(</span><span class="n">sleep_max_freq</span> <span class="o">&gt;</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">min</span> <span class="o">?</span> <span class="n">sleep_max_freq</span> <span class="o">:</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">min</span><span class="p">)</span> <span class="o">:</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">max</span><span class="p">;</span></div><div class='line' id='LC169'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC170'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">min_speed</span> <span class="o">=</span> <span class="c1">// awake_min_freq; but make sure it obeys the policy min/max</span></div><div class='line' id='LC171'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">policy</span><span class="o">-&gt;</span><span class="n">min</span> <span class="o">&lt;</span> <span class="n">awake_min_freq</span> <span class="o">?</span> <span class="p">(</span><span class="n">awake_min_freq</span> <span class="o">&lt;</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">max</span> <span class="o">?</span> <span class="n">awake_min_freq</span> <span class="o">:</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">max</span><span class="p">)</span> <span class="o">:</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">min</span><span class="p">;</span></div><div class='line' id='LC172'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">max_speed</span> <span class="o">=</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">max</span><span class="p">;</span></div><div class='line' id='LC173'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC174'><span class="p">}</span></div><div class='line' id='LC175'><br/></div><div class='line' id='LC176'><span class="kr">inline</span> <span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="nf">validate_freq</span><span class="p">(</span><span class="k">struct</span> <span class="n">savagedzen_info_s</span> <span class="o">*</span><span class="n">this_savagedzen</span><span class="p">,</span> <span class="kt">int</span> <span class="n">freq</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC177'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">freq</span> <span class="o">&gt;</span> <span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">max_speed</span><span class="p">)</span></div><div class='line' id='LC178'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">max_speed</span><span class="p">;</span></div><div class='line' id='LC179'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">freq</span> <span class="o">&lt;</span> <span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">min_speed</span><span class="p">)</span></div><div class='line' id='LC180'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">min_speed</span><span class="p">;</span></div><div class='line' id='LC181'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">freq</span><span class="p">;</span></div><div class='line' id='LC182'><span class="p">}</span></div><div class='line' id='LC183'><br/></div><div class='line' id='LC184'><span class="k">static</span> <span class="kt">void</span> <span class="nf">reset_timer</span><span class="p">(</span><span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">cpu</span><span class="p">,</span> <span class="k">struct</span> <span class="n">savagedzen_info_s</span> <span class="o">*</span><span class="n">this_savagedzen</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC185'>&nbsp;&nbsp;<span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">time_in_idle</span> <span class="o">=</span> <span class="n">get_cpu_idle_time_us</span><span class="p">(</span><span class="n">cpu</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">idle_exit_time</span><span class="p">);</span></div><div class='line' id='LC186'>&nbsp;&nbsp;<span class="n">mod_timer</span><span class="p">(</span><span class="o">&amp;</span><span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">timer</span><span class="p">,</span> <span class="n">jiffies</span> <span class="o">+</span> <span class="n">sample_rate_jiffies</span><span class="p">);</span></div><div class='line' id='LC187'><span class="p">}</span></div><div class='line' id='LC188'><br/></div><div class='line' id='LC189'><span class="k">static</span> <span class="kt">void</span> <span class="nf">cpufreq_savagedzen_timer</span><span class="p">(</span><span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">data</span><span class="p">)</span></div><div class='line' id='LC190'><span class="p">{</span></div><div class='line' id='LC191'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">u64</span> <span class="n">delta_idle</span><span class="p">;</span></div><div class='line' id='LC192'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">u64</span> <span class="n">delta_time</span><span class="p">;</span></div><div class='line' id='LC193'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">cpu_load</span><span class="p">;</span></div><div class='line' id='LC194'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">u64</span> <span class="n">update_time</span><span class="p">;</span></div><div class='line' id='LC195'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">u64</span> <span class="n">now_idle</span><span class="p">;</span></div><div class='line' id='LC196'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">savagedzen_info_s</span> <span class="o">*</span><span class="n">this_savagedzen</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">savagedzen_info</span><span class="p">,</span> <span class="n">data</span><span class="p">);</span></div><div class='line' id='LC197'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span> <span class="o">=</span> <span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">cur_policy</span><span class="p">;</span></div><div class='line' id='LC198'><br/></div><div class='line' id='LC199'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">now_idle</span> <span class="o">=</span> <span class="n">get_cpu_idle_time_us</span><span class="p">(</span><span class="n">data</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">update_time</span><span class="p">);</span></div><div class='line' id='LC200'><br/></div><div class='line' id='LC201'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">idle_exit_time</span> <span class="o">==</span> <span class="mi">0</span> <span class="o">||</span> <span class="n">update_time</span> <span class="o">==</span> <span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">idle_exit_time</span><span class="p">)</span></div><div class='line' id='LC202'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC203'><br/></div><div class='line' id='LC204'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">delta_idle</span> <span class="o">=</span> <span class="n">cputime64_sub</span><span class="p">(</span><span class="n">now_idle</span><span class="p">,</span> <span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">time_in_idle</span><span class="p">);</span></div><div class='line' id='LC205'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">delta_time</span> <span class="o">=</span> <span class="n">cputime64_sub</span><span class="p">(</span><span class="n">update_time</span><span class="p">,</span> <span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">idle_exit_time</span><span class="p">);</span></div><div class='line' id='LC206'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">//printk(KERN_INFO &quot;savagedzenT: t=%llu i=%llu\n&quot;,cputime64_sub(update_time,this_savagedzen-&gt;idle_exit_time),delta_idle);</span></div><div class='line' id='LC207'><br/></div><div class='line' id='LC208'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// If timer ran less than 1ms after short-term sample started, retry.</span></div><div class='line' id='LC209'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">delta_time</span> <span class="o">&lt;</span> <span class="mi">1000</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC210'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">timer_pending</span><span class="p">(</span><span class="o">&amp;</span><span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">timer</span><span class="p">))</span></div><div class='line' id='LC211'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">reset_timer</span><span class="p">(</span><span class="n">data</span><span class="p">,</span><span class="n">this_savagedzen</span><span class="p">);</span></div><div class='line' id='LC212'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC213'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC214'><br/></div><div class='line' id='LC215'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">delta_idle</span> <span class="o">&gt;</span> <span class="n">delta_time</span><span class="p">)</span></div><div class='line' id='LC216'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">cpu_load</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC217'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">else</span></div><div class='line' id='LC218'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">cpu_load</span> <span class="o">=</span> <span class="mi">100</span> <span class="o">*</span> <span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span><span class="p">)(</span><span class="n">delta_time</span> <span class="o">-</span> <span class="n">delta_idle</span><span class="p">)</span> <span class="o">/</span> <span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span><span class="p">)</span><span class="n">delta_time</span><span class="p">;</span></div><div class='line' id='LC219'><br/></div><div class='line' id='LC220'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">debug_mask</span> <span class="o">&amp;</span> <span class="n">SAVAGEDZEN_DEBUG_LOAD</span><span class="p">)</span></div><div class='line' id='LC221'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">printk</span><span class="p">(</span><span class="n">KERN_INFO</span> <span class="s">&quot;savagedzenT @ %d: load %d (delta_time %llu)</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span><span class="p">,</span><span class="n">cpu_load</span><span class="p">,</span><span class="n">delta_time</span><span class="p">);</span></div><div class='line' id='LC222'><br/></div><div class='line' id='LC223'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">cur_cpu_load</span> <span class="o">=</span> <span class="n">cpu_load</span><span class="p">;</span></div><div class='line' id='LC224'><br/></div><div class='line' id='LC225'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// Scale up if load is above max or if there where no idle cycles since coming out of idle.</span></div><div class='line' id='LC226'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">cpu_load</span> <span class="o">&gt;</span> <span class="n">max_cpu_load</span> <span class="o">||</span> <span class="n">delta_idle</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC227'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span> <span class="o">==</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">max</span><span class="p">)</span></div><div class='line' id='LC228'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC229'><br/></div><div class='line' id='LC230'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">nr_running</span><span class="p">()</span> <span class="o">&lt;</span> <span class="mi">1</span><span class="p">)</span></div><div class='line' id='LC231'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC232'><br/></div><div class='line' id='LC233'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">cputime64_sub</span><span class="p">(</span><span class="n">update_time</span><span class="p">,</span> <span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">freq_change_time</span><span class="p">)</span> <span class="o">&lt;</span> <span class="n">up_rate_us</span><span class="p">)</span></div><div class='line' id='LC234'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC235'><br/></div><div class='line' id='LC236'><br/></div><div class='line' id='LC237'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">force_ramp_up</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC238'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">cpumask_set_cpu</span><span class="p">(</span><span class="n">data</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">work_cpumask</span><span class="p">);</span></div><div class='line' id='LC239'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">queue_work</span><span class="p">(</span><span class="n">up_wq</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">freq_scale_work</span><span class="p">);</span></div><div class='line' id='LC240'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC241'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC242'><br/></div><div class='line' id='LC243'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/*</span></div><div class='line' id='LC244'><span class="cm">         * There is a window where if the cpu utlization can go from low to high</span></div><div class='line' id='LC245'><span class="cm">         * between the timer expiring, delta_idle will be &gt; 0 and the cpu will</span></div><div class='line' id='LC246'><span class="cm">         * be 100% busy, preventing idle from running, and this timer from</span></div><div class='line' id='LC247'><span class="cm">         * firing. So setup another timer to fire to check cpu utlization.</span></div><div class='line' id='LC248'><span class="cm">         * Do not setup the timer if there is no scheduled work or if at max speed.</span></div><div class='line' id='LC249'><span class="cm">         */</span></div><div class='line' id='LC250'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span> <span class="o">&lt;</span> <span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">max_speed</span> <span class="o">&amp;&amp;</span> <span class="o">!</span><span class="n">timer_pending</span><span class="p">(</span><span class="o">&amp;</span><span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">timer</span><span class="p">)</span> <span class="o">&amp;&amp;</span> <span class="n">nr_running</span><span class="p">()</span> <span class="o">&gt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC251'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">reset_timer</span><span class="p">(</span><span class="n">data</span><span class="p">,</span><span class="n">this_savagedzen</span><span class="p">);</span></div><div class='line' id='LC252'><br/></div><div class='line' id='LC253'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span> <span class="o">==</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">min</span><span class="p">)</span></div><div class='line' id='LC254'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC255'><br/></div><div class='line' id='LC256'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/*</span></div><div class='line' id='LC257'><span class="cm">         * Do not scale down unless we have been at this frequency for the</span></div><div class='line' id='LC258'><span class="cm">         * minimum sample time.</span></div><div class='line' id='LC259'><span class="cm">         */</span></div><div class='line' id='LC260'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">cputime64_sub</span><span class="p">(</span><span class="n">update_time</span><span class="p">,</span> <span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">freq_change_time</span><span class="p">)</span> <span class="o">&lt;</span> <span class="n">down_rate_us</span><span class="p">)</span></div><div class='line' id='LC261'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC262'><br/></div><div class='line' id='LC263'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">cpumask_set_cpu</span><span class="p">(</span><span class="n">data</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">work_cpumask</span><span class="p">);</span></div><div class='line' id='LC264'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">queue_work</span><span class="p">(</span><span class="n">down_wq</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">freq_scale_work</span><span class="p">);</span></div><div class='line' id='LC265'><span class="p">}</span></div><div class='line' id='LC266'><br/></div><div class='line' id='LC267'><span class="k">static</span> <span class="kt">void</span> <span class="nf">cpufreq_idle</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC268'><span class="p">{</span></div><div class='line' id='LC269'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">savagedzen_info_s</span> <span class="o">*</span><span class="n">this_savagedzen</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">savagedzen_info</span><span class="p">,</span> <span class="n">smp_processor_id</span><span class="p">());</span></div><div class='line' id='LC270'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span> <span class="o">=</span> <span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">cur_policy</span><span class="p">;</span></div><div class='line' id='LC271'><br/></div><div class='line' id='LC272'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">enable</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC273'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pm_idle_old</span><span class="p">();</span></div><div class='line' id='LC274'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC275'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC276'><br/></div><div class='line' id='LC277'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span> <span class="o">==</span> <span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">min_speed</span> <span class="o">&amp;&amp;</span> <span class="n">timer_pending</span><span class="p">(</span><span class="o">&amp;</span><span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">timer</span><span class="p">))</span></div><div class='line' id='LC278'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">del_timer</span><span class="p">(</span><span class="o">&amp;</span><span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">timer</span><span class="p">);</span></div><div class='line' id='LC279'><br/></div><div class='line' id='LC280'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pm_idle_old</span><span class="p">();</span></div><div class='line' id='LC281'><br/></div><div class='line' id='LC282'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">timer_pending</span><span class="p">(</span><span class="o">&amp;</span><span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">timer</span><span class="p">))</span></div><div class='line' id='LC283'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">reset_timer</span><span class="p">(</span><span class="n">smp_processor_id</span><span class="p">(),</span> <span class="n">this_savagedzen</span><span class="p">);</span></div><div class='line' id='LC284'><span class="p">}</span></div><div class='line' id='LC285'><br/></div><div class='line' id='LC286'><span class="cm">/* We use the same work function to sale up and down */</span></div><div class='line' id='LC287'><span class="k">static</span> <span class="kt">void</span> <span class="nf">cpufreq_savagedzen_freq_change_time_work</span><span class="p">(</span><span class="k">struct</span> <span class="n">work_struct</span> <span class="o">*</span><span class="n">work</span><span class="p">)</span></div><div class='line' id='LC288'><span class="p">{</span></div><div class='line' id='LC289'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">cpu</span><span class="p">;</span></div><div class='line' id='LC290'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">new_freq</span><span class="p">;</span></div><div class='line' id='LC291'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">force_ramp_up</span><span class="p">;</span></div><div class='line' id='LC292'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">cpu_load</span><span class="p">;</span></div><div class='line' id='LC293'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">savagedzen_info_s</span> <span class="o">*</span><span class="n">this_savagedzen</span><span class="p">;</span></div><div class='line' id='LC294'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">;</span></div><div class='line' id='LC295'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">relation</span> <span class="o">=</span> <span class="n">CPUFREQ_RELATION_L</span><span class="p">;</span></div><div class='line' id='LC296'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">cpumask_t</span> <span class="n">tmp_mask</span> <span class="o">=</span> <span class="n">work_cpumask</span><span class="p">;</span></div><div class='line' id='LC297'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">for_each_cpu</span><span class="p">(</span><span class="n">cpu</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">tmp_mask</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC298'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">this_savagedzen</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">savagedzen_info</span><span class="p">,</span> <span class="n">cpu</span><span class="p">);</span></div><div class='line' id='LC299'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">policy</span> <span class="o">=</span> <span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">cur_policy</span><span class="p">;</span></div><div class='line' id='LC300'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">cpu_load</span> <span class="o">=</span> <span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">cur_cpu_load</span><span class="p">;</span></div><div class='line' id='LC301'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">force_ramp_up</span> <span class="o">=</span> <span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">force_ramp_up</span> <span class="o">&amp;&amp;</span> <span class="n">nr_running</span><span class="p">()</span> <span class="o">&gt;</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC302'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">force_ramp_up</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC303'><br/></div><div class='line' id='LC304'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">force_ramp_up</span> <span class="o">||</span> <span class="n">cpu_load</span> <span class="o">&gt;</span> <span class="n">max_cpu_load</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC305'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">force_ramp_up</span> <span class="o">&amp;&amp;</span> <span class="n">up_min_freq</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC306'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">new_freq</span> <span class="o">=</span> <span class="n">up_min_freq</span><span class="p">;</span></div><div class='line' id='LC307'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">relation</span> <span class="o">=</span> <span class="n">CPUFREQ_RELATION_L</span><span class="p">;</span></div><div class='line' id='LC308'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">ramp_up_step</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC309'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">new_freq</span> <span class="o">=</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span> <span class="o">+</span> <span class="n">ramp_up_step</span><span class="p">;</span></div><div class='line' id='LC310'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">relation</span> <span class="o">=</span> <span class="n">CPUFREQ_RELATION_H</span><span class="p">;</span></div><div class='line' id='LC311'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC312'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">new_freq</span> <span class="o">=</span> <span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">max_speed</span><span class="p">;</span></div><div class='line' id='LC313'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">relation</span> <span class="o">=</span> <span class="n">CPUFREQ_RELATION_H</span><span class="p">;</span></div><div class='line' id='LC314'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC315'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC316'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">cpu_load</span> <span class="o">&lt;</span> <span class="n">min_cpu_load</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC317'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">ramp_down_step</span><span class="p">)</span></div><div class='line' id='LC318'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">new_freq</span> <span class="o">=</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span> <span class="o">-</span> <span class="n">ramp_down_step</span><span class="p">;</span></div><div class='line' id='LC319'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC320'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">cpu_load</span> <span class="o">+=</span> <span class="mi">100</span> <span class="o">-</span> <span class="n">max_cpu_load</span><span class="p">;</span> <span class="c1">// dummy load.</span></div><div class='line' id='LC321'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">new_freq</span> <span class="o">=</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span> <span class="o">*</span> <span class="n">cpu_load</span> <span class="o">/</span> <span class="mi">100</span><span class="p">;</span></div><div class='line' id='LC322'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC323'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">relation</span> <span class="o">=</span> <span class="n">CPUFREQ_RELATION_L</span><span class="p">;</span></div><div class='line' id='LC324'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC325'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">else</span> <span class="n">new_freq</span> <span class="o">=</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span><span class="p">;</span></div><div class='line' id='LC326'><br/></div><div class='line' id='LC327'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">new_freq</span> <span class="o">=</span> <span class="n">validate_freq</span><span class="p">(</span><span class="n">this_savagedzen</span><span class="p">,</span><span class="n">new_freq</span><span class="p">);</span></div><div class='line' id='LC328'><br/></div><div class='line' id='LC329'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">new_freq</span> <span class="o">!=</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC330'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">debug_mask</span> <span class="o">&amp;</span> <span class="n">SAVAGEDZEN_DEBUG_JUMPS</span><span class="p">)</span></div><div class='line' id='LC331'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">printk</span><span class="p">(</span><span class="n">KERN_INFO</span> <span class="s">&quot;savagedzenQ: jumping from %d to %d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span><span class="p">,</span><span class="n">new_freq</span><span class="p">);</span></div><div class='line' id='LC332'><br/></div><div class='line' id='LC333'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__cpufreq_driver_target</span><span class="p">(</span><span class="n">policy</span><span class="p">,</span> <span class="n">new_freq</span><span class="p">,</span> <span class="n">relation</span><span class="p">);</span></div><div class='line' id='LC334'><br/></div><div class='line' id='LC335'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">freq_change_time_in_idle</span> <span class="o">=</span></div><div class='line' id='LC336'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">get_cpu_idle_time_us</span><span class="p">(</span><span class="n">cpu</span><span class="p">,</span><span class="o">&amp;</span><span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">freq_change_time</span><span class="p">);</span></div><div class='line' id='LC337'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC338'><br/></div><div class='line' id='LC339'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">cpumask_clear_cpu</span><span class="p">(</span><span class="n">cpu</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">work_cpumask</span><span class="p">);</span></div><div class='line' id='LC340'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC341'><span class="p">}</span></div><div class='line' id='LC342'><br/></div><div class='line' id='LC343'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">show_debug_mask</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">)</span></div><div class='line' id='LC344'><span class="p">{</span></div><div class='line' id='LC345'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">sprintf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%lu</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">debug_mask</span><span class="p">);</span></div><div class='line' id='LC346'><span class="p">}</span></div><div class='line' id='LC347'><br/></div><div class='line' id='LC348'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_debug_mask</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC349'><span class="p">{</span></div><div class='line' id='LC350'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">ssize_t</span> <span class="n">res</span><span class="p">;</span></div><div class='line' id='LC351'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC352'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">res</span> <span class="o">=</span> <span class="n">strict_strtoul</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">input</span><span class="p">);</span></div><div class='line' id='LC353'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">res</span> <span class="o">&gt;=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC354'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">debug_mask</span> <span class="o">=</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC355'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">res</span><span class="p">;</span></div><div class='line' id='LC356'><span class="p">}</span></div><div class='line' id='LC357'><br/></div><div class='line' id='LC358'><span class="k">static</span> <span class="k">struct</span> <span class="n">freq_attr</span> <span class="n">debug_mask_attr</span> <span class="o">=</span> <span class="n">__ATTR</span><span class="p">(</span><span class="n">debug_mask</span><span class="p">,</span> <span class="mo">0644</span><span class="p">,</span></div><div class='line' id='LC359'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">show_debug_mask</span><span class="p">,</span> <span class="n">store_debug_mask</span><span class="p">);</span></div><div class='line' id='LC360'><br/></div><div class='line' id='LC361'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">show_up_rate_us</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">)</span></div><div class='line' id='LC362'><span class="p">{</span></div><div class='line' id='LC363'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">sprintf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%lu</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">up_rate_us</span><span class="p">);</span></div><div class='line' id='LC364'><span class="p">}</span></div><div class='line' id='LC365'><br/></div><div class='line' id='LC366'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_up_rate_us</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC367'><span class="p">{</span></div><div class='line' id='LC368'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">ssize_t</span> <span class="n">res</span><span class="p">;</span></div><div class='line' id='LC369'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC370'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">res</span> <span class="o">=</span> <span class="n">strict_strtoul</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">input</span><span class="p">);</span></div><div class='line' id='LC371'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">res</span> <span class="o">&gt;=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">input</span> <span class="o">&gt;=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">input</span> <span class="o">&lt;=</span> <span class="mi">100000000</span><span class="p">)</span></div><div class='line' id='LC372'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">up_rate_us</span> <span class="o">=</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC373'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">res</span><span class="p">;</span></div><div class='line' id='LC374'><span class="p">}</span></div><div class='line' id='LC375'><br/></div><div class='line' id='LC376'><span class="k">static</span> <span class="k">struct</span> <span class="n">freq_attr</span> <span class="n">up_rate_us_attr</span> <span class="o">=</span> <span class="n">__ATTR</span><span class="p">(</span><span class="n">up_rate_us</span><span class="p">,</span> <span class="mo">0644</span><span class="p">,</span></div><div class='line' id='LC377'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">show_up_rate_us</span><span class="p">,</span> <span class="n">store_up_rate_us</span><span class="p">);</span></div><div class='line' id='LC378'><br/></div><div class='line' id='LC379'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">show_down_rate_us</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">)</span></div><div class='line' id='LC380'><span class="p">{</span></div><div class='line' id='LC381'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">sprintf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%lu</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">down_rate_us</span><span class="p">);</span></div><div class='line' id='LC382'><span class="p">}</span></div><div class='line' id='LC383'><br/></div><div class='line' id='LC384'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_down_rate_us</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC385'><span class="p">{</span></div><div class='line' id='LC386'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">ssize_t</span> <span class="n">res</span><span class="p">;</span></div><div class='line' id='LC387'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC388'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">res</span> <span class="o">=</span> <span class="n">strict_strtoul</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">input</span><span class="p">);</span></div><div class='line' id='LC389'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">res</span> <span class="o">&gt;=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">input</span> <span class="o">&gt;=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">input</span> <span class="o">&lt;=</span> <span class="mi">100000000</span><span class="p">)</span></div><div class='line' id='LC390'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">down_rate_us</span> <span class="o">=</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC391'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">res</span><span class="p">;</span></div><div class='line' id='LC392'><span class="p">}</span></div><div class='line' id='LC393'><br/></div><div class='line' id='LC394'><span class="k">static</span> <span class="k">struct</span> <span class="n">freq_attr</span> <span class="n">down_rate_us_attr</span> <span class="o">=</span> <span class="n">__ATTR</span><span class="p">(</span><span class="n">down_rate_us</span><span class="p">,</span> <span class="mo">0644</span><span class="p">,</span></div><div class='line' id='LC395'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">show_down_rate_us</span><span class="p">,</span> <span class="n">store_down_rate_us</span><span class="p">);</span></div><div class='line' id='LC396'><br/></div><div class='line' id='LC397'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">show_up_min_freq</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">)</span></div><div class='line' id='LC398'><span class="p">{</span></div><div class='line' id='LC399'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">sprintf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%u</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">up_min_freq</span><span class="p">);</span></div><div class='line' id='LC400'><span class="p">}</span></div><div class='line' id='LC401'><br/></div><div class='line' id='LC402'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_up_min_freq</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC403'><span class="p">{</span></div><div class='line' id='LC404'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">ssize_t</span> <span class="n">res</span><span class="p">;</span></div><div class='line' id='LC405'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC406'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">res</span> <span class="o">=</span> <span class="n">strict_strtoul</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">input</span><span class="p">);</span></div><div class='line' id='LC407'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">res</span> <span class="o">&gt;=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">input</span> <span class="o">&gt;=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC408'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">up_min_freq</span> <span class="o">=</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC409'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">res</span><span class="p">;</span></div><div class='line' id='LC410'><span class="p">}</span></div><div class='line' id='LC411'><br/></div><div class='line' id='LC412'><span class="k">static</span> <span class="k">struct</span> <span class="n">freq_attr</span> <span class="n">up_min_freq_attr</span> <span class="o">=</span> <span class="n">__ATTR</span><span class="p">(</span><span class="n">up_min_freq</span><span class="p">,</span> <span class="mo">0644</span><span class="p">,</span></div><div class='line' id='LC413'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">show_up_min_freq</span><span class="p">,</span> <span class="n">store_up_min_freq</span><span class="p">);</span></div><div class='line' id='LC414'><br/></div><div class='line' id='LC415'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">show_sleep_max_freq</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">)</span></div><div class='line' id='LC416'><span class="p">{</span></div><div class='line' id='LC417'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">sprintf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%u</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">sleep_max_freq</span><span class="p">);</span></div><div class='line' id='LC418'><span class="p">}</span></div><div class='line' id='LC419'><br/></div><div class='line' id='LC420'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_sleep_max_freq</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC421'><span class="p">{</span></div><div class='line' id='LC422'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">ssize_t</span> <span class="n">res</span><span class="p">;</span></div><div class='line' id='LC423'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC424'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">res</span> <span class="o">=</span> <span class="n">strict_strtoul</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">input</span><span class="p">);</span></div><div class='line' id='LC425'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">res</span> <span class="o">&gt;=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">input</span> <span class="o">&gt;=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC426'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">sleep_max_freq</span> <span class="o">=</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC427'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">res</span><span class="p">;</span></div><div class='line' id='LC428'><span class="p">}</span></div><div class='line' id='LC429'><br/></div><div class='line' id='LC430'><span class="k">static</span> <span class="k">struct</span> <span class="n">freq_attr</span> <span class="n">sleep_max_freq_attr</span> <span class="o">=</span> <span class="n">__ATTR</span><span class="p">(</span><span class="n">sleep_max_freq</span><span class="p">,</span> <span class="mo">0644</span><span class="p">,</span></div><div class='line' id='LC431'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">show_sleep_max_freq</span><span class="p">,</span> <span class="n">store_sleep_max_freq</span><span class="p">);</span></div><div class='line' id='LC432'><br/></div><div class='line' id='LC433'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">show_sleep_wakeup_freq</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">)</span></div><div class='line' id='LC434'><span class="p">{</span></div><div class='line' id='LC435'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">sprintf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%u</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">sleep_wakeup_freq</span><span class="p">);</span></div><div class='line' id='LC436'><span class="p">}</span></div><div class='line' id='LC437'><br/></div><div class='line' id='LC438'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_sleep_wakeup_freq</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC439'><span class="p">{</span></div><div class='line' id='LC440'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">ssize_t</span> <span class="n">res</span><span class="p">;</span></div><div class='line' id='LC441'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC442'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">res</span> <span class="o">=</span> <span class="n">strict_strtoul</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">input</span><span class="p">);</span></div><div class='line' id='LC443'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">res</span> <span class="o">&gt;=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">input</span> <span class="o">&gt;=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC444'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">sleep_wakeup_freq</span> <span class="o">=</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC445'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">res</span><span class="p">;</span></div><div class='line' id='LC446'><span class="p">}</span></div><div class='line' id='LC447'><br/></div><div class='line' id='LC448'><span class="k">static</span> <span class="k">struct</span> <span class="n">freq_attr</span> <span class="n">sleep_wakeup_freq_attr</span> <span class="o">=</span> <span class="n">__ATTR</span><span class="p">(</span><span class="n">sleep_wakeup_freq</span><span class="p">,</span> <span class="mo">0644</span><span class="p">,</span></div><div class='line' id='LC449'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">show_sleep_wakeup_freq</span><span class="p">,</span> <span class="n">store_sleep_wakeup_freq</span><span class="p">);</span></div><div class='line' id='LC450'><br/></div><div class='line' id='LC451'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">show_awake_min_freq</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">)</span></div><div class='line' id='LC452'><span class="p">{</span></div><div class='line' id='LC453'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">sprintf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%u</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">awake_min_freq</span><span class="p">);</span></div><div class='line' id='LC454'><span class="p">}</span></div><div class='line' id='LC455'><br/></div><div class='line' id='LC456'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_awake_min_freq</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC457'><span class="p">{</span></div><div class='line' id='LC458'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">ssize_t</span> <span class="n">res</span><span class="p">;</span></div><div class='line' id='LC459'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC460'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">res</span> <span class="o">=</span> <span class="n">strict_strtoul</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">input</span><span class="p">);</span></div><div class='line' id='LC461'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">res</span> <span class="o">&gt;=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">input</span> <span class="o">&gt;=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC462'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">awake_min_freq</span> <span class="o">=</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC463'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">res</span><span class="p">;</span></div><div class='line' id='LC464'><span class="p">}</span></div><div class='line' id='LC465'><br/></div><div class='line' id='LC466'><span class="k">static</span> <span class="k">struct</span> <span class="n">freq_attr</span> <span class="n">awake_min_freq_attr</span> <span class="o">=</span> <span class="n">__ATTR</span><span class="p">(</span><span class="n">awake_min_freq</span><span class="p">,</span> <span class="mo">0644</span><span class="p">,</span></div><div class='line' id='LC467'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">show_awake_min_freq</span><span class="p">,</span> <span class="n">store_awake_min_freq</span><span class="p">);</span></div><div class='line' id='LC468'><br/></div><div class='line' id='LC469'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">show_sample_rate_jiffies</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">)</span></div><div class='line' id='LC470'><span class="p">{</span></div><div class='line' id='LC471'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">sprintf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%u</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">sample_rate_jiffies</span><span class="p">);</span></div><div class='line' id='LC472'><span class="p">}</span></div><div class='line' id='LC473'><br/></div><div class='line' id='LC474'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_sample_rate_jiffies</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC475'><span class="p">{</span></div><div class='line' id='LC476'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">ssize_t</span> <span class="n">res</span><span class="p">;</span></div><div class='line' id='LC477'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC478'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">res</span> <span class="o">=</span> <span class="n">strict_strtoul</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">input</span><span class="p">);</span></div><div class='line' id='LC479'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">res</span> <span class="o">&gt;=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">input</span> <span class="o">&gt;</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">input</span> <span class="o">&lt;=</span> <span class="mi">1000</span><span class="p">)</span></div><div class='line' id='LC480'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">sample_rate_jiffies</span> <span class="o">=</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC481'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">res</span><span class="p">;</span></div><div class='line' id='LC482'><span class="p">}</span></div><div class='line' id='LC483'><br/></div><div class='line' id='LC484'><span class="k">static</span> <span class="k">struct</span> <span class="n">freq_attr</span> <span class="n">sample_rate_jiffies_attr</span> <span class="o">=</span> <span class="n">__ATTR</span><span class="p">(</span><span class="n">sample_rate_jiffies</span><span class="p">,</span> <span class="mo">0644</span><span class="p">,</span></div><div class='line' id='LC485'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">show_sample_rate_jiffies</span><span class="p">,</span> <span class="n">store_sample_rate_jiffies</span><span class="p">);</span></div><div class='line' id='LC486'><br/></div><div class='line' id='LC487'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">show_ramp_up_step</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">)</span></div><div class='line' id='LC488'><span class="p">{</span></div><div class='line' id='LC489'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">sprintf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%u</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">ramp_up_step</span><span class="p">);</span></div><div class='line' id='LC490'><span class="p">}</span></div><div class='line' id='LC491'><br/></div><div class='line' id='LC492'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_ramp_up_step</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC493'><span class="p">{</span></div><div class='line' id='LC494'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">ssize_t</span> <span class="n">res</span><span class="p">;</span></div><div class='line' id='LC495'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC496'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">res</span> <span class="o">=</span> <span class="n">strict_strtoul</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">input</span><span class="p">);</span></div><div class='line' id='LC497'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">res</span> <span class="o">&gt;=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">input</span> <span class="o">&gt;=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC498'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ramp_up_step</span> <span class="o">=</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC499'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">res</span><span class="p">;</span></div><div class='line' id='LC500'><span class="p">}</span></div><div class='line' id='LC501'><br/></div><div class='line' id='LC502'><span class="k">static</span> <span class="k">struct</span> <span class="n">freq_attr</span> <span class="n">ramp_up_step_attr</span> <span class="o">=</span> <span class="n">__ATTR</span><span class="p">(</span><span class="n">ramp_up_step</span><span class="p">,</span> <span class="mo">0644</span><span class="p">,</span></div><div class='line' id='LC503'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">show_ramp_up_step</span><span class="p">,</span> <span class="n">store_ramp_up_step</span><span class="p">);</span></div><div class='line' id='LC504'><br/></div><div class='line' id='LC505'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">show_ramp_down_step</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">)</span></div><div class='line' id='LC506'><span class="p">{</span></div><div class='line' id='LC507'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">sprintf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%u</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">ramp_down_step</span><span class="p">);</span></div><div class='line' id='LC508'><span class="p">}</span></div><div class='line' id='LC509'><br/></div><div class='line' id='LC510'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_ramp_down_step</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC511'><span class="p">{</span></div><div class='line' id='LC512'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">ssize_t</span> <span class="n">res</span><span class="p">;</span></div><div class='line' id='LC513'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC514'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">res</span> <span class="o">=</span> <span class="n">strict_strtoul</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">input</span><span class="p">);</span></div><div class='line' id='LC515'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">res</span> <span class="o">&gt;=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">input</span> <span class="o">&gt;=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC516'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ramp_down_step</span> <span class="o">=</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC517'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">res</span><span class="p">;</span></div><div class='line' id='LC518'><span class="p">}</span></div><div class='line' id='LC519'><br/></div><div class='line' id='LC520'><span class="k">static</span> <span class="k">struct</span> <span class="n">freq_attr</span> <span class="n">ramp_down_step_attr</span> <span class="o">=</span> <span class="n">__ATTR</span><span class="p">(</span><span class="n">ramp_down_step</span><span class="p">,</span> <span class="mo">0644</span><span class="p">,</span></div><div class='line' id='LC521'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">show_ramp_down_step</span><span class="p">,</span> <span class="n">store_ramp_down_step</span><span class="p">);</span></div><div class='line' id='LC522'><br/></div><div class='line' id='LC523'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">show_max_cpu_load</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">)</span></div><div class='line' id='LC524'><span class="p">{</span></div><div class='line' id='LC525'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">sprintf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%lu</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">max_cpu_load</span><span class="p">);</span></div><div class='line' id='LC526'><span class="p">}</span></div><div class='line' id='LC527'><br/></div><div class='line' id='LC528'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_max_cpu_load</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC529'><span class="p">{</span></div><div class='line' id='LC530'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">ssize_t</span> <span class="n">res</span><span class="p">;</span></div><div class='line' id='LC531'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC532'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">res</span> <span class="o">=</span> <span class="n">strict_strtoul</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">input</span><span class="p">);</span></div><div class='line' id='LC533'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">res</span> <span class="o">&gt;=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">input</span> <span class="o">&gt;</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">input</span> <span class="o">&lt;=</span> <span class="mi">100</span><span class="p">)</span></div><div class='line' id='LC534'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">max_cpu_load</span> <span class="o">=</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC535'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">res</span><span class="p">;</span></div><div class='line' id='LC536'><span class="p">}</span></div><div class='line' id='LC537'><br/></div><div class='line' id='LC538'><span class="k">static</span> <span class="k">struct</span> <span class="n">freq_attr</span> <span class="n">max_cpu_load_attr</span> <span class="o">=</span> <span class="n">__ATTR</span><span class="p">(</span><span class="n">max_cpu_load</span><span class="p">,</span> <span class="mo">0644</span><span class="p">,</span></div><div class='line' id='LC539'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">show_max_cpu_load</span><span class="p">,</span> <span class="n">store_max_cpu_load</span><span class="p">);</span></div><div class='line' id='LC540'><br/></div><div class='line' id='LC541'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">show_min_cpu_load</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">)</span></div><div class='line' id='LC542'><span class="p">{</span></div><div class='line' id='LC543'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">sprintf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%lu</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">min_cpu_load</span><span class="p">);</span></div><div class='line' id='LC544'><span class="p">}</span></div><div class='line' id='LC545'><br/></div><div class='line' id='LC546'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_min_cpu_load</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC547'><span class="p">{</span></div><div class='line' id='LC548'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">ssize_t</span> <span class="n">res</span><span class="p">;</span></div><div class='line' id='LC549'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC550'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">res</span> <span class="o">=</span> <span class="n">strict_strtoul</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">input</span><span class="p">);</span></div><div class='line' id='LC551'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">res</span> <span class="o">&gt;=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">input</span> <span class="o">&gt;</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">input</span> <span class="o">&lt;</span> <span class="mi">100</span><span class="p">)</span></div><div class='line' id='LC552'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">min_cpu_load</span> <span class="o">=</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC553'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">res</span><span class="p">;</span></div><div class='line' id='LC554'><span class="p">}</span></div><div class='line' id='LC555'><br/></div><div class='line' id='LC556'><span class="k">static</span> <span class="k">struct</span> <span class="n">freq_attr</span> <span class="n">min_cpu_load_attr</span> <span class="o">=</span> <span class="n">__ATTR</span><span class="p">(</span><span class="n">min_cpu_load</span><span class="p">,</span> <span class="mo">0644</span><span class="p">,</span></div><div class='line' id='LC557'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">show_min_cpu_load</span><span class="p">,</span> <span class="n">store_min_cpu_load</span><span class="p">);</span></div><div class='line' id='LC558'><br/></div><div class='line' id='LC559'><span class="k">static</span> <span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span> <span class="n">savagedzen_attributes</span><span class="p">[]</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC560'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">&amp;</span><span class="n">debug_mask_attr</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC561'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">&amp;</span><span class="n">up_rate_us_attr</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC562'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">&amp;</span><span class="n">down_rate_us_attr</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC563'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">&amp;</span><span class="n">up_min_freq_attr</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC564'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">&amp;</span><span class="n">sleep_max_freq_attr</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC565'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">&amp;</span><span class="n">sleep_wakeup_freq_attr</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC566'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">&amp;</span><span class="n">awake_min_freq_attr</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC567'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">&amp;</span><span class="n">sample_rate_jiffies_attr</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC568'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">&amp;</span><span class="n">ramp_up_step_attr</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC569'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">&amp;</span><span class="n">ramp_down_step_attr</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC570'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">&amp;</span><span class="n">max_cpu_load_attr</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC571'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">&amp;</span><span class="n">min_cpu_load_attr</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC572'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">NULL</span><span class="p">,</span></div><div class='line' id='LC573'><span class="p">};</span></div><div class='line' id='LC574'><br/></div><div class='line' id='LC575'><span class="k">static</span> <span class="k">struct</span> <span class="n">attribute_group</span> <span class="n">savagedzen_attr_group</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC576'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">.</span><span class="n">attrs</span> <span class="o">=</span> <span class="n">savagedzen_attributes</span><span class="p">,</span></div><div class='line' id='LC577'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">.</span><span class="n">name</span> <span class="o">=</span> <span class="s">&quot;savagedzen&quot;</span><span class="p">,</span></div><div class='line' id='LC578'><span class="p">};</span></div><div class='line' id='LC579'><br/></div><div class='line' id='LC580'><span class="k">static</span> <span class="kt">int</span> <span class="nf">cpufreq_governor_savagedzen</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">new_policy</span><span class="p">,</span></div><div class='line' id='LC581'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">event</span><span class="p">)</span></div><div class='line' id='LC582'><span class="p">{</span></div><div class='line' id='LC583'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">cpu</span> <span class="o">=</span> <span class="n">new_policy</span><span class="o">-&gt;</span><span class="n">cpu</span><span class="p">;</span></div><div class='line' id='LC584'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">rc</span><span class="p">;</span></div><div class='line' id='LC585'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">savagedzen_info_s</span> <span class="o">*</span><span class="n">this_savagedzen</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">savagedzen_info</span><span class="p">,</span> <span class="n">cpu</span><span class="p">);</span></div><div class='line' id='LC586'><br/></div><div class='line' id='LC587'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">switch</span> <span class="p">(</span><span class="n">event</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC588'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">case</span> <span class="n">CPUFREQ_GOV_START</span>:</div><div class='line' id='LC589'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">((</span><span class="o">!</span><span class="n">cpu_online</span><span class="p">(</span><span class="n">cpu</span><span class="p">))</span> <span class="o">||</span> <span class="p">(</span><span class="o">!</span><span class="n">new_policy</span><span class="o">-&gt;</span><span class="n">cur</span><span class="p">))</span></div><div class='line' id='LC590'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="o">-</span><span class="n">EINVAL</span><span class="p">;</span></div><div class='line' id='LC591'><br/></div><div class='line' id='LC592'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/*</span></div><div class='line' id='LC593'><span class="cm">                 * Do not register the idle hook and create sysfs</span></div><div class='line' id='LC594'><span class="cm">                 * entries if we have already done so.</span></div><div class='line' id='LC595'><span class="cm">                 */</span></div><div class='line' id='LC596'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">atomic_inc_return</span><span class="p">(</span><span class="o">&amp;</span><span class="n">active_count</span><span class="p">)</span> <span class="o">&lt;=</span> <span class="mi">1</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC597'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">rc</span> <span class="o">=</span> <span class="n">sysfs_create_group</span><span class="p">(</span><span class="o">&amp;</span><span class="n">new_policy</span><span class="o">-&gt;</span><span class="n">kobj</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">savagedzen_attr_group</span><span class="p">);</span></div><div class='line' id='LC598'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">rc</span><span class="p">)</span></div><div class='line' id='LC599'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">rc</span><span class="p">;</span></div><div class='line' id='LC600'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pm_idle_old</span> <span class="o">=</span> <span class="n">pm_idle</span><span class="p">;</span></div><div class='line' id='LC601'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pm_idle</span> <span class="o">=</span> <span class="n">cpufreq_idle</span><span class="p">;</span></div><div class='line' id='LC602'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC603'><br/></div><div class='line' id='LC604'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">cur_policy</span> <span class="o">=</span> <span class="n">new_policy</span><span class="p">;</span></div><div class='line' id='LC605'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">enable</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC606'><br/></div><div class='line' id='LC607'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// notice no break here!</span></div><div class='line' id='LC608'><br/></div><div class='line' id='LC609'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">case</span> <span class="n">CPUFREQ_GOV_LIMITS</span>:</div><div class='line' id='LC610'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">savagedzen_update_min_max</span><span class="p">(</span><span class="n">this_savagedzen</span><span class="p">,</span><span class="n">new_policy</span><span class="p">,</span><span class="n">suspended</span><span class="p">);</span></div><div class='line' id='LC611'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">cur_policy</span><span class="o">-&gt;</span><span class="n">cur</span> <span class="o">!=</span> <span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">max_speed</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC612'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">debug_mask</span> <span class="o">&amp;</span> <span class="n">SAVAGEDZEN_DEBUG_JUMPS</span><span class="p">)</span></div><div class='line' id='LC613'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">printk</span><span class="p">(</span><span class="n">KERN_INFO</span> <span class="s">&quot;savagedzenI: initializing to %d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span><span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">max_speed</span><span class="p">);</span></div><div class='line' id='LC614'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__cpufreq_driver_target</span><span class="p">(</span><span class="n">new_policy</span><span class="p">,</span> <span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">max_speed</span><span class="p">,</span> <span class="n">CPUFREQ_RELATION_H</span><span class="p">);</span></div><div class='line' id='LC615'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC616'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC617'><br/></div><div class='line' id='LC618'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">case</span> <span class="n">CPUFREQ_GOV_STOP</span>:</div><div class='line' id='LC619'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">del_timer</span><span class="p">(</span><span class="o">&amp;</span><span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">timer</span><span class="p">);</span></div><div class='line' id='LC620'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">enable</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC621'><br/></div><div class='line' id='LC622'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">atomic_dec_return</span><span class="p">(</span><span class="o">&amp;</span><span class="n">active_count</span><span class="p">)</span> <span class="o">&gt;</span> <span class="mi">1</span><span class="p">)</span></div><div class='line' id='LC623'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC624'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">sysfs_remove_group</span><span class="p">(</span><span class="o">&amp;</span><span class="n">new_policy</span><span class="o">-&gt;</span><span class="n">kobj</span><span class="p">,</span></div><div class='line' id='LC625'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">&amp;</span><span class="n">savagedzen_attr_group</span><span class="p">);</span></div><div class='line' id='LC626'><br/></div><div class='line' id='LC627'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pm_idle</span> <span class="o">=</span> <span class="n">pm_idle_old</span><span class="p">;</span></div><div class='line' id='LC628'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC629'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC630'><br/></div><div class='line' id='LC631'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC632'><span class="p">}</span></div><div class='line' id='LC633'><br/></div><div class='line' id='LC634'><span class="k">static</span> <span class="kt">void</span> <span class="nf">savagedzen_suspend</span><span class="p">(</span><span class="kt">int</span> <span class="n">cpu</span><span class="p">,</span> <span class="kt">int</span> <span class="n">suspend</span><span class="p">)</span></div><div class='line' id='LC635'><span class="p">{</span></div><div class='line' id='LC636'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">savagedzen_info_s</span> <span class="o">*</span><span class="n">this_savagedzen</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">savagedzen_info</span><span class="p">,</span> <span class="n">smp_processor_id</span><span class="p">());</span></div><div class='line' id='LC637'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span> <span class="o">=</span> <span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">cur_policy</span><span class="p">;</span></div><div class='line' id='LC638'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">new_freq</span><span class="p">;</span></div><div class='line' id='LC639'><br/></div><div class='line' id='LC640'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">enable</span> <span class="o">||</span> <span class="n">sleep_max_freq</span><span class="o">==</span><span class="mi">0</span><span class="p">)</span> <span class="c1">// disable behavior for sleep_max_freq==0</span></div><div class='line' id='LC641'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC642'><br/></div><div class='line' id='LC643'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">savagedzen_update_min_max</span><span class="p">(</span><span class="n">this_savagedzen</span><span class="p">,</span><span class="n">policy</span><span class="p">,</span><span class="n">suspend</span><span class="p">);</span></div><div class='line' id='LC644'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">suspend</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC645'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span> <span class="o">&gt;</span> <span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">max_speed</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC646'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">new_freq</span> <span class="o">=</span> <span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">max_speed</span><span class="p">;</span></div><div class='line' id='LC647'><br/></div><div class='line' id='LC648'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">debug_mask</span> <span class="o">&amp;</span> <span class="n">SAVAGEDZEN_DEBUG_JUMPS</span><span class="p">)</span></div><div class='line' id='LC649'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">printk</span><span class="p">(</span><span class="n">KERN_INFO</span> <span class="s">&quot;savagedzenS: suspending at %d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span><span class="n">new_freq</span><span class="p">);</span></div><div class='line' id='LC650'><br/></div><div class='line' id='LC651'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__cpufreq_driver_target</span><span class="p">(</span><span class="n">policy</span><span class="p">,</span> <span class="n">new_freq</span><span class="p">,</span></div><div class='line' id='LC652'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CPUFREQ_RELATION_H</span><span class="p">);</span></div><div class='line' id='LC653'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC654'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span> <span class="k">else</span> <span class="p">{</span> <span class="c1">// resume at max speed:</span></div><div class='line' id='LC655'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">new_freq</span> <span class="o">=</span> <span class="n">validate_freq</span><span class="p">(</span><span class="n">this_savagedzen</span><span class="p">,</span><span class="n">sleep_wakeup_freq</span><span class="p">);</span></div><div class='line' id='LC656'><br/></div><div class='line' id='LC657'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">debug_mask</span> <span class="o">&amp;</span> <span class="n">SAVAGEDZEN_DEBUG_JUMPS</span><span class="p">)</span></div><div class='line' id='LC658'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">printk</span><span class="p">(</span><span class="n">KERN_INFO</span> <span class="s">&quot;savagedzenS: awaking at %d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span><span class="n">new_freq</span><span class="p">);</span></div><div class='line' id='LC659'><br/></div><div class='line' id='LC660'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__cpufreq_driver_target</span><span class="p">(</span><span class="n">policy</span><span class="p">,</span> <span class="n">new_freq</span><span class="p">,</span></div><div class='line' id='LC661'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CPUFREQ_RELATION_L</span><span class="p">);</span></div><div class='line' id='LC662'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC663'><span class="p">}</span></div><div class='line' id='LC664'><br/></div><div class='line' id='LC665'><span class="k">static</span> <span class="kt">void</span> <span class="nf">savagedzen_early_suspend</span><span class="p">(</span><span class="k">struct</span> <span class="n">early_suspend</span> <span class="o">*</span><span class="n">handler</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC666'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC667'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">suspended</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC668'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">for_each_online_cpu</span><span class="p">(</span><span class="n">i</span><span class="p">)</span></div><div class='line' id='LC669'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">savagedzen_suspend</span><span class="p">(</span><span class="n">i</span><span class="p">,</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC670'><span class="p">}</span></div><div class='line' id='LC671'><br/></div><div class='line' id='LC672'><span class="k">static</span> <span class="kt">void</span> <span class="nf">savagedzen_late_resume</span><span class="p">(</span><span class="k">struct</span> <span class="n">early_suspend</span> <span class="o">*</span><span class="n">handler</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC673'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC674'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">suspended</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC675'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">for_each_online_cpu</span><span class="p">(</span><span class="n">i</span><span class="p">)</span></div><div class='line' id='LC676'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">savagedzen_suspend</span><span class="p">(</span><span class="n">i</span><span class="p">,</span><span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC677'><span class="p">}</span></div><div class='line' id='LC678'><br/></div><div class='line' id='LC679'><span class="k">static</span> <span class="k">struct</span> <span class="n">early_suspend</span> <span class="n">savagedzen_power_suspend</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC680'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">.</span><span class="n">suspend</span> <span class="o">=</span> <span class="n">savagedzen_early_suspend</span><span class="p">,</span></div><div class='line' id='LC681'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">.</span><span class="n">resume</span> <span class="o">=</span> <span class="n">savagedzen_late_resume</span><span class="p">,</span></div><div class='line' id='LC682'><span class="p">};</span></div><div class='line' id='LC683'><br/></div><div class='line' id='LC684'><span class="k">static</span> <span class="kt">int</span> <span class="n">__init</span> <span class="nf">cpufreq_savagedzen_init</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC685'><span class="p">{</span></div><div class='line' id='LC686'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC687'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">savagedzen_info_s</span> <span class="o">*</span><span class="n">this_savagedzen</span><span class="p">;</span></div><div class='line' id='LC688'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">debug_mask</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC689'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">up_rate_us</span> <span class="o">=</span> <span class="n">DEFAULT_UP_RATE_US</span><span class="p">;</span></div><div class='line' id='LC690'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">down_rate_us</span> <span class="o">=</span> <span class="n">DEFAULT_DOWN_RATE_US</span><span class="p">;</span></div><div class='line' id='LC691'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">up_min_freq</span> <span class="o">=</span> <span class="n">DEFAULT_UP_MIN_FREQ</span><span class="p">;</span></div><div class='line' id='LC692'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">sleep_max_freq</span> <span class="o">=</span> <span class="n">DEFAULT_SLEEP_MAX_FREQ</span><span class="p">;</span></div><div class='line' id='LC693'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">sleep_wakeup_freq</span> <span class="o">=</span> <span class="n">DEFAULT_SLEEP_WAKEUP_FREQ</span><span class="p">;</span></div><div class='line' id='LC694'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">awake_min_freq</span> <span class="o">=</span> <span class="n">DEFAULT_AWAKE_MIN_FREQ</span><span class="p">;</span></div><div class='line' id='LC695'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">sample_rate_jiffies</span> <span class="o">=</span> <span class="n">DEFAULT_SAMPLE_RATE_JIFFIES</span><span class="p">;</span></div><div class='line' id='LC696'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ramp_up_step</span> <span class="o">=</span> <span class="n">DEFAULT_RAMP_UP_STEP</span><span class="p">;</span></div><div class='line' id='LC697'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ramp_down_step</span> <span class="o">=</span> <span class="n">DEFAULT_RAMP_DOWN_STEP</span><span class="p">;</span></div><div class='line' id='LC698'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">max_cpu_load</span> <span class="o">=</span> <span class="n">DEFAULT_MAX_CPU_LOAD</span><span class="p">;</span></div><div class='line' id='LC699'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">min_cpu_load</span> <span class="o">=</span> <span class="n">DEFAULT_MIN_CPU_LOAD</span><span class="p">;</span></div><div class='line' id='LC700'><br/></div><div class='line' id='LC701'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">suspended</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC702'><br/></div><div class='line' id='LC703'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/* Initalize per-cpu data: */</span></div><div class='line' id='LC704'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">for_each_possible_cpu</span><span class="p">(</span><span class="n">i</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC705'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">this_savagedzen</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">savagedzen_info</span><span class="p">,</span> <span class="n">i</span><span class="p">);</span></div><div class='line' id='LC706'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">enable</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC707'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">cur_policy</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC708'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">force_ramp_up</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC709'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">max_speed</span> <span class="o">=</span> <span class="n">DEFAULT_SLEEP_WAKEUP_FREQ</span><span class="p">;</span></div><div class='line' id='LC710'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">min_speed</span> <span class="o">=</span> <span class="n">DEFAULT_AWAKE_MIN_FREQ</span><span class="p">;</span></div><div class='line' id='LC711'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">time_in_idle</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC712'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">idle_exit_time</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC713'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">freq_change_time</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC714'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">freq_change_time_in_idle</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC715'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">cur_cpu_load</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC716'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// intialize timer:</span></div><div class='line' id='LC717'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">init_timer_deferrable</span><span class="p">(</span><span class="o">&amp;</span><span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">timer</span><span class="p">);</span></div><div class='line' id='LC718'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">timer</span><span class="p">.</span><span class="n">function</span> <span class="o">=</span> <span class="n">cpufreq_savagedzen_timer</span><span class="p">;</span></div><div class='line' id='LC719'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">this_savagedzen</span><span class="o">-&gt;</span><span class="n">timer</span><span class="p">.</span><span class="n">data</span> <span class="o">=</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC720'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC721'><br/></div><div class='line' id='LC722'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/* Scale up is high priority */</span></div><div class='line' id='LC723'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">up_wq</span> <span class="o">=</span> <span class="n">create_workqueue</span><span class="p">(</span><span class="s">&quot;ksavagedzen_up&quot;</span><span class="p">);</span></div><div class='line' id='LC724'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">down_wq</span> <span class="o">=</span> <span class="n">create_workqueue</span><span class="p">(</span><span class="s">&quot;ksavagedzen_down&quot;</span><span class="p">);</span></div><div class='line' id='LC725'><br/></div><div class='line' id='LC726'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">INIT_WORK</span><span class="p">(</span><span class="o">&amp;</span><span class="n">freq_scale_work</span><span class="p">,</span> <span class="n">cpufreq_savagedzen_freq_change_time_work</span><span class="p">);</span></div><div class='line' id='LC727'><br/></div><div class='line' id='LC728'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">register_early_suspend</span><span class="p">(</span><span class="o">&amp;</span><span class="n">savagedzen_power_suspend</span><span class="p">);</span></div><div class='line' id='LC729'><br/></div><div class='line' id='LC730'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">cpufreq_register_governor</span><span class="p">(</span><span class="o">&amp;</span><span class="n">cpufreq_gov_savagedzen</span><span class="p">);</span></div><div class='line' id='LC731'><span class="p">}</span></div><div class='line' id='LC732'><br/></div><div class='line' id='LC733'><span class="cp">#ifdef CONFIG_CPU_FREQ_DEFAULT_GOV_savagedzen</span></div><div class='line' id='LC734'><span class="n">pure_initcall</span><span class="p">(</span><span class="n">cpufreq_savagedzen_init</span><span class="p">);</span></div><div class='line' id='LC735'><span class="cp">#else</span></div><div class='line' id='LC736'><span class="n">module_init</span><span class="p">(</span><span class="n">cpufreq_savagedzen_init</span><span class="p">);</span></div><div class='line' id='LC737'><span class="cp">#endif</span></div><div class='line' id='LC738'><br/></div><div class='line' id='LC739'><span class="k">static</span> <span class="kt">void</span> <span class="n">__exit</span> <span class="nf">cpufreq_savagedzen_exit</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC740'><span class="p">{</span></div><div class='line' id='LC741'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">cpufreq_unregister_governor</span><span class="p">(</span><span class="o">&amp;</span><span class="n">cpufreq_gov_savagedzen</span><span class="p">);</span></div><div class='line' id='LC742'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">destroy_workqueue</span><span class="p">(</span><span class="n">up_wq</span><span class="p">);</span></div><div class='line' id='LC743'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">destroy_workqueue</span><span class="p">(</span><span class="n">down_wq</span><span class="p">);</span></div><div class='line' id='LC744'><span class="p">}</span></div><div class='line' id='LC745'><br/></div><div class='line' id='LC746'><span class="n">module_exit</span><span class="p">(</span><span class="n">cpufreq_savagedzen_exit</span><span class="p">);</span></div><div class='line' id='LC747'><br/></div><div class='line' id='LC748'><span class="n">MODULE_AUTHOR</span> <span class="p">(</span><span class="s">&quot;jsseidel&quot;</span><span class="p">);</span></div><div class='line' id='LC749'><span class="n">MODULE_DESCRIPTION</span> <span class="p">(</span><span class="s">&quot;&#39;cpufreq_savagedzen&#39; - A badass cpufreq governor! Based on Smartass&quot;</span><span class="p">);</span></div><div class='line' id='LC750'><span class="n">MODULE_LICENSE</span> <span class="p">(</span><span class="s">&quot;GPL&quot;</span><span class="p">);</span></div><div class='line' id='LC751'><br/></div></pre></div>
          </td>
        </tr>
      </table>
  </div>

          </div>
        </div>
      </div>
    </div>
</div>

<div class="frame frame-loading large-loading-area" style="display:none;" data-tree-list-url="/simonsimons34/MSM7X30_KERNEL/tree-list/da537af6870fabbd4426a9ef5e12529d0fe32d26">
  <img src="https://a248.e.akamai.net/assets.github.com/images/spinners/octocat-spinner-128.gif?1347543527" height="64" width="64">
</div>

        </div>
      </div>
      <div class="context-overlay"></div>
    </div>

      <div id="footer-push"></div><!-- hack for sticky footer -->
    </div><!-- end of wrapper - hack for sticky footer -->

      <!-- footer -->
      <div id="footer" >
        
  <div class="upper_footer">
     <div class="container clearfix">

       <h4 id="blacktocat">GitHub Links</h4>

       <ul class="footer_nav">
         <h4>GitHub</h4>
         <li><a href="https://github.com/about">About</a></li>
         <li><a href="https://github.com/blog">Blog</a></li>
         <li><a href="https://github.com/features">Features</a></li>
         <li><a href="https://github.com/contact">Contact &amp; Support</a></li>
         <li><a href="http://training.github.com/">Training</a></li>
         <li><a href="http://enterprise.github.com/">GitHub Enterprise</a></li>
         <li><a href="http://status.github.com/">Site Status</a></li>
       </ul>

       <ul class="footer_nav">
         <h4>Clients</h4>
         <li><a href="http://mac.github.com/">GitHub for Mac</a></li>
         <li><a href="http://windows.github.com/">GitHub for Windows</a></li>
         <li><a href="http://eclipse.github.com/">GitHub for Eclipse</a></li>
         <li><a href="http://mobile.github.com/">GitHub Mobile Apps</a></li>
       </ul>

       <ul class="footer_nav">
         <h4>Tools</h4>
         <li><a href="http://get.gaug.es/">Gauges: Web analytics</a></li>
         <li><a href="http://speakerdeck.com">Speaker Deck: Presentations</a></li>
         <li><a href="https://gist.github.com">Gist: Code snippets</a></li>

         <h4 class="second">Extras</h4>
         <li><a href="http://jobs.github.com/">Job Board</a></li>
         <li><a href="http://shop.github.com/">GitHub Shop</a></li>
         <li><a href="http://octodex.github.com/">The Octodex</a></li>
       </ul>

       <ul class="footer_nav">
         <h4>Documentation</h4>
         <li><a href="http://help.github.com/">GitHub Help</a></li>
         <li><a href="http://developer.github.com/">Developer API</a></li>
         <li><a href="http://github.github.com/github-flavored-markdown/">GitHub Flavored Markdown</a></li>
         <li><a href="http://pages.github.com/">GitHub Pages</a></li>
       </ul>

     </div><!-- /.site -->
  </div><!-- /.upper_footer -->

<div class="lower_footer">
  <div class="container clearfix">
    <div id="legal">
      <ul>
          <li><a href="https://github.com/site/terms">Terms of Service</a></li>
          <li><a href="https://github.com/site/privacy">Privacy</a></li>
          <li><a href="https://github.com/security">Security</a></li>
      </ul>

      <p>&copy; 2012 <span title="0.26862s from fe16.rs.github.com">GitHub</span> Inc. All rights reserved.</p>
    </div><!-- /#legal or /#legal_ie-->

  </div><!-- /.site -->
</div><!-- /.lower_footer -->


      </div><!-- /#footer -->

    

<div id="keyboard_shortcuts_pane" class="instapaper_ignore readability-extra" style="display:none">
  <h2>Keyboard Shortcuts <small><a href="#" class="js-see-all-keyboard-shortcuts">(see all)</a></small></h2>

  <div class="columns threecols">
    <div class="column first">
      <h3>Site wide shortcuts</h3>
      <dl class="keyboard-mappings">
        <dt>s</dt>
        <dd>Focus command bar</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>?</dt>
        <dd>Bring up this help dialog</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column middle" style='display:none'>
      <h3>Commit list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selection down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selection up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>c <em>or</em> o <em>or</em> enter</dt>
        <dd>Open commit</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>y</dt>
        <dd>Expand URL to its canonical form</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column last js-hidden-pane" style='display:none'>
      <h3>Pull request list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selection down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selection up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>o <em>or</em> enter</dt>
        <dd>Open issue</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> enter</dt>
        <dd>Submit comment</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> shift p</dt>
        <dd>Preview comment</dd>
      </dl>
    </div><!-- /.columns.last -->

  </div><!-- /.columns.equacols -->

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>

    <h3>Issues</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selection down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selection up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>x</dt>
          <dd>Toggle selection</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open issue</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> enter</dt>
          <dd>Submit comment</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> shift p</dt>
          <dd>Preview comment</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>c</dt>
          <dd>Create issue</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Create label</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>i</dt>
          <dd>Back to inbox</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>u</dt>
          <dd>Back to issues</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>/</dt>
          <dd>Focus issues search</dd>
        </dl>
      </div>
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>

    <h3>Issues Dashboard</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selection down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selection up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open issue</dd>
        </dl>
      </div><!-- /.column.first -->
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>

    <h3>Network Graph</h3>
    <div class="columns equacols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt><span class="badmono">←</span> <em>or</em> h</dt>
          <dd>Scroll left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">→</span> <em>or</em> l</dt>
          <dd>Scroll right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↑</span> <em>or</em> k</dt>
          <dd>Scroll up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↓</span> <em>or</em> j</dt>
          <dd>Scroll down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Toggle visibility of head labels</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">←</span> <em>or</em> shift h</dt>
          <dd>Scroll all the way left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">→</span> <em>or</em> shift l</dt>
          <dd>Scroll all the way right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↑</span> <em>or</em> shift k</dt>
          <dd>Scroll all the way up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↓</span> <em>or</em> shift j</dt>
          <dd>Scroll all the way down</dd>
        </dl>
      </div><!-- /.column.last -->
    </div>
  </div>

  <div class="js-hidden-pane" >
    <div class="rule"></div>
    <div class="columns threecols">
      <div class="column first js-hidden-pane" >
        <h3>Source Code Browsing</h3>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Activates the file finder</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Jump to line</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>w</dt>
          <dd>Switch branch/tag</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>y</dt>
          <dd>Expand URL to its canonical form</dd>
        </dl>
      </div>
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>
    <div class="columns threecols">
      <div class="column first">
        <h3>Browsing Commits</h3>
        <dl class="keyboard-mappings">
          <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> enter</dt>
          <dd>Submit comment</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>escape</dt>
          <dd>Close form</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>p</dt>
          <dd>Parent commit</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o</dt>
          <dd>Other parent commit</dd>
        </dl>
      </div>
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>
    <h3>Notifications</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selection down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selection up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open notification</dd>
        </dl>
      </div><!-- /.column.first -->

      <div class="column second">
        <dl class="keyboard-mappings">
          <dt>e <em>or</em> shift i <em>or</em> y</dt>
          <dd>Mark as read</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift m</dt>
          <dd>Mute thread</dd>
        </dl>
      </div><!-- /.column.first -->
    </div>
  </div>

</div>

    <div id="markdown-help" class="instapaper_ignore readability-extra">
  <h2>Markdown Cheat Sheet</h2>

  <div class="cheatsheet-content">

  <div class="mod">
    <div class="col">
      <h3>Format Text</h3>
      <p>Headers</p>
      <pre>
# This is an &lt;h1&gt; tag
## This is an &lt;h2&gt; tag
###### This is an &lt;h6&gt; tag</pre>
     <p>Text styles</p>
     <pre>
*This text will be italic*
_This will also be italic_
**This text will be bold**
__This will also be bold__

*You **can** combine them*
</pre>
    </div>
    <div class="col">
      <h3>Lists</h3>
      <p>Unordered</p>
      <pre>
* Item 1
* Item 2
  * Item 2a
  * Item 2b</pre>
     <p>Ordered</p>
     <pre>
1. Item 1
2. Item 2
3. Item 3
   * Item 3a
   * Item 3b</pre>
    </div>
    <div class="col">
      <h3>Miscellaneous</h3>
      <p>Images</p>
      <pre>
![GitHub Logo](/images/logo.png)
Format: ![Alt Text](url)
</pre>
     <p>Links</p>
     <pre>
http://github.com - automatic!
[GitHub](http://github.com)</pre>
<p>Blockquotes</p>
     <pre>
As Kanye West said:

> We're living the future so
> the present is our past.
</pre>
    </div>
  </div>
  <div class="rule"></div>

  <h3>Code Examples in Markdown</h3>
  <div class="col">
      <p>Syntax highlighting with <a href="http://github.github.com/github-flavored-markdown/" title="GitHub Flavored Markdown" target="_blank">GFM</a></p>
      <pre>
```javascript
function fancyAlert(arg) {
  if(arg) {
    $.facebox({div:'#foo'})
  }
}
```</pre>
    </div>
    <div class="col">
      <p>Or, indent your code 4 spaces</p>
      <pre>
Here is a Python code example
without syntax highlighting:

    def foo:
      if not bar:
        return true</pre>
    </div>
    <div class="col">
      <p>Inline code for comments</p>
      <pre>
I think you should use an
`&lt;addr&gt;` element here instead.</pre>
    </div>
  </div>

  </div>
</div>


    <div id="ajax-error-message" class="flash flash-error">
      <span class="mini-icon mini-icon-exclamation"></span>
      Something went wrong with that request. Please try again.
      <a href="#" class="mini-icon mini-icon-remove-close ajax-error-dismiss"></a>
    </div>

    <div id="logo-popup">
      <h2>Looking for the GitHub logo?</h2>
      <ul>
        <li>
          <h4>GitHub Logo</h4>
          <a href="http://github-media-downloads.s3.amazonaws.com/GitHub_Logos.zip"><img alt="Github_logo" src="https://a248.e.akamai.net/assets.github.com/images/modules/about_page/github_logo.png?1340659511" /></a>
          <a href="http://github-media-downloads.s3.amazonaws.com/GitHub_Logos.zip" class="minibutton download">Download</a>
        </li>
        <li>
          <h4>The Octocat</h4>
          <a href="http://github-media-downloads.s3.amazonaws.com/Octocats.zip"><img alt="Octocat" src="https://a248.e.akamai.net/assets.github.com/images/modules/about_page/octocat.png?1340659511" /></a>
          <a href="http://github-media-downloads.s3.amazonaws.com/Octocats.zip" class="minibutton download">Download</a>
        </li>
      </ul>
    </div>

    
    
    <span id='server_response_time' data-time='0.27017' data-host='fe16'></span>
    
  </body>
</html>

