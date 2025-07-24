

#include "huaweicloud/cloudtest/v1/model/TestCaseVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestCaseVo::TestCaseVo()
{
    uri_ = "";
    uriIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    author_ = "";
    authorIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    rank_ = 0;
    rankIsSet_ = false;
    preparation_ = "";
    preparationIsSet_ = false;
    remark_ = "";
    remarkIsSet_ = false;
    stage_ = "";
    stageIsSet_ = false;
    activity_ = "";
    activityIsSet_ = false;
    keywords_ = "";
    keywordsIsSet_ = false;
    market_ = "";
    marketIsSet_ = false;
    designer_ = "";
    designerIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
    executeParameter_ = "";
    executeParameterIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    lastModifier_ = "";
    lastModifierIsSet_ = false;
    lastModified_ = utility::datetime();
    lastModifiedIsSet_ = false;
    lastModifiedTimestamp_ = 0L;
    lastModifiedTimestampIsSet_ = false;
    lastChangeTime_ = utility::datetime();
    lastChangeTimeIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    originUri_ = "";
    originUriIsSet_ = false;
    parentUri_ = "";
    parentUriIsSet_ = false;
    parentPath_ = "";
    parentPathIsSet_ = false;
    creationVersionUri_ = "";
    creationVersionUriIsSet_ = false;
    creationDate_ = utility::datetime();
    creationDateIsSet_ = false;
    creationDateTimestamp_ = 0L;
    creationDateTimestampIsSet_ = false;
    authorName_ = "";
    authorNameIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    caseType_ = 0;
    caseTypeIsSet_ = false;
    platformType_ = 0;
    platformTypeIsSet_ = false;
    serviceType_ = 0;
    serviceTypeIsSet_ = false;
    serviceTypeName_ = "";
    serviceTypeNameIsSet_ = false;
    testType_ = 0;
    testTypeIsSet_ = false;
    testTypeName_ = "";
    testTypeNameIsSet_ = false;
    designNote_ = "";
    designNoteIsSet_ = false;
    testStep_ = "";
    testStepIsSet_ = false;
    expectOutput_ = "";
    expectOutputIsSet_ = false;
    envType_ = "";
    envTypeIsSet_ = false;
    exePlatform_ = "";
    exePlatformIsSet_ = false;
    testcaseProject_ = "";
    testcaseProjectIsSet_ = false;
    svnScriptPath_ = "";
    svnScriptPathIsSet_ = false;
    mapRestrict_ = "";
    mapRestrictIsSet_ = false;
    networkScriptName_ = "";
    networkScriptNameIsSet_ = false;
    autoType_ = 0;
    autoTypeIsSet_ = false;
    toBeAutoExec_ = 0;
    toBeAutoExecIsSet_ = false;
    lastResult_ = "";
    lastResultIsSet_ = false;
    lastResultUri_ = "";
    lastResultUriIsSet_ = false;
    featureUri_ = "";
    featureUriIsSet_ = false;
    featureName_ = "";
    featureNameIsSet_ = false;
    interfaceName_ = "";
    interfaceNameIsSet_ = false;
    snpNo_ = "";
    snpNoIsSet_ = false;
    drRelationId_ = "";
    drRelationIdIsSet_ = false;
    issueName_ = "";
    issueNameIsSet_ = false;
    testBaseNum_ = "";
    testBaseNumIsSet_ = false;
    automaticallyExecuted_ = 0;
    automaticallyExecutedIsSet_ = false;
    firstExecuteTime_ = utility::datetime();
    firstExecuteTimeIsSet_ = false;
    detectType_ = "";
    detectTypeIsSet_ = false;
    executeParam_ = "";
    executeParamIsSet_ = false;
    testFeature_ = "";
    testFeatureIsSet_ = false;
    isContractTestcase_ = 0;
    isContractTestcaseIsSet_ = false;
    timeCost_ = 0.0;
    timeCostIsSet_ = false;
    beAutoTypeTime_ = utility::datetime();
    beAutoTypeTimeIsSet_ = false;
    compareNumber_ = "";
    compareNumberIsSet_ = false;
    sceneFlag_ = "";
    sceneFlagIsSet_ = false;
    baseFlag_ = "";
    baseFlagIsSet_ = false;
    paraValidator_ = "";
    paraValidatorIsSet_ = false;
    knetNodeId_ = "";
    knetNodeIdIsSet_ = false;
    lastExeAuthor_ = "";
    lastExeAuthorIsSet_ = false;
    cloudCarrier_ = "";
    cloudCarrierIsSet_ = false;
    marketPlace_ = "";
    marketPlaceIsSet_ = false;
    testMindId_ = "";
    testMindIdIsSet_ = false;
    testMindUrl_ = "";
    testMindUrlIsSet_ = false;
    commitUrl_ = "";
    commitUrlIsSet_ = false;
    testPatternNumber_ = "";
    testPatternNumberIsSet_ = false;
    testFactorNumber_ = "";
    testFactorNumberIsSet_ = false;
    statusCode_ = "";
    statusCodeIsSet_ = false;
    resultCode_ = "";
    resultCodeIsSet_ = false;
    releaseId_ = "";
    releaseIdIsSet_ = false;
    labelId_ = "";
    labelIdIsSet_ = false;
    labelsIsSet_ = false;
    moduleId_ = "";
    moduleIdIsSet_ = false;
    moduleName_ = "";
    moduleNameIsSet_ = false;
    modulePath_ = "";
    modulePathIsSet_ = false;
    modulePathName_ = "";
    modulePathNameIsSet_ = false;
    executeLatestTime_ = utility::datetime();
    executeLatestTimeIsSet_ = false;
    executeDuration_ = "";
    executeDurationIsSet_ = false;
    executeTimes_ = 0;
    executeTimesIsSet_ = false;
    isKeyword_ = 0;
    isKeywordIsSet_ = false;
    releaseDev_ = "";
    releaseDevIsSet_ = false;
    newCreated_ = "";
    newCreatedIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    creationVersionName_ = "";
    creationVersionNameIsSet_ = false;
    featurePath_ = "";
    featurePathIsSet_ = false;
    testcaseUri_ = "";
    testcaseUriIsSet_ = false;
    ownerName_ = "";
    ownerNameIsSet_ = false;
    iteratorCaseUri_ = "";
    iteratorCaseUriIsSet_ = false;
    scriptLink_ = "";
    scriptLinkIsSet_ = false;
    customField1_ = "";
    customField1IsSet_ = false;
    customField2_ = "";
    customField2IsSet_ = false;
    customField3_ = "";
    customField3IsSet_ = false;
    customField4_ = "";
    customField4IsSet_ = false;
    customField5_ = "";
    customField5IsSet_ = false;
    customField6_ = "";
    customField6IsSet_ = false;
    customField7_ = "";
    customField7IsSet_ = false;
    customField8_ = "";
    customField8IsSet_ = false;
    customField9_ = "";
    customField9IsSet_ = false;
    customField10_ = "";
    customField10IsSet_ = false;
    customField11_ = "";
    customField11IsSet_ = false;
    customField12_ = "";
    customField12IsSet_ = false;
    customField13_ = "";
    customField13IsSet_ = false;
    customField14_ = "";
    customField14IsSet_ = false;
    customField15_ = "";
    customField15IsSet_ = false;
    customField16_ = "";
    customField16IsSet_ = false;
    customField17_ = "";
    customField17IsSet_ = false;
    customField18_ = "";
    customField18IsSet_ = false;
    customField19_ = "";
    customField19IsSet_ = false;
    customField20_ = "";
    customField20IsSet_ = false;
    customField21_ = "";
    customField21IsSet_ = false;
    customField22_ = "";
    customField22IsSet_ = false;
    customField23_ = "";
    customField23IsSet_ = false;
    customField24_ = "";
    customField24IsSet_ = false;
    customField25_ = "";
    customField25IsSet_ = false;
}

TestCaseVo::~TestCaseVo() = default;

void TestCaseVo::validate()
{
}

web::json::value TestCaseVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(authorIsSet_) {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(author_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(rankIsSet_) {
        val[utility::conversions::to_string_t("rank")] = ModelBase::toJson(rank_);
    }
    if(preparationIsSet_) {
        val[utility::conversions::to_string_t("preparation")] = ModelBase::toJson(preparation_);
    }
    if(remarkIsSet_) {
        val[utility::conversions::to_string_t("remark")] = ModelBase::toJson(remark_);
    }
    if(stageIsSet_) {
        val[utility::conversions::to_string_t("stage")] = ModelBase::toJson(stage_);
    }
    if(activityIsSet_) {
        val[utility::conversions::to_string_t("activity")] = ModelBase::toJson(activity_);
    }
    if(keywordsIsSet_) {
        val[utility::conversions::to_string_t("keywords")] = ModelBase::toJson(keywords_);
    }
    if(marketIsSet_) {
        val[utility::conversions::to_string_t("market")] = ModelBase::toJson(market_);
    }
    if(designerIsSet_) {
        val[utility::conversions::to_string_t("designer")] = ModelBase::toJson(designer_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(executeParameterIsSet_) {
        val[utility::conversions::to_string_t("execute_parameter")] = ModelBase::toJson(executeParameter_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(lastModifierIsSet_) {
        val[utility::conversions::to_string_t("last_modifier")] = ModelBase::toJson(lastModifier_);
    }
    if(lastModifiedIsSet_) {
        val[utility::conversions::to_string_t("last_modified")] = ModelBase::toJson(lastModified_);
    }
    if(lastModifiedTimestampIsSet_) {
        val[utility::conversions::to_string_t("last_modified_timestamp")] = ModelBase::toJson(lastModifiedTimestamp_);
    }
    if(lastChangeTimeIsSet_) {
        val[utility::conversions::to_string_t("last_change_time")] = ModelBase::toJson(lastChangeTime_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(originUriIsSet_) {
        val[utility::conversions::to_string_t("origin_uri")] = ModelBase::toJson(originUri_);
    }
    if(parentUriIsSet_) {
        val[utility::conversions::to_string_t("parent_uri")] = ModelBase::toJson(parentUri_);
    }
    if(parentPathIsSet_) {
        val[utility::conversions::to_string_t("parent_path")] = ModelBase::toJson(parentPath_);
    }
    if(creationVersionUriIsSet_) {
        val[utility::conversions::to_string_t("creation_version_uri")] = ModelBase::toJson(creationVersionUri_);
    }
    if(creationDateIsSet_) {
        val[utility::conversions::to_string_t("creation_date")] = ModelBase::toJson(creationDate_);
    }
    if(creationDateTimestampIsSet_) {
        val[utility::conversions::to_string_t("creation_date_timestamp")] = ModelBase::toJson(creationDateTimestamp_);
    }
    if(authorNameIsSet_) {
        val[utility::conversions::to_string_t("author_name")] = ModelBase::toJson(authorName_);
    }
    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(caseTypeIsSet_) {
        val[utility::conversions::to_string_t("case_type")] = ModelBase::toJson(caseType_);
    }
    if(platformTypeIsSet_) {
        val[utility::conversions::to_string_t("platform_type")] = ModelBase::toJson(platformType_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(serviceTypeNameIsSet_) {
        val[utility::conversions::to_string_t("service_type_name")] = ModelBase::toJson(serviceTypeName_);
    }
    if(testTypeIsSet_) {
        val[utility::conversions::to_string_t("test_type")] = ModelBase::toJson(testType_);
    }
    if(testTypeNameIsSet_) {
        val[utility::conversions::to_string_t("test_type_name")] = ModelBase::toJson(testTypeName_);
    }
    if(designNoteIsSet_) {
        val[utility::conversions::to_string_t("design_note")] = ModelBase::toJson(designNote_);
    }
    if(testStepIsSet_) {
        val[utility::conversions::to_string_t("test_step")] = ModelBase::toJson(testStep_);
    }
    if(expectOutputIsSet_) {
        val[utility::conversions::to_string_t("expect_output")] = ModelBase::toJson(expectOutput_);
    }
    if(envTypeIsSet_) {
        val[utility::conversions::to_string_t("env_type")] = ModelBase::toJson(envType_);
    }
    if(exePlatformIsSet_) {
        val[utility::conversions::to_string_t("exe_platform")] = ModelBase::toJson(exePlatform_);
    }
    if(testcaseProjectIsSet_) {
        val[utility::conversions::to_string_t("testcase_project")] = ModelBase::toJson(testcaseProject_);
    }
    if(svnScriptPathIsSet_) {
        val[utility::conversions::to_string_t("svn_script_path")] = ModelBase::toJson(svnScriptPath_);
    }
    if(mapRestrictIsSet_) {
        val[utility::conversions::to_string_t("map_restrict")] = ModelBase::toJson(mapRestrict_);
    }
    if(networkScriptNameIsSet_) {
        val[utility::conversions::to_string_t("network_script_name")] = ModelBase::toJson(networkScriptName_);
    }
    if(autoTypeIsSet_) {
        val[utility::conversions::to_string_t("auto_type")] = ModelBase::toJson(autoType_);
    }
    if(toBeAutoExecIsSet_) {
        val[utility::conversions::to_string_t("to_be_auto_exec")] = ModelBase::toJson(toBeAutoExec_);
    }
    if(lastResultIsSet_) {
        val[utility::conversions::to_string_t("last_result")] = ModelBase::toJson(lastResult_);
    }
    if(lastResultUriIsSet_) {
        val[utility::conversions::to_string_t("last_result_uri")] = ModelBase::toJson(lastResultUri_);
    }
    if(featureUriIsSet_) {
        val[utility::conversions::to_string_t("feature_uri")] = ModelBase::toJson(featureUri_);
    }
    if(featureNameIsSet_) {
        val[utility::conversions::to_string_t("feature_name")] = ModelBase::toJson(featureName_);
    }
    if(interfaceNameIsSet_) {
        val[utility::conversions::to_string_t("interface_name")] = ModelBase::toJson(interfaceName_);
    }
    if(snpNoIsSet_) {
        val[utility::conversions::to_string_t("snp_no")] = ModelBase::toJson(snpNo_);
    }
    if(drRelationIdIsSet_) {
        val[utility::conversions::to_string_t("dr_relation_id")] = ModelBase::toJson(drRelationId_);
    }
    if(issueNameIsSet_) {
        val[utility::conversions::to_string_t("issue_name")] = ModelBase::toJson(issueName_);
    }
    if(testBaseNumIsSet_) {
        val[utility::conversions::to_string_t("test_base_num")] = ModelBase::toJson(testBaseNum_);
    }
    if(automaticallyExecutedIsSet_) {
        val[utility::conversions::to_string_t("automatically_executed")] = ModelBase::toJson(automaticallyExecuted_);
    }
    if(firstExecuteTimeIsSet_) {
        val[utility::conversions::to_string_t("first_execute_time")] = ModelBase::toJson(firstExecuteTime_);
    }
    if(detectTypeIsSet_) {
        val[utility::conversions::to_string_t("detect_type")] = ModelBase::toJson(detectType_);
    }
    if(executeParamIsSet_) {
        val[utility::conversions::to_string_t("execute_param")] = ModelBase::toJson(executeParam_);
    }
    if(testFeatureIsSet_) {
        val[utility::conversions::to_string_t("test_feature")] = ModelBase::toJson(testFeature_);
    }
    if(isContractTestcaseIsSet_) {
        val[utility::conversions::to_string_t("is_contract_testcase")] = ModelBase::toJson(isContractTestcase_);
    }
    if(timeCostIsSet_) {
        val[utility::conversions::to_string_t("time_cost")] = ModelBase::toJson(timeCost_);
    }
    if(beAutoTypeTimeIsSet_) {
        val[utility::conversions::to_string_t("be_auto_type_time")] = ModelBase::toJson(beAutoTypeTime_);
    }
    if(compareNumberIsSet_) {
        val[utility::conversions::to_string_t("compare_number")] = ModelBase::toJson(compareNumber_);
    }
    if(sceneFlagIsSet_) {
        val[utility::conversions::to_string_t("scene_flag")] = ModelBase::toJson(sceneFlag_);
    }
    if(baseFlagIsSet_) {
        val[utility::conversions::to_string_t("base_flag")] = ModelBase::toJson(baseFlag_);
    }
    if(paraValidatorIsSet_) {
        val[utility::conversions::to_string_t("para_validator")] = ModelBase::toJson(paraValidator_);
    }
    if(knetNodeIdIsSet_) {
        val[utility::conversions::to_string_t("knet_node_id")] = ModelBase::toJson(knetNodeId_);
    }
    if(lastExeAuthorIsSet_) {
        val[utility::conversions::to_string_t("last_exe_author")] = ModelBase::toJson(lastExeAuthor_);
    }
    if(cloudCarrierIsSet_) {
        val[utility::conversions::to_string_t("cloud_carrier")] = ModelBase::toJson(cloudCarrier_);
    }
    if(marketPlaceIsSet_) {
        val[utility::conversions::to_string_t("market_place")] = ModelBase::toJson(marketPlace_);
    }
    if(testMindIdIsSet_) {
        val[utility::conversions::to_string_t("test_mind_id")] = ModelBase::toJson(testMindId_);
    }
    if(testMindUrlIsSet_) {
        val[utility::conversions::to_string_t("test_mind_url")] = ModelBase::toJson(testMindUrl_);
    }
    if(commitUrlIsSet_) {
        val[utility::conversions::to_string_t("commit_url")] = ModelBase::toJson(commitUrl_);
    }
    if(testPatternNumberIsSet_) {
        val[utility::conversions::to_string_t("test_pattern_number")] = ModelBase::toJson(testPatternNumber_);
    }
    if(testFactorNumberIsSet_) {
        val[utility::conversions::to_string_t("test_factor_number")] = ModelBase::toJson(testFactorNumber_);
    }
    if(statusCodeIsSet_) {
        val[utility::conversions::to_string_t("status_code")] = ModelBase::toJson(statusCode_);
    }
    if(resultCodeIsSet_) {
        val[utility::conversions::to_string_t("result_code")] = ModelBase::toJson(resultCode_);
    }
    if(releaseIdIsSet_) {
        val[utility::conversions::to_string_t("release_id")] = ModelBase::toJson(releaseId_);
    }
    if(labelIdIsSet_) {
        val[utility::conversions::to_string_t("label_id")] = ModelBase::toJson(labelId_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }
    if(moduleIdIsSet_) {
        val[utility::conversions::to_string_t("module_id")] = ModelBase::toJson(moduleId_);
    }
    if(moduleNameIsSet_) {
        val[utility::conversions::to_string_t("module_name")] = ModelBase::toJson(moduleName_);
    }
    if(modulePathIsSet_) {
        val[utility::conversions::to_string_t("module_path")] = ModelBase::toJson(modulePath_);
    }
    if(modulePathNameIsSet_) {
        val[utility::conversions::to_string_t("module_path_name")] = ModelBase::toJson(modulePathName_);
    }
    if(executeLatestTimeIsSet_) {
        val[utility::conversions::to_string_t("execute_latest_time")] = ModelBase::toJson(executeLatestTime_);
    }
    if(executeDurationIsSet_) {
        val[utility::conversions::to_string_t("execute_duration")] = ModelBase::toJson(executeDuration_);
    }
    if(executeTimesIsSet_) {
        val[utility::conversions::to_string_t("execute_times")] = ModelBase::toJson(executeTimes_);
    }
    if(isKeywordIsSet_) {
        val[utility::conversions::to_string_t("is_keyword")] = ModelBase::toJson(isKeyword_);
    }
    if(releaseDevIsSet_) {
        val[utility::conversions::to_string_t("release_dev")] = ModelBase::toJson(releaseDev_);
    }
    if(newCreatedIsSet_) {
        val[utility::conversions::to_string_t("new_created")] = ModelBase::toJson(newCreated_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(creationVersionNameIsSet_) {
        val[utility::conversions::to_string_t("creation_version_name")] = ModelBase::toJson(creationVersionName_);
    }
    if(featurePathIsSet_) {
        val[utility::conversions::to_string_t("feature_path")] = ModelBase::toJson(featurePath_);
    }
    if(testcaseUriIsSet_) {
        val[utility::conversions::to_string_t("testcase_uri")] = ModelBase::toJson(testcaseUri_);
    }
    if(ownerNameIsSet_) {
        val[utility::conversions::to_string_t("owner_name")] = ModelBase::toJson(ownerName_);
    }
    if(iteratorCaseUriIsSet_) {
        val[utility::conversions::to_string_t("iterator_case_uri")] = ModelBase::toJson(iteratorCaseUri_);
    }
    if(scriptLinkIsSet_) {
        val[utility::conversions::to_string_t("script_link")] = ModelBase::toJson(scriptLink_);
    }
    if(customField1IsSet_) {
        val[utility::conversions::to_string_t("custom_field_1")] = ModelBase::toJson(customField1_);
    }
    if(customField2IsSet_) {
        val[utility::conversions::to_string_t("custom_field_2")] = ModelBase::toJson(customField2_);
    }
    if(customField3IsSet_) {
        val[utility::conversions::to_string_t("custom_field_3")] = ModelBase::toJson(customField3_);
    }
    if(customField4IsSet_) {
        val[utility::conversions::to_string_t("custom_field_4")] = ModelBase::toJson(customField4_);
    }
    if(customField5IsSet_) {
        val[utility::conversions::to_string_t("custom_field_5")] = ModelBase::toJson(customField5_);
    }
    if(customField6IsSet_) {
        val[utility::conversions::to_string_t("custom_field_6")] = ModelBase::toJson(customField6_);
    }
    if(customField7IsSet_) {
        val[utility::conversions::to_string_t("custom_field_7")] = ModelBase::toJson(customField7_);
    }
    if(customField8IsSet_) {
        val[utility::conversions::to_string_t("custom_field_8")] = ModelBase::toJson(customField8_);
    }
    if(customField9IsSet_) {
        val[utility::conversions::to_string_t("custom_field_9")] = ModelBase::toJson(customField9_);
    }
    if(customField10IsSet_) {
        val[utility::conversions::to_string_t("custom_field_10")] = ModelBase::toJson(customField10_);
    }
    if(customField11IsSet_) {
        val[utility::conversions::to_string_t("custom_field_11")] = ModelBase::toJson(customField11_);
    }
    if(customField12IsSet_) {
        val[utility::conversions::to_string_t("custom_field_12")] = ModelBase::toJson(customField12_);
    }
    if(customField13IsSet_) {
        val[utility::conversions::to_string_t("custom_field_13")] = ModelBase::toJson(customField13_);
    }
    if(customField14IsSet_) {
        val[utility::conversions::to_string_t("custom_field_14")] = ModelBase::toJson(customField14_);
    }
    if(customField15IsSet_) {
        val[utility::conversions::to_string_t("custom_field_15")] = ModelBase::toJson(customField15_);
    }
    if(customField16IsSet_) {
        val[utility::conversions::to_string_t("custom_field_16")] = ModelBase::toJson(customField16_);
    }
    if(customField17IsSet_) {
        val[utility::conversions::to_string_t("custom_field_17")] = ModelBase::toJson(customField17_);
    }
    if(customField18IsSet_) {
        val[utility::conversions::to_string_t("custom_field_18")] = ModelBase::toJson(customField18_);
    }
    if(customField19IsSet_) {
        val[utility::conversions::to_string_t("custom_field_19")] = ModelBase::toJson(customField19_);
    }
    if(customField20IsSet_) {
        val[utility::conversions::to_string_t("custom_field_20")] = ModelBase::toJson(customField20_);
    }
    if(customField21IsSet_) {
        val[utility::conversions::to_string_t("custom_field_21")] = ModelBase::toJson(customField21_);
    }
    if(customField22IsSet_) {
        val[utility::conversions::to_string_t("custom_field_22")] = ModelBase::toJson(customField22_);
    }
    if(customField23IsSet_) {
        val[utility::conversions::to_string_t("custom_field_23")] = ModelBase::toJson(customField23_);
    }
    if(customField24IsSet_) {
        val[utility::conversions::to_string_t("custom_field_24")] = ModelBase::toJson(customField24_);
    }
    if(customField25IsSet_) {
        val[utility::conversions::to_string_t("custom_field_25")] = ModelBase::toJson(customField25_);
    }

    return val;
}
bool TestCaseVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rank"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rank"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRank(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("preparation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("preparation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreparation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remark"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemark(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("activity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("activity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActivity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keywords"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keywords"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeywords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("market"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("market"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarket(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("designer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("designer"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDesigner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_parameter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_parameter"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteParameter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modifier"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modifier"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModifier(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModified(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modified_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModifiedTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_change_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_change_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastChangeTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creation_version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationVersionUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creation_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creation_date_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_date_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationDateTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComment(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("platform_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("platform_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlatformType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_type_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceTypeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_type_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_type_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestTypeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("design_note"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("design_note"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDesignNote(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_step"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_step"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestStep(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expect_output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expect_output"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpectOutput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("env_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("env_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnvType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exe_platform"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exe_platform"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExePlatform(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testcase_project"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_project"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseProject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("svn_script_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("svn_script_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSvnScriptPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("map_restrict"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("map_restrict"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMapRestrict(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("network_script_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_script_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkScriptName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("to_be_auto_exec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("to_be_auto_exec"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToBeAutoExec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_result_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_result_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastResultUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("feature_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("feature_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeatureUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("feature_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("feature_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeatureName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interface_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interface_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterfaceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snp_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snp_no"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnpNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dr_relation_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dr_relation_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrRelationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_base_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_base_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestBaseNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("automatically_executed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("automatically_executed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutomaticallyExecuted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("first_execute_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("first_execute_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirstExecuteTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_param"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_param"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteParam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_feature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_feature"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestFeature(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_contract_testcase"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_contract_testcase"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsContractTestcase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_cost"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_cost"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeCost(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("be_auto_type_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("be_auto_type_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeAutoTypeTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scene_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scene_flag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSceneFlag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("base_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("base_flag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBaseFlag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("para_validator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("para_validator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParaValidator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("knet_node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("knet_node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKnetNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_exe_author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_exe_author"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastExeAuthor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cloud_carrier"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloud_carrier"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudCarrier(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("market_place"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("market_place"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarketPlace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_mind_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_mind_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestMindId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_mind_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_mind_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestMindUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_pattern_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_pattern_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestPatternNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_factor_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_factor_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestFactorNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResultCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("release_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("label_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("label_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabelId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            std::vector<LabelVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModulePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_path_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_path_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModulePathName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_latest_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_latest_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteLatestTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_duration"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_times"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_times"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteTimes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_keyword"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_keyword"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsKeyword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("release_dev"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release_dev"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseDev(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_created"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_created"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewCreated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creation_version_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_version_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationVersionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("feature_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("feature_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeaturePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testcase_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iterator_case_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iterator_case_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIteratorCaseUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("script_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptLink(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_1"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_1"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField1(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_2"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_2"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField2(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_3"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_3"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField3(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_4"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_4"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField4(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_5"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_5"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField5(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_6"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField6(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_7"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_7"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField7(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_8"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_8"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField8(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_9"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_9"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField9(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_10"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_10"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField10(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_11"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_11"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField11(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_12"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_12"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField12(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_13"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_13"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField13(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_14"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_14"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField14(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_15"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_15"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField15(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_16"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_16"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField16(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_17"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_17"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField17(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_18"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_18"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField18(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_19"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_19"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField19(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_20"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_20"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField20(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_21"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_21"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField21(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_22"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_22"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField22(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_23"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_23"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField23(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_24"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_24"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField24(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_25"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_25"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField25(refVal);
        }
    }
    return ok;
}


std::string TestCaseVo::getUri() const
{
    return uri_;
}

void TestCaseVo::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool TestCaseVo::uriIsSet() const
{
    return uriIsSet_;
}

void TestCaseVo::unseturi()
{
    uriIsSet_ = false;
}

std::string TestCaseVo::getType() const
{
    return type_;
}

void TestCaseVo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TestCaseVo::typeIsSet() const
{
    return typeIsSet_;
}

void TestCaseVo::unsettype()
{
    typeIsSet_ = false;
}

std::string TestCaseVo::getAuthor() const
{
    return author_;
}

void TestCaseVo::setAuthor(const std::string& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool TestCaseVo::authorIsSet() const
{
    return authorIsSet_;
}

void TestCaseVo::unsetauthor()
{
    authorIsSet_ = false;
}

std::string TestCaseVo::getName() const
{
    return name_;
}

void TestCaseVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TestCaseVo::nameIsSet() const
{
    return nameIsSet_;
}

void TestCaseVo::unsetname()
{
    nameIsSet_ = false;
}

int32_t TestCaseVo::getRank() const
{
    return rank_;
}

void TestCaseVo::setRank(int32_t value)
{
    rank_ = value;
    rankIsSet_ = true;
}

bool TestCaseVo::rankIsSet() const
{
    return rankIsSet_;
}

void TestCaseVo::unsetrank()
{
    rankIsSet_ = false;
}

std::string TestCaseVo::getPreparation() const
{
    return preparation_;
}

void TestCaseVo::setPreparation(const std::string& value)
{
    preparation_ = value;
    preparationIsSet_ = true;
}

bool TestCaseVo::preparationIsSet() const
{
    return preparationIsSet_;
}

void TestCaseVo::unsetpreparation()
{
    preparationIsSet_ = false;
}

std::string TestCaseVo::getRemark() const
{
    return remark_;
}

void TestCaseVo::setRemark(const std::string& value)
{
    remark_ = value;
    remarkIsSet_ = true;
}

bool TestCaseVo::remarkIsSet() const
{
    return remarkIsSet_;
}

void TestCaseVo::unsetremark()
{
    remarkIsSet_ = false;
}

std::string TestCaseVo::getStage() const
{
    return stage_;
}

void TestCaseVo::setStage(const std::string& value)
{
    stage_ = value;
    stageIsSet_ = true;
}

bool TestCaseVo::stageIsSet() const
{
    return stageIsSet_;
}

void TestCaseVo::unsetstage()
{
    stageIsSet_ = false;
}

std::string TestCaseVo::getActivity() const
{
    return activity_;
}

void TestCaseVo::setActivity(const std::string& value)
{
    activity_ = value;
    activityIsSet_ = true;
}

bool TestCaseVo::activityIsSet() const
{
    return activityIsSet_;
}

void TestCaseVo::unsetactivity()
{
    activityIsSet_ = false;
}

std::string TestCaseVo::getKeywords() const
{
    return keywords_;
}

void TestCaseVo::setKeywords(const std::string& value)
{
    keywords_ = value;
    keywordsIsSet_ = true;
}

bool TestCaseVo::keywordsIsSet() const
{
    return keywordsIsSet_;
}

void TestCaseVo::unsetkeywords()
{
    keywordsIsSet_ = false;
}

std::string TestCaseVo::getMarket() const
{
    return market_;
}

void TestCaseVo::setMarket(const std::string& value)
{
    market_ = value;
    marketIsSet_ = true;
}

bool TestCaseVo::marketIsSet() const
{
    return marketIsSet_;
}

void TestCaseVo::unsetmarket()
{
    marketIsSet_ = false;
}

std::string TestCaseVo::getDesigner() const
{
    return designer_;
}

void TestCaseVo::setDesigner(const std::string& value)
{
    designer_ = value;
    designerIsSet_ = true;
}

bool TestCaseVo::designerIsSet() const
{
    return designerIsSet_;
}

void TestCaseVo::unsetdesigner()
{
    designerIsSet_ = false;
}

std::string TestCaseVo::getTags() const
{
    return tags_;
}

void TestCaseVo::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool TestCaseVo::tagsIsSet() const
{
    return tagsIsSet_;
}

void TestCaseVo::unsettags()
{
    tagsIsSet_ = false;
}

std::string TestCaseVo::getExecuteParameter() const
{
    return executeParameter_;
}

void TestCaseVo::setExecuteParameter(const std::string& value)
{
    executeParameter_ = value;
    executeParameterIsSet_ = true;
}

bool TestCaseVo::executeParameterIsSet() const
{
    return executeParameterIsSet_;
}

void TestCaseVo::unsetexecuteParameter()
{
    executeParameterIsSet_ = false;
}

std::string TestCaseVo::getRegion() const
{
    return region_;
}

void TestCaseVo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool TestCaseVo::regionIsSet() const
{
    return regionIsSet_;
}

void TestCaseVo::unsetregion()
{
    regionIsSet_ = false;
}

std::string TestCaseVo::getOwner() const
{
    return owner_;
}

void TestCaseVo::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool TestCaseVo::ownerIsSet() const
{
    return ownerIsSet_;
}

void TestCaseVo::unsetowner()
{
    ownerIsSet_ = false;
}

std::string TestCaseVo::getLastModifier() const
{
    return lastModifier_;
}

void TestCaseVo::setLastModifier(const std::string& value)
{
    lastModifier_ = value;
    lastModifierIsSet_ = true;
}

bool TestCaseVo::lastModifierIsSet() const
{
    return lastModifierIsSet_;
}

void TestCaseVo::unsetlastModifier()
{
    lastModifierIsSet_ = false;
}

utility::datetime TestCaseVo::getLastModified() const
{
    return lastModified_;
}

void TestCaseVo::setLastModified(const utility::datetime& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool TestCaseVo::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void TestCaseVo::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

int64_t TestCaseVo::getLastModifiedTimestamp() const
{
    return lastModifiedTimestamp_;
}

void TestCaseVo::setLastModifiedTimestamp(int64_t value)
{
    lastModifiedTimestamp_ = value;
    lastModifiedTimestampIsSet_ = true;
}

bool TestCaseVo::lastModifiedTimestampIsSet() const
{
    return lastModifiedTimestampIsSet_;
}

void TestCaseVo::unsetlastModifiedTimestamp()
{
    lastModifiedTimestampIsSet_ = false;
}

utility::datetime TestCaseVo::getLastChangeTime() const
{
    return lastChangeTime_;
}

void TestCaseVo::setLastChangeTime(const utility::datetime& value)
{
    lastChangeTime_ = value;
    lastChangeTimeIsSet_ = true;
}

bool TestCaseVo::lastChangeTimeIsSet() const
{
    return lastChangeTimeIsSet_;
}

void TestCaseVo::unsetlastChangeTime()
{
    lastChangeTimeIsSet_ = false;
}

std::string TestCaseVo::getVersionUri() const
{
    return versionUri_;
}

void TestCaseVo::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool TestCaseVo::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void TestCaseVo::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::string TestCaseVo::getOriginUri() const
{
    return originUri_;
}

void TestCaseVo::setOriginUri(const std::string& value)
{
    originUri_ = value;
    originUriIsSet_ = true;
}

bool TestCaseVo::originUriIsSet() const
{
    return originUriIsSet_;
}

void TestCaseVo::unsetoriginUri()
{
    originUriIsSet_ = false;
}

std::string TestCaseVo::getParentUri() const
{
    return parentUri_;
}

void TestCaseVo::setParentUri(const std::string& value)
{
    parentUri_ = value;
    parentUriIsSet_ = true;
}

bool TestCaseVo::parentUriIsSet() const
{
    return parentUriIsSet_;
}

void TestCaseVo::unsetparentUri()
{
    parentUriIsSet_ = false;
}

std::string TestCaseVo::getParentPath() const
{
    return parentPath_;
}

void TestCaseVo::setParentPath(const std::string& value)
{
    parentPath_ = value;
    parentPathIsSet_ = true;
}

bool TestCaseVo::parentPathIsSet() const
{
    return parentPathIsSet_;
}

void TestCaseVo::unsetparentPath()
{
    parentPathIsSet_ = false;
}

std::string TestCaseVo::getCreationVersionUri() const
{
    return creationVersionUri_;
}

void TestCaseVo::setCreationVersionUri(const std::string& value)
{
    creationVersionUri_ = value;
    creationVersionUriIsSet_ = true;
}

bool TestCaseVo::creationVersionUriIsSet() const
{
    return creationVersionUriIsSet_;
}

void TestCaseVo::unsetcreationVersionUri()
{
    creationVersionUriIsSet_ = false;
}

utility::datetime TestCaseVo::getCreationDate() const
{
    return creationDate_;
}

void TestCaseVo::setCreationDate(const utility::datetime& value)
{
    creationDate_ = value;
    creationDateIsSet_ = true;
}

bool TestCaseVo::creationDateIsSet() const
{
    return creationDateIsSet_;
}

void TestCaseVo::unsetcreationDate()
{
    creationDateIsSet_ = false;
}

int64_t TestCaseVo::getCreationDateTimestamp() const
{
    return creationDateTimestamp_;
}

void TestCaseVo::setCreationDateTimestamp(int64_t value)
{
    creationDateTimestamp_ = value;
    creationDateTimestampIsSet_ = true;
}

bool TestCaseVo::creationDateTimestampIsSet() const
{
    return creationDateTimestampIsSet_;
}

void TestCaseVo::unsetcreationDateTimestamp()
{
    creationDateTimestampIsSet_ = false;
}

std::string TestCaseVo::getAuthorName() const
{
    return authorName_;
}

void TestCaseVo::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool TestCaseVo::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void TestCaseVo::unsetauthorName()
{
    authorNameIsSet_ = false;
}

std::string TestCaseVo::getComment() const
{
    return comment_;
}

void TestCaseVo::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool TestCaseVo::commentIsSet() const
{
    return commentIsSet_;
}

void TestCaseVo::unsetcomment()
{
    commentIsSet_ = false;
}

std::string TestCaseVo::getNumber() const
{
    return number_;
}

void TestCaseVo::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool TestCaseVo::numberIsSet() const
{
    return numberIsSet_;
}

void TestCaseVo::unsetnumber()
{
    numberIsSet_ = false;
}

int32_t TestCaseVo::getCaseType() const
{
    return caseType_;
}

void TestCaseVo::setCaseType(int32_t value)
{
    caseType_ = value;
    caseTypeIsSet_ = true;
}

bool TestCaseVo::caseTypeIsSet() const
{
    return caseTypeIsSet_;
}

void TestCaseVo::unsetcaseType()
{
    caseTypeIsSet_ = false;
}

int32_t TestCaseVo::getPlatformType() const
{
    return platformType_;
}

void TestCaseVo::setPlatformType(int32_t value)
{
    platformType_ = value;
    platformTypeIsSet_ = true;
}

bool TestCaseVo::platformTypeIsSet() const
{
    return platformTypeIsSet_;
}

void TestCaseVo::unsetplatformType()
{
    platformTypeIsSet_ = false;
}

int32_t TestCaseVo::getServiceType() const
{
    return serviceType_;
}

void TestCaseVo::setServiceType(int32_t value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool TestCaseVo::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void TestCaseVo::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string TestCaseVo::getServiceTypeName() const
{
    return serviceTypeName_;
}

void TestCaseVo::setServiceTypeName(const std::string& value)
{
    serviceTypeName_ = value;
    serviceTypeNameIsSet_ = true;
}

bool TestCaseVo::serviceTypeNameIsSet() const
{
    return serviceTypeNameIsSet_;
}

void TestCaseVo::unsetserviceTypeName()
{
    serviceTypeNameIsSet_ = false;
}

int32_t TestCaseVo::getTestType() const
{
    return testType_;
}

void TestCaseVo::setTestType(int32_t value)
{
    testType_ = value;
    testTypeIsSet_ = true;
}

bool TestCaseVo::testTypeIsSet() const
{
    return testTypeIsSet_;
}

void TestCaseVo::unsettestType()
{
    testTypeIsSet_ = false;
}

std::string TestCaseVo::getTestTypeName() const
{
    return testTypeName_;
}

void TestCaseVo::setTestTypeName(const std::string& value)
{
    testTypeName_ = value;
    testTypeNameIsSet_ = true;
}

bool TestCaseVo::testTypeNameIsSet() const
{
    return testTypeNameIsSet_;
}

void TestCaseVo::unsettestTypeName()
{
    testTypeNameIsSet_ = false;
}

std::string TestCaseVo::getDesignNote() const
{
    return designNote_;
}

void TestCaseVo::setDesignNote(const std::string& value)
{
    designNote_ = value;
    designNoteIsSet_ = true;
}

bool TestCaseVo::designNoteIsSet() const
{
    return designNoteIsSet_;
}

void TestCaseVo::unsetdesignNote()
{
    designNoteIsSet_ = false;
}

std::string TestCaseVo::getTestStep() const
{
    return testStep_;
}

void TestCaseVo::setTestStep(const std::string& value)
{
    testStep_ = value;
    testStepIsSet_ = true;
}

bool TestCaseVo::testStepIsSet() const
{
    return testStepIsSet_;
}

void TestCaseVo::unsettestStep()
{
    testStepIsSet_ = false;
}

std::string TestCaseVo::getExpectOutput() const
{
    return expectOutput_;
}

void TestCaseVo::setExpectOutput(const std::string& value)
{
    expectOutput_ = value;
    expectOutputIsSet_ = true;
}

bool TestCaseVo::expectOutputIsSet() const
{
    return expectOutputIsSet_;
}

void TestCaseVo::unsetexpectOutput()
{
    expectOutputIsSet_ = false;
}

std::string TestCaseVo::getEnvType() const
{
    return envType_;
}

void TestCaseVo::setEnvType(const std::string& value)
{
    envType_ = value;
    envTypeIsSet_ = true;
}

bool TestCaseVo::envTypeIsSet() const
{
    return envTypeIsSet_;
}

void TestCaseVo::unsetenvType()
{
    envTypeIsSet_ = false;
}

std::string TestCaseVo::getExePlatform() const
{
    return exePlatform_;
}

void TestCaseVo::setExePlatform(const std::string& value)
{
    exePlatform_ = value;
    exePlatformIsSet_ = true;
}

bool TestCaseVo::exePlatformIsSet() const
{
    return exePlatformIsSet_;
}

void TestCaseVo::unsetexePlatform()
{
    exePlatformIsSet_ = false;
}

std::string TestCaseVo::getTestcaseProject() const
{
    return testcaseProject_;
}

void TestCaseVo::setTestcaseProject(const std::string& value)
{
    testcaseProject_ = value;
    testcaseProjectIsSet_ = true;
}

bool TestCaseVo::testcaseProjectIsSet() const
{
    return testcaseProjectIsSet_;
}

void TestCaseVo::unsettestcaseProject()
{
    testcaseProjectIsSet_ = false;
}

std::string TestCaseVo::getSvnScriptPath() const
{
    return svnScriptPath_;
}

void TestCaseVo::setSvnScriptPath(const std::string& value)
{
    svnScriptPath_ = value;
    svnScriptPathIsSet_ = true;
}

bool TestCaseVo::svnScriptPathIsSet() const
{
    return svnScriptPathIsSet_;
}

void TestCaseVo::unsetsvnScriptPath()
{
    svnScriptPathIsSet_ = false;
}

std::string TestCaseVo::getMapRestrict() const
{
    return mapRestrict_;
}

void TestCaseVo::setMapRestrict(const std::string& value)
{
    mapRestrict_ = value;
    mapRestrictIsSet_ = true;
}

bool TestCaseVo::mapRestrictIsSet() const
{
    return mapRestrictIsSet_;
}

void TestCaseVo::unsetmapRestrict()
{
    mapRestrictIsSet_ = false;
}

std::string TestCaseVo::getNetworkScriptName() const
{
    return networkScriptName_;
}

void TestCaseVo::setNetworkScriptName(const std::string& value)
{
    networkScriptName_ = value;
    networkScriptNameIsSet_ = true;
}

bool TestCaseVo::networkScriptNameIsSet() const
{
    return networkScriptNameIsSet_;
}

void TestCaseVo::unsetnetworkScriptName()
{
    networkScriptNameIsSet_ = false;
}

int32_t TestCaseVo::getAutoType() const
{
    return autoType_;
}

void TestCaseVo::setAutoType(int32_t value)
{
    autoType_ = value;
    autoTypeIsSet_ = true;
}

bool TestCaseVo::autoTypeIsSet() const
{
    return autoTypeIsSet_;
}

void TestCaseVo::unsetautoType()
{
    autoTypeIsSet_ = false;
}

int32_t TestCaseVo::getToBeAutoExec() const
{
    return toBeAutoExec_;
}

void TestCaseVo::setToBeAutoExec(int32_t value)
{
    toBeAutoExec_ = value;
    toBeAutoExecIsSet_ = true;
}

bool TestCaseVo::toBeAutoExecIsSet() const
{
    return toBeAutoExecIsSet_;
}

void TestCaseVo::unsettoBeAutoExec()
{
    toBeAutoExecIsSet_ = false;
}

std::string TestCaseVo::getLastResult() const
{
    return lastResult_;
}

void TestCaseVo::setLastResult(const std::string& value)
{
    lastResult_ = value;
    lastResultIsSet_ = true;
}

bool TestCaseVo::lastResultIsSet() const
{
    return lastResultIsSet_;
}

void TestCaseVo::unsetlastResult()
{
    lastResultIsSet_ = false;
}

std::string TestCaseVo::getLastResultUri() const
{
    return lastResultUri_;
}

void TestCaseVo::setLastResultUri(const std::string& value)
{
    lastResultUri_ = value;
    lastResultUriIsSet_ = true;
}

bool TestCaseVo::lastResultUriIsSet() const
{
    return lastResultUriIsSet_;
}

void TestCaseVo::unsetlastResultUri()
{
    lastResultUriIsSet_ = false;
}

std::string TestCaseVo::getFeatureUri() const
{
    return featureUri_;
}

void TestCaseVo::setFeatureUri(const std::string& value)
{
    featureUri_ = value;
    featureUriIsSet_ = true;
}

bool TestCaseVo::featureUriIsSet() const
{
    return featureUriIsSet_;
}

void TestCaseVo::unsetfeatureUri()
{
    featureUriIsSet_ = false;
}

std::string TestCaseVo::getFeatureName() const
{
    return featureName_;
}

void TestCaseVo::setFeatureName(const std::string& value)
{
    featureName_ = value;
    featureNameIsSet_ = true;
}

bool TestCaseVo::featureNameIsSet() const
{
    return featureNameIsSet_;
}

void TestCaseVo::unsetfeatureName()
{
    featureNameIsSet_ = false;
}

std::string TestCaseVo::getInterfaceName() const
{
    return interfaceName_;
}

void TestCaseVo::setInterfaceName(const std::string& value)
{
    interfaceName_ = value;
    interfaceNameIsSet_ = true;
}

bool TestCaseVo::interfaceNameIsSet() const
{
    return interfaceNameIsSet_;
}

void TestCaseVo::unsetinterfaceName()
{
    interfaceNameIsSet_ = false;
}

std::string TestCaseVo::getSnpNo() const
{
    return snpNo_;
}

void TestCaseVo::setSnpNo(const std::string& value)
{
    snpNo_ = value;
    snpNoIsSet_ = true;
}

bool TestCaseVo::snpNoIsSet() const
{
    return snpNoIsSet_;
}

void TestCaseVo::unsetsnpNo()
{
    snpNoIsSet_ = false;
}

std::string TestCaseVo::getDrRelationId() const
{
    return drRelationId_;
}

void TestCaseVo::setDrRelationId(const std::string& value)
{
    drRelationId_ = value;
    drRelationIdIsSet_ = true;
}

bool TestCaseVo::drRelationIdIsSet() const
{
    return drRelationIdIsSet_;
}

void TestCaseVo::unsetdrRelationId()
{
    drRelationIdIsSet_ = false;
}

std::string TestCaseVo::getIssueName() const
{
    return issueName_;
}

void TestCaseVo::setIssueName(const std::string& value)
{
    issueName_ = value;
    issueNameIsSet_ = true;
}

bool TestCaseVo::issueNameIsSet() const
{
    return issueNameIsSet_;
}

void TestCaseVo::unsetissueName()
{
    issueNameIsSet_ = false;
}

std::string TestCaseVo::getTestBaseNum() const
{
    return testBaseNum_;
}

void TestCaseVo::setTestBaseNum(const std::string& value)
{
    testBaseNum_ = value;
    testBaseNumIsSet_ = true;
}

bool TestCaseVo::testBaseNumIsSet() const
{
    return testBaseNumIsSet_;
}

void TestCaseVo::unsettestBaseNum()
{
    testBaseNumIsSet_ = false;
}

int32_t TestCaseVo::getAutomaticallyExecuted() const
{
    return automaticallyExecuted_;
}

void TestCaseVo::setAutomaticallyExecuted(int32_t value)
{
    automaticallyExecuted_ = value;
    automaticallyExecutedIsSet_ = true;
}

bool TestCaseVo::automaticallyExecutedIsSet() const
{
    return automaticallyExecutedIsSet_;
}

void TestCaseVo::unsetautomaticallyExecuted()
{
    automaticallyExecutedIsSet_ = false;
}

utility::datetime TestCaseVo::getFirstExecuteTime() const
{
    return firstExecuteTime_;
}

void TestCaseVo::setFirstExecuteTime(const utility::datetime& value)
{
    firstExecuteTime_ = value;
    firstExecuteTimeIsSet_ = true;
}

bool TestCaseVo::firstExecuteTimeIsSet() const
{
    return firstExecuteTimeIsSet_;
}

void TestCaseVo::unsetfirstExecuteTime()
{
    firstExecuteTimeIsSet_ = false;
}

std::string TestCaseVo::getDetectType() const
{
    return detectType_;
}

void TestCaseVo::setDetectType(const std::string& value)
{
    detectType_ = value;
    detectTypeIsSet_ = true;
}

bool TestCaseVo::detectTypeIsSet() const
{
    return detectTypeIsSet_;
}

void TestCaseVo::unsetdetectType()
{
    detectTypeIsSet_ = false;
}

std::string TestCaseVo::getExecuteParam() const
{
    return executeParam_;
}

void TestCaseVo::setExecuteParam(const std::string& value)
{
    executeParam_ = value;
    executeParamIsSet_ = true;
}

bool TestCaseVo::executeParamIsSet() const
{
    return executeParamIsSet_;
}

void TestCaseVo::unsetexecuteParam()
{
    executeParamIsSet_ = false;
}

std::string TestCaseVo::getTestFeature() const
{
    return testFeature_;
}

void TestCaseVo::setTestFeature(const std::string& value)
{
    testFeature_ = value;
    testFeatureIsSet_ = true;
}

bool TestCaseVo::testFeatureIsSet() const
{
    return testFeatureIsSet_;
}

void TestCaseVo::unsettestFeature()
{
    testFeatureIsSet_ = false;
}

int32_t TestCaseVo::getIsContractTestcase() const
{
    return isContractTestcase_;
}

void TestCaseVo::setIsContractTestcase(int32_t value)
{
    isContractTestcase_ = value;
    isContractTestcaseIsSet_ = true;
}

bool TestCaseVo::isContractTestcaseIsSet() const
{
    return isContractTestcaseIsSet_;
}

void TestCaseVo::unsetisContractTestcase()
{
    isContractTestcaseIsSet_ = false;
}

double TestCaseVo::getTimeCost() const
{
    return timeCost_;
}

void TestCaseVo::setTimeCost(double value)
{
    timeCost_ = value;
    timeCostIsSet_ = true;
}

bool TestCaseVo::timeCostIsSet() const
{
    return timeCostIsSet_;
}

void TestCaseVo::unsettimeCost()
{
    timeCostIsSet_ = false;
}

utility::datetime TestCaseVo::getBeAutoTypeTime() const
{
    return beAutoTypeTime_;
}

void TestCaseVo::setBeAutoTypeTime(const utility::datetime& value)
{
    beAutoTypeTime_ = value;
    beAutoTypeTimeIsSet_ = true;
}

bool TestCaseVo::beAutoTypeTimeIsSet() const
{
    return beAutoTypeTimeIsSet_;
}

void TestCaseVo::unsetbeAutoTypeTime()
{
    beAutoTypeTimeIsSet_ = false;
}

std::string TestCaseVo::getCompareNumber() const
{
    return compareNumber_;
}

void TestCaseVo::setCompareNumber(const std::string& value)
{
    compareNumber_ = value;
    compareNumberIsSet_ = true;
}

bool TestCaseVo::compareNumberIsSet() const
{
    return compareNumberIsSet_;
}

void TestCaseVo::unsetcompareNumber()
{
    compareNumberIsSet_ = false;
}

std::string TestCaseVo::getSceneFlag() const
{
    return sceneFlag_;
}

void TestCaseVo::setSceneFlag(const std::string& value)
{
    sceneFlag_ = value;
    sceneFlagIsSet_ = true;
}

bool TestCaseVo::sceneFlagIsSet() const
{
    return sceneFlagIsSet_;
}

void TestCaseVo::unsetsceneFlag()
{
    sceneFlagIsSet_ = false;
}

std::string TestCaseVo::getBaseFlag() const
{
    return baseFlag_;
}

void TestCaseVo::setBaseFlag(const std::string& value)
{
    baseFlag_ = value;
    baseFlagIsSet_ = true;
}

bool TestCaseVo::baseFlagIsSet() const
{
    return baseFlagIsSet_;
}

void TestCaseVo::unsetbaseFlag()
{
    baseFlagIsSet_ = false;
}

std::string TestCaseVo::getParaValidator() const
{
    return paraValidator_;
}

void TestCaseVo::setParaValidator(const std::string& value)
{
    paraValidator_ = value;
    paraValidatorIsSet_ = true;
}

bool TestCaseVo::paraValidatorIsSet() const
{
    return paraValidatorIsSet_;
}

void TestCaseVo::unsetparaValidator()
{
    paraValidatorIsSet_ = false;
}

std::string TestCaseVo::getKnetNodeId() const
{
    return knetNodeId_;
}

void TestCaseVo::setKnetNodeId(const std::string& value)
{
    knetNodeId_ = value;
    knetNodeIdIsSet_ = true;
}

bool TestCaseVo::knetNodeIdIsSet() const
{
    return knetNodeIdIsSet_;
}

void TestCaseVo::unsetknetNodeId()
{
    knetNodeIdIsSet_ = false;
}

std::string TestCaseVo::getLastExeAuthor() const
{
    return lastExeAuthor_;
}

void TestCaseVo::setLastExeAuthor(const std::string& value)
{
    lastExeAuthor_ = value;
    lastExeAuthorIsSet_ = true;
}

bool TestCaseVo::lastExeAuthorIsSet() const
{
    return lastExeAuthorIsSet_;
}

void TestCaseVo::unsetlastExeAuthor()
{
    lastExeAuthorIsSet_ = false;
}

std::string TestCaseVo::getCloudCarrier() const
{
    return cloudCarrier_;
}

void TestCaseVo::setCloudCarrier(const std::string& value)
{
    cloudCarrier_ = value;
    cloudCarrierIsSet_ = true;
}

bool TestCaseVo::cloudCarrierIsSet() const
{
    return cloudCarrierIsSet_;
}

void TestCaseVo::unsetcloudCarrier()
{
    cloudCarrierIsSet_ = false;
}

std::string TestCaseVo::getMarketPlace() const
{
    return marketPlace_;
}

void TestCaseVo::setMarketPlace(const std::string& value)
{
    marketPlace_ = value;
    marketPlaceIsSet_ = true;
}

bool TestCaseVo::marketPlaceIsSet() const
{
    return marketPlaceIsSet_;
}

void TestCaseVo::unsetmarketPlace()
{
    marketPlaceIsSet_ = false;
}

std::string TestCaseVo::getTestMindId() const
{
    return testMindId_;
}

void TestCaseVo::setTestMindId(const std::string& value)
{
    testMindId_ = value;
    testMindIdIsSet_ = true;
}

bool TestCaseVo::testMindIdIsSet() const
{
    return testMindIdIsSet_;
}

void TestCaseVo::unsettestMindId()
{
    testMindIdIsSet_ = false;
}

std::string TestCaseVo::getTestMindUrl() const
{
    return testMindUrl_;
}

void TestCaseVo::setTestMindUrl(const std::string& value)
{
    testMindUrl_ = value;
    testMindUrlIsSet_ = true;
}

bool TestCaseVo::testMindUrlIsSet() const
{
    return testMindUrlIsSet_;
}

void TestCaseVo::unsettestMindUrl()
{
    testMindUrlIsSet_ = false;
}

std::string TestCaseVo::getCommitUrl() const
{
    return commitUrl_;
}

void TestCaseVo::setCommitUrl(const std::string& value)
{
    commitUrl_ = value;
    commitUrlIsSet_ = true;
}

bool TestCaseVo::commitUrlIsSet() const
{
    return commitUrlIsSet_;
}

void TestCaseVo::unsetcommitUrl()
{
    commitUrlIsSet_ = false;
}

std::string TestCaseVo::getTestPatternNumber() const
{
    return testPatternNumber_;
}

void TestCaseVo::setTestPatternNumber(const std::string& value)
{
    testPatternNumber_ = value;
    testPatternNumberIsSet_ = true;
}

bool TestCaseVo::testPatternNumberIsSet() const
{
    return testPatternNumberIsSet_;
}

void TestCaseVo::unsettestPatternNumber()
{
    testPatternNumberIsSet_ = false;
}

std::string TestCaseVo::getTestFactorNumber() const
{
    return testFactorNumber_;
}

void TestCaseVo::setTestFactorNumber(const std::string& value)
{
    testFactorNumber_ = value;
    testFactorNumberIsSet_ = true;
}

bool TestCaseVo::testFactorNumberIsSet() const
{
    return testFactorNumberIsSet_;
}

void TestCaseVo::unsettestFactorNumber()
{
    testFactorNumberIsSet_ = false;
}

std::string TestCaseVo::getStatusCode() const
{
    return statusCode_;
}

void TestCaseVo::setStatusCode(const std::string& value)
{
    statusCode_ = value;
    statusCodeIsSet_ = true;
}

bool TestCaseVo::statusCodeIsSet() const
{
    return statusCodeIsSet_;
}

void TestCaseVo::unsetstatusCode()
{
    statusCodeIsSet_ = false;
}

std::string TestCaseVo::getResultCode() const
{
    return resultCode_;
}

void TestCaseVo::setResultCode(const std::string& value)
{
    resultCode_ = value;
    resultCodeIsSet_ = true;
}

bool TestCaseVo::resultCodeIsSet() const
{
    return resultCodeIsSet_;
}

void TestCaseVo::unsetresultCode()
{
    resultCodeIsSet_ = false;
}

std::string TestCaseVo::getReleaseId() const
{
    return releaseId_;
}

void TestCaseVo::setReleaseId(const std::string& value)
{
    releaseId_ = value;
    releaseIdIsSet_ = true;
}

bool TestCaseVo::releaseIdIsSet() const
{
    return releaseIdIsSet_;
}

void TestCaseVo::unsetreleaseId()
{
    releaseIdIsSet_ = false;
}

std::string TestCaseVo::getLabelId() const
{
    return labelId_;
}

void TestCaseVo::setLabelId(const std::string& value)
{
    labelId_ = value;
    labelIdIsSet_ = true;
}

bool TestCaseVo::labelIdIsSet() const
{
    return labelIdIsSet_;
}

void TestCaseVo::unsetlabelId()
{
    labelIdIsSet_ = false;
}

std::vector<LabelVo>& TestCaseVo::getLabels()
{
    return labels_;
}

void TestCaseVo::setLabels(const std::vector<LabelVo>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool TestCaseVo::labelsIsSet() const
{
    return labelsIsSet_;
}

void TestCaseVo::unsetlabels()
{
    labelsIsSet_ = false;
}

std::string TestCaseVo::getModuleId() const
{
    return moduleId_;
}

void TestCaseVo::setModuleId(const std::string& value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool TestCaseVo::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void TestCaseVo::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

std::string TestCaseVo::getModuleName() const
{
    return moduleName_;
}

void TestCaseVo::setModuleName(const std::string& value)
{
    moduleName_ = value;
    moduleNameIsSet_ = true;
}

bool TestCaseVo::moduleNameIsSet() const
{
    return moduleNameIsSet_;
}

void TestCaseVo::unsetmoduleName()
{
    moduleNameIsSet_ = false;
}

std::string TestCaseVo::getModulePath() const
{
    return modulePath_;
}

void TestCaseVo::setModulePath(const std::string& value)
{
    modulePath_ = value;
    modulePathIsSet_ = true;
}

bool TestCaseVo::modulePathIsSet() const
{
    return modulePathIsSet_;
}

void TestCaseVo::unsetmodulePath()
{
    modulePathIsSet_ = false;
}

std::string TestCaseVo::getModulePathName() const
{
    return modulePathName_;
}

void TestCaseVo::setModulePathName(const std::string& value)
{
    modulePathName_ = value;
    modulePathNameIsSet_ = true;
}

bool TestCaseVo::modulePathNameIsSet() const
{
    return modulePathNameIsSet_;
}

void TestCaseVo::unsetmodulePathName()
{
    modulePathNameIsSet_ = false;
}

utility::datetime TestCaseVo::getExecuteLatestTime() const
{
    return executeLatestTime_;
}

void TestCaseVo::setExecuteLatestTime(const utility::datetime& value)
{
    executeLatestTime_ = value;
    executeLatestTimeIsSet_ = true;
}

bool TestCaseVo::executeLatestTimeIsSet() const
{
    return executeLatestTimeIsSet_;
}

void TestCaseVo::unsetexecuteLatestTime()
{
    executeLatestTimeIsSet_ = false;
}

std::string TestCaseVo::getExecuteDuration() const
{
    return executeDuration_;
}

void TestCaseVo::setExecuteDuration(const std::string& value)
{
    executeDuration_ = value;
    executeDurationIsSet_ = true;
}

bool TestCaseVo::executeDurationIsSet() const
{
    return executeDurationIsSet_;
}

void TestCaseVo::unsetexecuteDuration()
{
    executeDurationIsSet_ = false;
}

int32_t TestCaseVo::getExecuteTimes() const
{
    return executeTimes_;
}

void TestCaseVo::setExecuteTimes(int32_t value)
{
    executeTimes_ = value;
    executeTimesIsSet_ = true;
}

bool TestCaseVo::executeTimesIsSet() const
{
    return executeTimesIsSet_;
}

void TestCaseVo::unsetexecuteTimes()
{
    executeTimesIsSet_ = false;
}

int32_t TestCaseVo::getIsKeyword() const
{
    return isKeyword_;
}

void TestCaseVo::setIsKeyword(int32_t value)
{
    isKeyword_ = value;
    isKeywordIsSet_ = true;
}

bool TestCaseVo::isKeywordIsSet() const
{
    return isKeywordIsSet_;
}

void TestCaseVo::unsetisKeyword()
{
    isKeywordIsSet_ = false;
}

std::string TestCaseVo::getReleaseDev() const
{
    return releaseDev_;
}

void TestCaseVo::setReleaseDev(const std::string& value)
{
    releaseDev_ = value;
    releaseDevIsSet_ = true;
}

bool TestCaseVo::releaseDevIsSet() const
{
    return releaseDevIsSet_;
}

void TestCaseVo::unsetreleaseDev()
{
    releaseDevIsSet_ = false;
}

std::string TestCaseVo::getNewCreated() const
{
    return newCreated_;
}

void TestCaseVo::setNewCreated(const std::string& value)
{
    newCreated_ = value;
    newCreatedIsSet_ = true;
}

bool TestCaseVo::newCreatedIsSet() const
{
    return newCreatedIsSet_;
}

void TestCaseVo::unsetnewCreated()
{
    newCreatedIsSet_ = false;
}

std::string TestCaseVo::getProjectUuid() const
{
    return projectUuid_;
}

void TestCaseVo::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool TestCaseVo::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void TestCaseVo::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string TestCaseVo::getCreationVersionName() const
{
    return creationVersionName_;
}

void TestCaseVo::setCreationVersionName(const std::string& value)
{
    creationVersionName_ = value;
    creationVersionNameIsSet_ = true;
}

bool TestCaseVo::creationVersionNameIsSet() const
{
    return creationVersionNameIsSet_;
}

void TestCaseVo::unsetcreationVersionName()
{
    creationVersionNameIsSet_ = false;
}

std::string TestCaseVo::getFeaturePath() const
{
    return featurePath_;
}

void TestCaseVo::setFeaturePath(const std::string& value)
{
    featurePath_ = value;
    featurePathIsSet_ = true;
}

bool TestCaseVo::featurePathIsSet() const
{
    return featurePathIsSet_;
}

void TestCaseVo::unsetfeaturePath()
{
    featurePathIsSet_ = false;
}

std::string TestCaseVo::getTestcaseUri() const
{
    return testcaseUri_;
}

void TestCaseVo::setTestcaseUri(const std::string& value)
{
    testcaseUri_ = value;
    testcaseUriIsSet_ = true;
}

bool TestCaseVo::testcaseUriIsSet() const
{
    return testcaseUriIsSet_;
}

void TestCaseVo::unsettestcaseUri()
{
    testcaseUriIsSet_ = false;
}

std::string TestCaseVo::getOwnerName() const
{
    return ownerName_;
}

void TestCaseVo::setOwnerName(const std::string& value)
{
    ownerName_ = value;
    ownerNameIsSet_ = true;
}

bool TestCaseVo::ownerNameIsSet() const
{
    return ownerNameIsSet_;
}

void TestCaseVo::unsetownerName()
{
    ownerNameIsSet_ = false;
}

std::string TestCaseVo::getIteratorCaseUri() const
{
    return iteratorCaseUri_;
}

void TestCaseVo::setIteratorCaseUri(const std::string& value)
{
    iteratorCaseUri_ = value;
    iteratorCaseUriIsSet_ = true;
}

bool TestCaseVo::iteratorCaseUriIsSet() const
{
    return iteratorCaseUriIsSet_;
}

void TestCaseVo::unsetiteratorCaseUri()
{
    iteratorCaseUriIsSet_ = false;
}

std::string TestCaseVo::getScriptLink() const
{
    return scriptLink_;
}

void TestCaseVo::setScriptLink(const std::string& value)
{
    scriptLink_ = value;
    scriptLinkIsSet_ = true;
}

bool TestCaseVo::scriptLinkIsSet() const
{
    return scriptLinkIsSet_;
}

void TestCaseVo::unsetscriptLink()
{
    scriptLinkIsSet_ = false;
}

std::string TestCaseVo::getCustomField1() const
{
    return customField1_;
}

void TestCaseVo::setCustomField1(const std::string& value)
{
    customField1_ = value;
    customField1IsSet_ = true;
}

bool TestCaseVo::customField1IsSet() const
{
    return customField1IsSet_;
}

void TestCaseVo::unsetcustomField1()
{
    customField1IsSet_ = false;
}

std::string TestCaseVo::getCustomField2() const
{
    return customField2_;
}

void TestCaseVo::setCustomField2(const std::string& value)
{
    customField2_ = value;
    customField2IsSet_ = true;
}

bool TestCaseVo::customField2IsSet() const
{
    return customField2IsSet_;
}

void TestCaseVo::unsetcustomField2()
{
    customField2IsSet_ = false;
}

std::string TestCaseVo::getCustomField3() const
{
    return customField3_;
}

void TestCaseVo::setCustomField3(const std::string& value)
{
    customField3_ = value;
    customField3IsSet_ = true;
}

bool TestCaseVo::customField3IsSet() const
{
    return customField3IsSet_;
}

void TestCaseVo::unsetcustomField3()
{
    customField3IsSet_ = false;
}

std::string TestCaseVo::getCustomField4() const
{
    return customField4_;
}

void TestCaseVo::setCustomField4(const std::string& value)
{
    customField4_ = value;
    customField4IsSet_ = true;
}

bool TestCaseVo::customField4IsSet() const
{
    return customField4IsSet_;
}

void TestCaseVo::unsetcustomField4()
{
    customField4IsSet_ = false;
}

std::string TestCaseVo::getCustomField5() const
{
    return customField5_;
}

void TestCaseVo::setCustomField5(const std::string& value)
{
    customField5_ = value;
    customField5IsSet_ = true;
}

bool TestCaseVo::customField5IsSet() const
{
    return customField5IsSet_;
}

void TestCaseVo::unsetcustomField5()
{
    customField5IsSet_ = false;
}

std::string TestCaseVo::getCustomField6() const
{
    return customField6_;
}

void TestCaseVo::setCustomField6(const std::string& value)
{
    customField6_ = value;
    customField6IsSet_ = true;
}

bool TestCaseVo::customField6IsSet() const
{
    return customField6IsSet_;
}

void TestCaseVo::unsetcustomField6()
{
    customField6IsSet_ = false;
}

std::string TestCaseVo::getCustomField7() const
{
    return customField7_;
}

void TestCaseVo::setCustomField7(const std::string& value)
{
    customField7_ = value;
    customField7IsSet_ = true;
}

bool TestCaseVo::customField7IsSet() const
{
    return customField7IsSet_;
}

void TestCaseVo::unsetcustomField7()
{
    customField7IsSet_ = false;
}

std::string TestCaseVo::getCustomField8() const
{
    return customField8_;
}

void TestCaseVo::setCustomField8(const std::string& value)
{
    customField8_ = value;
    customField8IsSet_ = true;
}

bool TestCaseVo::customField8IsSet() const
{
    return customField8IsSet_;
}

void TestCaseVo::unsetcustomField8()
{
    customField8IsSet_ = false;
}

std::string TestCaseVo::getCustomField9() const
{
    return customField9_;
}

void TestCaseVo::setCustomField9(const std::string& value)
{
    customField9_ = value;
    customField9IsSet_ = true;
}

bool TestCaseVo::customField9IsSet() const
{
    return customField9IsSet_;
}

void TestCaseVo::unsetcustomField9()
{
    customField9IsSet_ = false;
}

std::string TestCaseVo::getCustomField10() const
{
    return customField10_;
}

void TestCaseVo::setCustomField10(const std::string& value)
{
    customField10_ = value;
    customField10IsSet_ = true;
}

bool TestCaseVo::customField10IsSet() const
{
    return customField10IsSet_;
}

void TestCaseVo::unsetcustomField10()
{
    customField10IsSet_ = false;
}

std::string TestCaseVo::getCustomField11() const
{
    return customField11_;
}

void TestCaseVo::setCustomField11(const std::string& value)
{
    customField11_ = value;
    customField11IsSet_ = true;
}

bool TestCaseVo::customField11IsSet() const
{
    return customField11IsSet_;
}

void TestCaseVo::unsetcustomField11()
{
    customField11IsSet_ = false;
}

std::string TestCaseVo::getCustomField12() const
{
    return customField12_;
}

void TestCaseVo::setCustomField12(const std::string& value)
{
    customField12_ = value;
    customField12IsSet_ = true;
}

bool TestCaseVo::customField12IsSet() const
{
    return customField12IsSet_;
}

void TestCaseVo::unsetcustomField12()
{
    customField12IsSet_ = false;
}

std::string TestCaseVo::getCustomField13() const
{
    return customField13_;
}

void TestCaseVo::setCustomField13(const std::string& value)
{
    customField13_ = value;
    customField13IsSet_ = true;
}

bool TestCaseVo::customField13IsSet() const
{
    return customField13IsSet_;
}

void TestCaseVo::unsetcustomField13()
{
    customField13IsSet_ = false;
}

std::string TestCaseVo::getCustomField14() const
{
    return customField14_;
}

void TestCaseVo::setCustomField14(const std::string& value)
{
    customField14_ = value;
    customField14IsSet_ = true;
}

bool TestCaseVo::customField14IsSet() const
{
    return customField14IsSet_;
}

void TestCaseVo::unsetcustomField14()
{
    customField14IsSet_ = false;
}

std::string TestCaseVo::getCustomField15() const
{
    return customField15_;
}

void TestCaseVo::setCustomField15(const std::string& value)
{
    customField15_ = value;
    customField15IsSet_ = true;
}

bool TestCaseVo::customField15IsSet() const
{
    return customField15IsSet_;
}

void TestCaseVo::unsetcustomField15()
{
    customField15IsSet_ = false;
}

std::string TestCaseVo::getCustomField16() const
{
    return customField16_;
}

void TestCaseVo::setCustomField16(const std::string& value)
{
    customField16_ = value;
    customField16IsSet_ = true;
}

bool TestCaseVo::customField16IsSet() const
{
    return customField16IsSet_;
}

void TestCaseVo::unsetcustomField16()
{
    customField16IsSet_ = false;
}

std::string TestCaseVo::getCustomField17() const
{
    return customField17_;
}

void TestCaseVo::setCustomField17(const std::string& value)
{
    customField17_ = value;
    customField17IsSet_ = true;
}

bool TestCaseVo::customField17IsSet() const
{
    return customField17IsSet_;
}

void TestCaseVo::unsetcustomField17()
{
    customField17IsSet_ = false;
}

std::string TestCaseVo::getCustomField18() const
{
    return customField18_;
}

void TestCaseVo::setCustomField18(const std::string& value)
{
    customField18_ = value;
    customField18IsSet_ = true;
}

bool TestCaseVo::customField18IsSet() const
{
    return customField18IsSet_;
}

void TestCaseVo::unsetcustomField18()
{
    customField18IsSet_ = false;
}

std::string TestCaseVo::getCustomField19() const
{
    return customField19_;
}

void TestCaseVo::setCustomField19(const std::string& value)
{
    customField19_ = value;
    customField19IsSet_ = true;
}

bool TestCaseVo::customField19IsSet() const
{
    return customField19IsSet_;
}

void TestCaseVo::unsetcustomField19()
{
    customField19IsSet_ = false;
}

std::string TestCaseVo::getCustomField20() const
{
    return customField20_;
}

void TestCaseVo::setCustomField20(const std::string& value)
{
    customField20_ = value;
    customField20IsSet_ = true;
}

bool TestCaseVo::customField20IsSet() const
{
    return customField20IsSet_;
}

void TestCaseVo::unsetcustomField20()
{
    customField20IsSet_ = false;
}

std::string TestCaseVo::getCustomField21() const
{
    return customField21_;
}

void TestCaseVo::setCustomField21(const std::string& value)
{
    customField21_ = value;
    customField21IsSet_ = true;
}

bool TestCaseVo::customField21IsSet() const
{
    return customField21IsSet_;
}

void TestCaseVo::unsetcustomField21()
{
    customField21IsSet_ = false;
}

std::string TestCaseVo::getCustomField22() const
{
    return customField22_;
}

void TestCaseVo::setCustomField22(const std::string& value)
{
    customField22_ = value;
    customField22IsSet_ = true;
}

bool TestCaseVo::customField22IsSet() const
{
    return customField22IsSet_;
}

void TestCaseVo::unsetcustomField22()
{
    customField22IsSet_ = false;
}

std::string TestCaseVo::getCustomField23() const
{
    return customField23_;
}

void TestCaseVo::setCustomField23(const std::string& value)
{
    customField23_ = value;
    customField23IsSet_ = true;
}

bool TestCaseVo::customField23IsSet() const
{
    return customField23IsSet_;
}

void TestCaseVo::unsetcustomField23()
{
    customField23IsSet_ = false;
}

std::string TestCaseVo::getCustomField24() const
{
    return customField24_;
}

void TestCaseVo::setCustomField24(const std::string& value)
{
    customField24_ = value;
    customField24IsSet_ = true;
}

bool TestCaseVo::customField24IsSet() const
{
    return customField24IsSet_;
}

void TestCaseVo::unsetcustomField24()
{
    customField24IsSet_ = false;
}

std::string TestCaseVo::getCustomField25() const
{
    return customField25_;
}

void TestCaseVo::setCustomField25(const std::string& value)
{
    customField25_ = value;
    customField25IsSet_ = true;
}

bool TestCaseVo::customField25IsSet() const
{
    return customField25IsSet_;
}

void TestCaseVo::unsetcustomField25()
{
    customField25IsSet_ = false;
}

}
}
}
}
}


