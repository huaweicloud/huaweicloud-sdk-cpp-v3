

#include "huaweicloud/cloudtest/v1/model/UpdateTestCaseListInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateTestCaseListInfo::UpdateTestCaseListInfo()
{
    stepsIsSet_ = false;
    attachmentsIsSet_ = false;
    author_ = "";
    authorIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    rank_ = 0;
    rankIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
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
    region_ = "";
    regionIsSet_ = false;
    relateType_ = "";
    relateTypeIsSet_ = false;
    serviceType_ = 0;
    serviceTypeIsSet_ = false;
    onlyChangeScript_ = "";
    onlyChangeScriptIsSet_ = false;
    addToIterator_ = "";
    addToIteratorIsSet_ = false;
    needUpdateRelation_ = "";
    needUpdateRelationIsSet_ = false;
    creationVersionUri_ = "";
    creationVersionUriIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    caseType_ = 0;
    caseTypeIsSet_ = false;
    platformType_ = 0;
    platformTypeIsSet_ = false;
    testType_ = 0;
    testTypeIsSet_ = false;
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
    interfaceName_ = "";
    interfaceNameIsSet_ = false;
    snpNo_ = "";
    snpNoIsSet_ = false;
    drRelationId_ = "";
    drRelationIdIsSet_ = false;
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
    labelNamesIsSet_ = false;
    moduleId_ = "";
    moduleIdIsSet_ = false;
    executeLatestTime_ = utility::datetime();
    executeLatestTimeIsSet_ = false;
    executeDuration_ = "";
    executeDurationIsSet_ = false;
    isKeyword_ = 0;
    isKeywordIsSet_ = false;
    releaseDev_ = "";
    releaseDevIsSet_ = false;
    newCreated_ = 0;
    newCreatedIsSet_ = false;
    executeParameter_ = "";
    executeParameterIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    caseListIsSet_ = false;
    caseIdListIsSet_ = false;
}

UpdateTestCaseListInfo::~UpdateTestCaseListInfo() = default;

void UpdateTestCaseListInfo::validate()
{
}

web::json::value UpdateTestCaseListInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(stepsIsSet_) {
        val[utility::conversions::to_string_t("steps")] = ModelBase::toJson(steps_);
    }
    if(attachmentsIsSet_) {
        val[utility::conversions::to_string_t("attachments")] = ModelBase::toJson(attachments_);
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
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
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
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(relateTypeIsSet_) {
        val[utility::conversions::to_string_t("relate_type")] = ModelBase::toJson(relateType_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(onlyChangeScriptIsSet_) {
        val[utility::conversions::to_string_t("only_change_script")] = ModelBase::toJson(onlyChangeScript_);
    }
    if(addToIteratorIsSet_) {
        val[utility::conversions::to_string_t("add_to_iterator")] = ModelBase::toJson(addToIterator_);
    }
    if(needUpdateRelationIsSet_) {
        val[utility::conversions::to_string_t("need_update_relation")] = ModelBase::toJson(needUpdateRelation_);
    }
    if(creationVersionUriIsSet_) {
        val[utility::conversions::to_string_t("creation_version_uri")] = ModelBase::toJson(creationVersionUri_);
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
    if(testTypeIsSet_) {
        val[utility::conversions::to_string_t("test_type")] = ModelBase::toJson(testType_);
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
    if(interfaceNameIsSet_) {
        val[utility::conversions::to_string_t("interface_name")] = ModelBase::toJson(interfaceName_);
    }
    if(snpNoIsSet_) {
        val[utility::conversions::to_string_t("snp_no")] = ModelBase::toJson(snpNo_);
    }
    if(drRelationIdIsSet_) {
        val[utility::conversions::to_string_t("dr_relation_id")] = ModelBase::toJson(drRelationId_);
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
    if(labelNamesIsSet_) {
        val[utility::conversions::to_string_t("label_names")] = ModelBase::toJson(labelNames_);
    }
    if(moduleIdIsSet_) {
        val[utility::conversions::to_string_t("module_id")] = ModelBase::toJson(moduleId_);
    }
    if(executeLatestTimeIsSet_) {
        val[utility::conversions::to_string_t("execute_latest_time")] = ModelBase::toJson(executeLatestTime_);
    }
    if(executeDurationIsSet_) {
        val[utility::conversions::to_string_t("execute_duration")] = ModelBase::toJson(executeDuration_);
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
    if(executeParameterIsSet_) {
        val[utility::conversions::to_string_t("execute_parameter")] = ModelBase::toJson(executeParameter_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(caseListIsSet_) {
        val[utility::conversions::to_string_t("case_list")] = ModelBase::toJson(caseList_);
    }
    if(caseIdListIsSet_) {
        val[utility::conversions::to_string_t("case_id_list")] = ModelBase::toJson(caseIdList_);
    }

    return val;
}
bool UpdateTestCaseListInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("steps"));
        if(!fieldValue.is_null())
        {
            std::vector<TestCaseStepInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSteps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attachments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachments"));
        if(!fieldValue.is_null())
        {
            std::vector<TestCaseAttachmentInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachments(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relate_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relate_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelateType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("only_change_script"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("only_change_script"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnlyChangeScript(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("add_to_iterator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("add_to_iterator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddToIterator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("need_update_relation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("need_update_relation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedUpdateRelation(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("test_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("label_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("label_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabelNames(refVal);
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewCreated(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("case_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_list"));
        if(!fieldValue.is_null())
        {
            std::vector<CaseInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_id_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_id_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseIdList(refVal);
        }
    }
    return ok;
}


std::vector<TestCaseStepInfo>& UpdateTestCaseListInfo::getSteps()
{
    return steps_;
}

void UpdateTestCaseListInfo::setSteps(const std::vector<TestCaseStepInfo>& value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool UpdateTestCaseListInfo::stepsIsSet() const
{
    return stepsIsSet_;
}

void UpdateTestCaseListInfo::unsetsteps()
{
    stepsIsSet_ = false;
}

std::vector<TestCaseAttachmentInfo>& UpdateTestCaseListInfo::getAttachments()
{
    return attachments_;
}

void UpdateTestCaseListInfo::setAttachments(const std::vector<TestCaseAttachmentInfo>& value)
{
    attachments_ = value;
    attachmentsIsSet_ = true;
}

bool UpdateTestCaseListInfo::attachmentsIsSet() const
{
    return attachmentsIsSet_;
}

void UpdateTestCaseListInfo::unsetattachments()
{
    attachmentsIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getAuthor() const
{
    return author_;
}

void UpdateTestCaseListInfo::setAuthor(const std::string& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool UpdateTestCaseListInfo::authorIsSet() const
{
    return authorIsSet_;
}

void UpdateTestCaseListInfo::unsetauthor()
{
    authorIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getName() const
{
    return name_;
}

void UpdateTestCaseListInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateTestCaseListInfo::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateTestCaseListInfo::unsetname()
{
    nameIsSet_ = false;
}

int32_t UpdateTestCaseListInfo::getRank() const
{
    return rank_;
}

void UpdateTestCaseListInfo::setRank(int32_t value)
{
    rank_ = value;
    rankIsSet_ = true;
}

bool UpdateTestCaseListInfo::rankIsSet() const
{
    return rankIsSet_;
}

void UpdateTestCaseListInfo::unsetrank()
{
    rankIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getOwner() const
{
    return owner_;
}

void UpdateTestCaseListInfo::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool UpdateTestCaseListInfo::ownerIsSet() const
{
    return ownerIsSet_;
}

void UpdateTestCaseListInfo::unsetowner()
{
    ownerIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getPreparation() const
{
    return preparation_;
}

void UpdateTestCaseListInfo::setPreparation(const std::string& value)
{
    preparation_ = value;
    preparationIsSet_ = true;
}

bool UpdateTestCaseListInfo::preparationIsSet() const
{
    return preparationIsSet_;
}

void UpdateTestCaseListInfo::unsetpreparation()
{
    preparationIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getRemark() const
{
    return remark_;
}

void UpdateTestCaseListInfo::setRemark(const std::string& value)
{
    remark_ = value;
    remarkIsSet_ = true;
}

bool UpdateTestCaseListInfo::remarkIsSet() const
{
    return remarkIsSet_;
}

void UpdateTestCaseListInfo::unsetremark()
{
    remarkIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getStage() const
{
    return stage_;
}

void UpdateTestCaseListInfo::setStage(const std::string& value)
{
    stage_ = value;
    stageIsSet_ = true;
}

bool UpdateTestCaseListInfo::stageIsSet() const
{
    return stageIsSet_;
}

void UpdateTestCaseListInfo::unsetstage()
{
    stageIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getActivity() const
{
    return activity_;
}

void UpdateTestCaseListInfo::setActivity(const std::string& value)
{
    activity_ = value;
    activityIsSet_ = true;
}

bool UpdateTestCaseListInfo::activityIsSet() const
{
    return activityIsSet_;
}

void UpdateTestCaseListInfo::unsetactivity()
{
    activityIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getKeywords() const
{
    return keywords_;
}

void UpdateTestCaseListInfo::setKeywords(const std::string& value)
{
    keywords_ = value;
    keywordsIsSet_ = true;
}

bool UpdateTestCaseListInfo::keywordsIsSet() const
{
    return keywordsIsSet_;
}

void UpdateTestCaseListInfo::unsetkeywords()
{
    keywordsIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getMarket() const
{
    return market_;
}

void UpdateTestCaseListInfo::setMarket(const std::string& value)
{
    market_ = value;
    marketIsSet_ = true;
}

bool UpdateTestCaseListInfo::marketIsSet() const
{
    return marketIsSet_;
}

void UpdateTestCaseListInfo::unsetmarket()
{
    marketIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getDesigner() const
{
    return designer_;
}

void UpdateTestCaseListInfo::setDesigner(const std::string& value)
{
    designer_ = value;
    designerIsSet_ = true;
}

bool UpdateTestCaseListInfo::designerIsSet() const
{
    return designerIsSet_;
}

void UpdateTestCaseListInfo::unsetdesigner()
{
    designerIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getTags() const
{
    return tags_;
}

void UpdateTestCaseListInfo::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool UpdateTestCaseListInfo::tagsIsSet() const
{
    return tagsIsSet_;
}

void UpdateTestCaseListInfo::unsettags()
{
    tagsIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getRegion() const
{
    return region_;
}

void UpdateTestCaseListInfo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool UpdateTestCaseListInfo::regionIsSet() const
{
    return regionIsSet_;
}

void UpdateTestCaseListInfo::unsetregion()
{
    regionIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getRelateType() const
{
    return relateType_;
}

void UpdateTestCaseListInfo::setRelateType(const std::string& value)
{
    relateType_ = value;
    relateTypeIsSet_ = true;
}

bool UpdateTestCaseListInfo::relateTypeIsSet() const
{
    return relateTypeIsSet_;
}

void UpdateTestCaseListInfo::unsetrelateType()
{
    relateTypeIsSet_ = false;
}

int32_t UpdateTestCaseListInfo::getServiceType() const
{
    return serviceType_;
}

void UpdateTestCaseListInfo::setServiceType(int32_t value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool UpdateTestCaseListInfo::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void UpdateTestCaseListInfo::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getOnlyChangeScript() const
{
    return onlyChangeScript_;
}

void UpdateTestCaseListInfo::setOnlyChangeScript(const std::string& value)
{
    onlyChangeScript_ = value;
    onlyChangeScriptIsSet_ = true;
}

bool UpdateTestCaseListInfo::onlyChangeScriptIsSet() const
{
    return onlyChangeScriptIsSet_;
}

void UpdateTestCaseListInfo::unsetonlyChangeScript()
{
    onlyChangeScriptIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getAddToIterator() const
{
    return addToIterator_;
}

void UpdateTestCaseListInfo::setAddToIterator(const std::string& value)
{
    addToIterator_ = value;
    addToIteratorIsSet_ = true;
}

bool UpdateTestCaseListInfo::addToIteratorIsSet() const
{
    return addToIteratorIsSet_;
}

void UpdateTestCaseListInfo::unsetaddToIterator()
{
    addToIteratorIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getNeedUpdateRelation() const
{
    return needUpdateRelation_;
}

void UpdateTestCaseListInfo::setNeedUpdateRelation(const std::string& value)
{
    needUpdateRelation_ = value;
    needUpdateRelationIsSet_ = true;
}

bool UpdateTestCaseListInfo::needUpdateRelationIsSet() const
{
    return needUpdateRelationIsSet_;
}

void UpdateTestCaseListInfo::unsetneedUpdateRelation()
{
    needUpdateRelationIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCreationVersionUri() const
{
    return creationVersionUri_;
}

void UpdateTestCaseListInfo::setCreationVersionUri(const std::string& value)
{
    creationVersionUri_ = value;
    creationVersionUriIsSet_ = true;
}

bool UpdateTestCaseListInfo::creationVersionUriIsSet() const
{
    return creationVersionUriIsSet_;
}

void UpdateTestCaseListInfo::unsetcreationVersionUri()
{
    creationVersionUriIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getNumber() const
{
    return number_;
}

void UpdateTestCaseListInfo::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool UpdateTestCaseListInfo::numberIsSet() const
{
    return numberIsSet_;
}

void UpdateTestCaseListInfo::unsetnumber()
{
    numberIsSet_ = false;
}

int32_t UpdateTestCaseListInfo::getCaseType() const
{
    return caseType_;
}

void UpdateTestCaseListInfo::setCaseType(int32_t value)
{
    caseType_ = value;
    caseTypeIsSet_ = true;
}

bool UpdateTestCaseListInfo::caseTypeIsSet() const
{
    return caseTypeIsSet_;
}

void UpdateTestCaseListInfo::unsetcaseType()
{
    caseTypeIsSet_ = false;
}

int32_t UpdateTestCaseListInfo::getPlatformType() const
{
    return platformType_;
}

void UpdateTestCaseListInfo::setPlatformType(int32_t value)
{
    platformType_ = value;
    platformTypeIsSet_ = true;
}

bool UpdateTestCaseListInfo::platformTypeIsSet() const
{
    return platformTypeIsSet_;
}

void UpdateTestCaseListInfo::unsetplatformType()
{
    platformTypeIsSet_ = false;
}

int32_t UpdateTestCaseListInfo::getTestType() const
{
    return testType_;
}

void UpdateTestCaseListInfo::setTestType(int32_t value)
{
    testType_ = value;
    testTypeIsSet_ = true;
}

bool UpdateTestCaseListInfo::testTypeIsSet() const
{
    return testTypeIsSet_;
}

void UpdateTestCaseListInfo::unsettestType()
{
    testTypeIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getDesignNote() const
{
    return designNote_;
}

void UpdateTestCaseListInfo::setDesignNote(const std::string& value)
{
    designNote_ = value;
    designNoteIsSet_ = true;
}

bool UpdateTestCaseListInfo::designNoteIsSet() const
{
    return designNoteIsSet_;
}

void UpdateTestCaseListInfo::unsetdesignNote()
{
    designNoteIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getTestStep() const
{
    return testStep_;
}

void UpdateTestCaseListInfo::setTestStep(const std::string& value)
{
    testStep_ = value;
    testStepIsSet_ = true;
}

bool UpdateTestCaseListInfo::testStepIsSet() const
{
    return testStepIsSet_;
}

void UpdateTestCaseListInfo::unsettestStep()
{
    testStepIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getExpectOutput() const
{
    return expectOutput_;
}

void UpdateTestCaseListInfo::setExpectOutput(const std::string& value)
{
    expectOutput_ = value;
    expectOutputIsSet_ = true;
}

bool UpdateTestCaseListInfo::expectOutputIsSet() const
{
    return expectOutputIsSet_;
}

void UpdateTestCaseListInfo::unsetexpectOutput()
{
    expectOutputIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getEnvType() const
{
    return envType_;
}

void UpdateTestCaseListInfo::setEnvType(const std::string& value)
{
    envType_ = value;
    envTypeIsSet_ = true;
}

bool UpdateTestCaseListInfo::envTypeIsSet() const
{
    return envTypeIsSet_;
}

void UpdateTestCaseListInfo::unsetenvType()
{
    envTypeIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getExePlatform() const
{
    return exePlatform_;
}

void UpdateTestCaseListInfo::setExePlatform(const std::string& value)
{
    exePlatform_ = value;
    exePlatformIsSet_ = true;
}

bool UpdateTestCaseListInfo::exePlatformIsSet() const
{
    return exePlatformIsSet_;
}

void UpdateTestCaseListInfo::unsetexePlatform()
{
    exePlatformIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getTestcaseProject() const
{
    return testcaseProject_;
}

void UpdateTestCaseListInfo::setTestcaseProject(const std::string& value)
{
    testcaseProject_ = value;
    testcaseProjectIsSet_ = true;
}

bool UpdateTestCaseListInfo::testcaseProjectIsSet() const
{
    return testcaseProjectIsSet_;
}

void UpdateTestCaseListInfo::unsettestcaseProject()
{
    testcaseProjectIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getSvnScriptPath() const
{
    return svnScriptPath_;
}

void UpdateTestCaseListInfo::setSvnScriptPath(const std::string& value)
{
    svnScriptPath_ = value;
    svnScriptPathIsSet_ = true;
}

bool UpdateTestCaseListInfo::svnScriptPathIsSet() const
{
    return svnScriptPathIsSet_;
}

void UpdateTestCaseListInfo::unsetsvnScriptPath()
{
    svnScriptPathIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getMapRestrict() const
{
    return mapRestrict_;
}

void UpdateTestCaseListInfo::setMapRestrict(const std::string& value)
{
    mapRestrict_ = value;
    mapRestrictIsSet_ = true;
}

bool UpdateTestCaseListInfo::mapRestrictIsSet() const
{
    return mapRestrictIsSet_;
}

void UpdateTestCaseListInfo::unsetmapRestrict()
{
    mapRestrictIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getNetworkScriptName() const
{
    return networkScriptName_;
}

void UpdateTestCaseListInfo::setNetworkScriptName(const std::string& value)
{
    networkScriptName_ = value;
    networkScriptNameIsSet_ = true;
}

bool UpdateTestCaseListInfo::networkScriptNameIsSet() const
{
    return networkScriptNameIsSet_;
}

void UpdateTestCaseListInfo::unsetnetworkScriptName()
{
    networkScriptNameIsSet_ = false;
}

int32_t UpdateTestCaseListInfo::getAutoType() const
{
    return autoType_;
}

void UpdateTestCaseListInfo::setAutoType(int32_t value)
{
    autoType_ = value;
    autoTypeIsSet_ = true;
}

bool UpdateTestCaseListInfo::autoTypeIsSet() const
{
    return autoTypeIsSet_;
}

void UpdateTestCaseListInfo::unsetautoType()
{
    autoTypeIsSet_ = false;
}

int32_t UpdateTestCaseListInfo::getToBeAutoExec() const
{
    return toBeAutoExec_;
}

void UpdateTestCaseListInfo::setToBeAutoExec(int32_t value)
{
    toBeAutoExec_ = value;
    toBeAutoExecIsSet_ = true;
}

bool UpdateTestCaseListInfo::toBeAutoExecIsSet() const
{
    return toBeAutoExecIsSet_;
}

void UpdateTestCaseListInfo::unsettoBeAutoExec()
{
    toBeAutoExecIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getLastResult() const
{
    return lastResult_;
}

void UpdateTestCaseListInfo::setLastResult(const std::string& value)
{
    lastResult_ = value;
    lastResultIsSet_ = true;
}

bool UpdateTestCaseListInfo::lastResultIsSet() const
{
    return lastResultIsSet_;
}

void UpdateTestCaseListInfo::unsetlastResult()
{
    lastResultIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getLastResultUri() const
{
    return lastResultUri_;
}

void UpdateTestCaseListInfo::setLastResultUri(const std::string& value)
{
    lastResultUri_ = value;
    lastResultUriIsSet_ = true;
}

bool UpdateTestCaseListInfo::lastResultUriIsSet() const
{
    return lastResultUriIsSet_;
}

void UpdateTestCaseListInfo::unsetlastResultUri()
{
    lastResultUriIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getFeatureUri() const
{
    return featureUri_;
}

void UpdateTestCaseListInfo::setFeatureUri(const std::string& value)
{
    featureUri_ = value;
    featureUriIsSet_ = true;
}

bool UpdateTestCaseListInfo::featureUriIsSet() const
{
    return featureUriIsSet_;
}

void UpdateTestCaseListInfo::unsetfeatureUri()
{
    featureUriIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getInterfaceName() const
{
    return interfaceName_;
}

void UpdateTestCaseListInfo::setInterfaceName(const std::string& value)
{
    interfaceName_ = value;
    interfaceNameIsSet_ = true;
}

bool UpdateTestCaseListInfo::interfaceNameIsSet() const
{
    return interfaceNameIsSet_;
}

void UpdateTestCaseListInfo::unsetinterfaceName()
{
    interfaceNameIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getSnpNo() const
{
    return snpNo_;
}

void UpdateTestCaseListInfo::setSnpNo(const std::string& value)
{
    snpNo_ = value;
    snpNoIsSet_ = true;
}

bool UpdateTestCaseListInfo::snpNoIsSet() const
{
    return snpNoIsSet_;
}

void UpdateTestCaseListInfo::unsetsnpNo()
{
    snpNoIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getDrRelationId() const
{
    return drRelationId_;
}

void UpdateTestCaseListInfo::setDrRelationId(const std::string& value)
{
    drRelationId_ = value;
    drRelationIdIsSet_ = true;
}

bool UpdateTestCaseListInfo::drRelationIdIsSet() const
{
    return drRelationIdIsSet_;
}

void UpdateTestCaseListInfo::unsetdrRelationId()
{
    drRelationIdIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getTestBaseNum() const
{
    return testBaseNum_;
}

void UpdateTestCaseListInfo::setTestBaseNum(const std::string& value)
{
    testBaseNum_ = value;
    testBaseNumIsSet_ = true;
}

bool UpdateTestCaseListInfo::testBaseNumIsSet() const
{
    return testBaseNumIsSet_;
}

void UpdateTestCaseListInfo::unsettestBaseNum()
{
    testBaseNumIsSet_ = false;
}

int32_t UpdateTestCaseListInfo::getAutomaticallyExecuted() const
{
    return automaticallyExecuted_;
}

void UpdateTestCaseListInfo::setAutomaticallyExecuted(int32_t value)
{
    automaticallyExecuted_ = value;
    automaticallyExecutedIsSet_ = true;
}

bool UpdateTestCaseListInfo::automaticallyExecutedIsSet() const
{
    return automaticallyExecutedIsSet_;
}

void UpdateTestCaseListInfo::unsetautomaticallyExecuted()
{
    automaticallyExecutedIsSet_ = false;
}

utility::datetime UpdateTestCaseListInfo::getFirstExecuteTime() const
{
    return firstExecuteTime_;
}

void UpdateTestCaseListInfo::setFirstExecuteTime(const utility::datetime& value)
{
    firstExecuteTime_ = value;
    firstExecuteTimeIsSet_ = true;
}

bool UpdateTestCaseListInfo::firstExecuteTimeIsSet() const
{
    return firstExecuteTimeIsSet_;
}

void UpdateTestCaseListInfo::unsetfirstExecuteTime()
{
    firstExecuteTimeIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getDetectType() const
{
    return detectType_;
}

void UpdateTestCaseListInfo::setDetectType(const std::string& value)
{
    detectType_ = value;
    detectTypeIsSet_ = true;
}

bool UpdateTestCaseListInfo::detectTypeIsSet() const
{
    return detectTypeIsSet_;
}

void UpdateTestCaseListInfo::unsetdetectType()
{
    detectTypeIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getExecuteParam() const
{
    return executeParam_;
}

void UpdateTestCaseListInfo::setExecuteParam(const std::string& value)
{
    executeParam_ = value;
    executeParamIsSet_ = true;
}

bool UpdateTestCaseListInfo::executeParamIsSet() const
{
    return executeParamIsSet_;
}

void UpdateTestCaseListInfo::unsetexecuteParam()
{
    executeParamIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getTestFeature() const
{
    return testFeature_;
}

void UpdateTestCaseListInfo::setTestFeature(const std::string& value)
{
    testFeature_ = value;
    testFeatureIsSet_ = true;
}

bool UpdateTestCaseListInfo::testFeatureIsSet() const
{
    return testFeatureIsSet_;
}

void UpdateTestCaseListInfo::unsettestFeature()
{
    testFeatureIsSet_ = false;
}

int32_t UpdateTestCaseListInfo::getIsContractTestcase() const
{
    return isContractTestcase_;
}

void UpdateTestCaseListInfo::setIsContractTestcase(int32_t value)
{
    isContractTestcase_ = value;
    isContractTestcaseIsSet_ = true;
}

bool UpdateTestCaseListInfo::isContractTestcaseIsSet() const
{
    return isContractTestcaseIsSet_;
}

void UpdateTestCaseListInfo::unsetisContractTestcase()
{
    isContractTestcaseIsSet_ = false;
}

double UpdateTestCaseListInfo::getTimeCost() const
{
    return timeCost_;
}

void UpdateTestCaseListInfo::setTimeCost(double value)
{
    timeCost_ = value;
    timeCostIsSet_ = true;
}

bool UpdateTestCaseListInfo::timeCostIsSet() const
{
    return timeCostIsSet_;
}

void UpdateTestCaseListInfo::unsettimeCost()
{
    timeCostIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCustomField1() const
{
    return customField1_;
}

void UpdateTestCaseListInfo::setCustomField1(const std::string& value)
{
    customField1_ = value;
    customField1IsSet_ = true;
}

bool UpdateTestCaseListInfo::customField1IsSet() const
{
    return customField1IsSet_;
}

void UpdateTestCaseListInfo::unsetcustomField1()
{
    customField1IsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCustomField2() const
{
    return customField2_;
}

void UpdateTestCaseListInfo::setCustomField2(const std::string& value)
{
    customField2_ = value;
    customField2IsSet_ = true;
}

bool UpdateTestCaseListInfo::customField2IsSet() const
{
    return customField2IsSet_;
}

void UpdateTestCaseListInfo::unsetcustomField2()
{
    customField2IsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCustomField3() const
{
    return customField3_;
}

void UpdateTestCaseListInfo::setCustomField3(const std::string& value)
{
    customField3_ = value;
    customField3IsSet_ = true;
}

bool UpdateTestCaseListInfo::customField3IsSet() const
{
    return customField3IsSet_;
}

void UpdateTestCaseListInfo::unsetcustomField3()
{
    customField3IsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCustomField4() const
{
    return customField4_;
}

void UpdateTestCaseListInfo::setCustomField4(const std::string& value)
{
    customField4_ = value;
    customField4IsSet_ = true;
}

bool UpdateTestCaseListInfo::customField4IsSet() const
{
    return customField4IsSet_;
}

void UpdateTestCaseListInfo::unsetcustomField4()
{
    customField4IsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCustomField5() const
{
    return customField5_;
}

void UpdateTestCaseListInfo::setCustomField5(const std::string& value)
{
    customField5_ = value;
    customField5IsSet_ = true;
}

bool UpdateTestCaseListInfo::customField5IsSet() const
{
    return customField5IsSet_;
}

void UpdateTestCaseListInfo::unsetcustomField5()
{
    customField5IsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCustomField6() const
{
    return customField6_;
}

void UpdateTestCaseListInfo::setCustomField6(const std::string& value)
{
    customField6_ = value;
    customField6IsSet_ = true;
}

bool UpdateTestCaseListInfo::customField6IsSet() const
{
    return customField6IsSet_;
}

void UpdateTestCaseListInfo::unsetcustomField6()
{
    customField6IsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCustomField7() const
{
    return customField7_;
}

void UpdateTestCaseListInfo::setCustomField7(const std::string& value)
{
    customField7_ = value;
    customField7IsSet_ = true;
}

bool UpdateTestCaseListInfo::customField7IsSet() const
{
    return customField7IsSet_;
}

void UpdateTestCaseListInfo::unsetcustomField7()
{
    customField7IsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCustomField8() const
{
    return customField8_;
}

void UpdateTestCaseListInfo::setCustomField8(const std::string& value)
{
    customField8_ = value;
    customField8IsSet_ = true;
}

bool UpdateTestCaseListInfo::customField8IsSet() const
{
    return customField8IsSet_;
}

void UpdateTestCaseListInfo::unsetcustomField8()
{
    customField8IsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCustomField9() const
{
    return customField9_;
}

void UpdateTestCaseListInfo::setCustomField9(const std::string& value)
{
    customField9_ = value;
    customField9IsSet_ = true;
}

bool UpdateTestCaseListInfo::customField9IsSet() const
{
    return customField9IsSet_;
}

void UpdateTestCaseListInfo::unsetcustomField9()
{
    customField9IsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCustomField10() const
{
    return customField10_;
}

void UpdateTestCaseListInfo::setCustomField10(const std::string& value)
{
    customField10_ = value;
    customField10IsSet_ = true;
}

bool UpdateTestCaseListInfo::customField10IsSet() const
{
    return customField10IsSet_;
}

void UpdateTestCaseListInfo::unsetcustomField10()
{
    customField10IsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCustomField11() const
{
    return customField11_;
}

void UpdateTestCaseListInfo::setCustomField11(const std::string& value)
{
    customField11_ = value;
    customField11IsSet_ = true;
}

bool UpdateTestCaseListInfo::customField11IsSet() const
{
    return customField11IsSet_;
}

void UpdateTestCaseListInfo::unsetcustomField11()
{
    customField11IsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCustomField12() const
{
    return customField12_;
}

void UpdateTestCaseListInfo::setCustomField12(const std::string& value)
{
    customField12_ = value;
    customField12IsSet_ = true;
}

bool UpdateTestCaseListInfo::customField12IsSet() const
{
    return customField12IsSet_;
}

void UpdateTestCaseListInfo::unsetcustomField12()
{
    customField12IsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCustomField13() const
{
    return customField13_;
}

void UpdateTestCaseListInfo::setCustomField13(const std::string& value)
{
    customField13_ = value;
    customField13IsSet_ = true;
}

bool UpdateTestCaseListInfo::customField13IsSet() const
{
    return customField13IsSet_;
}

void UpdateTestCaseListInfo::unsetcustomField13()
{
    customField13IsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCustomField14() const
{
    return customField14_;
}

void UpdateTestCaseListInfo::setCustomField14(const std::string& value)
{
    customField14_ = value;
    customField14IsSet_ = true;
}

bool UpdateTestCaseListInfo::customField14IsSet() const
{
    return customField14IsSet_;
}

void UpdateTestCaseListInfo::unsetcustomField14()
{
    customField14IsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCustomField15() const
{
    return customField15_;
}

void UpdateTestCaseListInfo::setCustomField15(const std::string& value)
{
    customField15_ = value;
    customField15IsSet_ = true;
}

bool UpdateTestCaseListInfo::customField15IsSet() const
{
    return customField15IsSet_;
}

void UpdateTestCaseListInfo::unsetcustomField15()
{
    customField15IsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCustomField16() const
{
    return customField16_;
}

void UpdateTestCaseListInfo::setCustomField16(const std::string& value)
{
    customField16_ = value;
    customField16IsSet_ = true;
}

bool UpdateTestCaseListInfo::customField16IsSet() const
{
    return customField16IsSet_;
}

void UpdateTestCaseListInfo::unsetcustomField16()
{
    customField16IsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCustomField17() const
{
    return customField17_;
}

void UpdateTestCaseListInfo::setCustomField17(const std::string& value)
{
    customField17_ = value;
    customField17IsSet_ = true;
}

bool UpdateTestCaseListInfo::customField17IsSet() const
{
    return customField17IsSet_;
}

void UpdateTestCaseListInfo::unsetcustomField17()
{
    customField17IsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCustomField18() const
{
    return customField18_;
}

void UpdateTestCaseListInfo::setCustomField18(const std::string& value)
{
    customField18_ = value;
    customField18IsSet_ = true;
}

bool UpdateTestCaseListInfo::customField18IsSet() const
{
    return customField18IsSet_;
}

void UpdateTestCaseListInfo::unsetcustomField18()
{
    customField18IsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCustomField19() const
{
    return customField19_;
}

void UpdateTestCaseListInfo::setCustomField19(const std::string& value)
{
    customField19_ = value;
    customField19IsSet_ = true;
}

bool UpdateTestCaseListInfo::customField19IsSet() const
{
    return customField19IsSet_;
}

void UpdateTestCaseListInfo::unsetcustomField19()
{
    customField19IsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCustomField20() const
{
    return customField20_;
}

void UpdateTestCaseListInfo::setCustomField20(const std::string& value)
{
    customField20_ = value;
    customField20IsSet_ = true;
}

bool UpdateTestCaseListInfo::customField20IsSet() const
{
    return customField20IsSet_;
}

void UpdateTestCaseListInfo::unsetcustomField20()
{
    customField20IsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCustomField21() const
{
    return customField21_;
}

void UpdateTestCaseListInfo::setCustomField21(const std::string& value)
{
    customField21_ = value;
    customField21IsSet_ = true;
}

bool UpdateTestCaseListInfo::customField21IsSet() const
{
    return customField21IsSet_;
}

void UpdateTestCaseListInfo::unsetcustomField21()
{
    customField21IsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCustomField22() const
{
    return customField22_;
}

void UpdateTestCaseListInfo::setCustomField22(const std::string& value)
{
    customField22_ = value;
    customField22IsSet_ = true;
}

bool UpdateTestCaseListInfo::customField22IsSet() const
{
    return customField22IsSet_;
}

void UpdateTestCaseListInfo::unsetcustomField22()
{
    customField22IsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCustomField23() const
{
    return customField23_;
}

void UpdateTestCaseListInfo::setCustomField23(const std::string& value)
{
    customField23_ = value;
    customField23IsSet_ = true;
}

bool UpdateTestCaseListInfo::customField23IsSet() const
{
    return customField23IsSet_;
}

void UpdateTestCaseListInfo::unsetcustomField23()
{
    customField23IsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCustomField24() const
{
    return customField24_;
}

void UpdateTestCaseListInfo::setCustomField24(const std::string& value)
{
    customField24_ = value;
    customField24IsSet_ = true;
}

bool UpdateTestCaseListInfo::customField24IsSet() const
{
    return customField24IsSet_;
}

void UpdateTestCaseListInfo::unsetcustomField24()
{
    customField24IsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCustomField25() const
{
    return customField25_;
}

void UpdateTestCaseListInfo::setCustomField25(const std::string& value)
{
    customField25_ = value;
    customField25IsSet_ = true;
}

bool UpdateTestCaseListInfo::customField25IsSet() const
{
    return customField25IsSet_;
}

void UpdateTestCaseListInfo::unsetcustomField25()
{
    customField25IsSet_ = false;
}

utility::datetime UpdateTestCaseListInfo::getBeAutoTypeTime() const
{
    return beAutoTypeTime_;
}

void UpdateTestCaseListInfo::setBeAutoTypeTime(const utility::datetime& value)
{
    beAutoTypeTime_ = value;
    beAutoTypeTimeIsSet_ = true;
}

bool UpdateTestCaseListInfo::beAutoTypeTimeIsSet() const
{
    return beAutoTypeTimeIsSet_;
}

void UpdateTestCaseListInfo::unsetbeAutoTypeTime()
{
    beAutoTypeTimeIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCompareNumber() const
{
    return compareNumber_;
}

void UpdateTestCaseListInfo::setCompareNumber(const std::string& value)
{
    compareNumber_ = value;
    compareNumberIsSet_ = true;
}

bool UpdateTestCaseListInfo::compareNumberIsSet() const
{
    return compareNumberIsSet_;
}

void UpdateTestCaseListInfo::unsetcompareNumber()
{
    compareNumberIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getSceneFlag() const
{
    return sceneFlag_;
}

void UpdateTestCaseListInfo::setSceneFlag(const std::string& value)
{
    sceneFlag_ = value;
    sceneFlagIsSet_ = true;
}

bool UpdateTestCaseListInfo::sceneFlagIsSet() const
{
    return sceneFlagIsSet_;
}

void UpdateTestCaseListInfo::unsetsceneFlag()
{
    sceneFlagIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getBaseFlag() const
{
    return baseFlag_;
}

void UpdateTestCaseListInfo::setBaseFlag(const std::string& value)
{
    baseFlag_ = value;
    baseFlagIsSet_ = true;
}

bool UpdateTestCaseListInfo::baseFlagIsSet() const
{
    return baseFlagIsSet_;
}

void UpdateTestCaseListInfo::unsetbaseFlag()
{
    baseFlagIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getParaValidator() const
{
    return paraValidator_;
}

void UpdateTestCaseListInfo::setParaValidator(const std::string& value)
{
    paraValidator_ = value;
    paraValidatorIsSet_ = true;
}

bool UpdateTestCaseListInfo::paraValidatorIsSet() const
{
    return paraValidatorIsSet_;
}

void UpdateTestCaseListInfo::unsetparaValidator()
{
    paraValidatorIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getKnetNodeId() const
{
    return knetNodeId_;
}

void UpdateTestCaseListInfo::setKnetNodeId(const std::string& value)
{
    knetNodeId_ = value;
    knetNodeIdIsSet_ = true;
}

bool UpdateTestCaseListInfo::knetNodeIdIsSet() const
{
    return knetNodeIdIsSet_;
}

void UpdateTestCaseListInfo::unsetknetNodeId()
{
    knetNodeIdIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getLastExeAuthor() const
{
    return lastExeAuthor_;
}

void UpdateTestCaseListInfo::setLastExeAuthor(const std::string& value)
{
    lastExeAuthor_ = value;
    lastExeAuthorIsSet_ = true;
}

bool UpdateTestCaseListInfo::lastExeAuthorIsSet() const
{
    return lastExeAuthorIsSet_;
}

void UpdateTestCaseListInfo::unsetlastExeAuthor()
{
    lastExeAuthorIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCloudCarrier() const
{
    return cloudCarrier_;
}

void UpdateTestCaseListInfo::setCloudCarrier(const std::string& value)
{
    cloudCarrier_ = value;
    cloudCarrierIsSet_ = true;
}

bool UpdateTestCaseListInfo::cloudCarrierIsSet() const
{
    return cloudCarrierIsSet_;
}

void UpdateTestCaseListInfo::unsetcloudCarrier()
{
    cloudCarrierIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getMarketPlace() const
{
    return marketPlace_;
}

void UpdateTestCaseListInfo::setMarketPlace(const std::string& value)
{
    marketPlace_ = value;
    marketPlaceIsSet_ = true;
}

bool UpdateTestCaseListInfo::marketPlaceIsSet() const
{
    return marketPlaceIsSet_;
}

void UpdateTestCaseListInfo::unsetmarketPlace()
{
    marketPlaceIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getTestMindId() const
{
    return testMindId_;
}

void UpdateTestCaseListInfo::setTestMindId(const std::string& value)
{
    testMindId_ = value;
    testMindIdIsSet_ = true;
}

bool UpdateTestCaseListInfo::testMindIdIsSet() const
{
    return testMindIdIsSet_;
}

void UpdateTestCaseListInfo::unsettestMindId()
{
    testMindIdIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getTestMindUrl() const
{
    return testMindUrl_;
}

void UpdateTestCaseListInfo::setTestMindUrl(const std::string& value)
{
    testMindUrl_ = value;
    testMindUrlIsSet_ = true;
}

bool UpdateTestCaseListInfo::testMindUrlIsSet() const
{
    return testMindUrlIsSet_;
}

void UpdateTestCaseListInfo::unsettestMindUrl()
{
    testMindUrlIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getCommitUrl() const
{
    return commitUrl_;
}

void UpdateTestCaseListInfo::setCommitUrl(const std::string& value)
{
    commitUrl_ = value;
    commitUrlIsSet_ = true;
}

bool UpdateTestCaseListInfo::commitUrlIsSet() const
{
    return commitUrlIsSet_;
}

void UpdateTestCaseListInfo::unsetcommitUrl()
{
    commitUrlIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getTestPatternNumber() const
{
    return testPatternNumber_;
}

void UpdateTestCaseListInfo::setTestPatternNumber(const std::string& value)
{
    testPatternNumber_ = value;
    testPatternNumberIsSet_ = true;
}

bool UpdateTestCaseListInfo::testPatternNumberIsSet() const
{
    return testPatternNumberIsSet_;
}

void UpdateTestCaseListInfo::unsettestPatternNumber()
{
    testPatternNumberIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getTestFactorNumber() const
{
    return testFactorNumber_;
}

void UpdateTestCaseListInfo::setTestFactorNumber(const std::string& value)
{
    testFactorNumber_ = value;
    testFactorNumberIsSet_ = true;
}

bool UpdateTestCaseListInfo::testFactorNumberIsSet() const
{
    return testFactorNumberIsSet_;
}

void UpdateTestCaseListInfo::unsettestFactorNumber()
{
    testFactorNumberIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getStatusCode() const
{
    return statusCode_;
}

void UpdateTestCaseListInfo::setStatusCode(const std::string& value)
{
    statusCode_ = value;
    statusCodeIsSet_ = true;
}

bool UpdateTestCaseListInfo::statusCodeIsSet() const
{
    return statusCodeIsSet_;
}

void UpdateTestCaseListInfo::unsetstatusCode()
{
    statusCodeIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getResultCode() const
{
    return resultCode_;
}

void UpdateTestCaseListInfo::setResultCode(const std::string& value)
{
    resultCode_ = value;
    resultCodeIsSet_ = true;
}

bool UpdateTestCaseListInfo::resultCodeIsSet() const
{
    return resultCodeIsSet_;
}

void UpdateTestCaseListInfo::unsetresultCode()
{
    resultCodeIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getReleaseId() const
{
    return releaseId_;
}

void UpdateTestCaseListInfo::setReleaseId(const std::string& value)
{
    releaseId_ = value;
    releaseIdIsSet_ = true;
}

bool UpdateTestCaseListInfo::releaseIdIsSet() const
{
    return releaseIdIsSet_;
}

void UpdateTestCaseListInfo::unsetreleaseId()
{
    releaseIdIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getLabelId() const
{
    return labelId_;
}

void UpdateTestCaseListInfo::setLabelId(const std::string& value)
{
    labelId_ = value;
    labelIdIsSet_ = true;
}

bool UpdateTestCaseListInfo::labelIdIsSet() const
{
    return labelIdIsSet_;
}

void UpdateTestCaseListInfo::unsetlabelId()
{
    labelIdIsSet_ = false;
}

std::vector<std::string>& UpdateTestCaseListInfo::getLabelNames()
{
    return labelNames_;
}

void UpdateTestCaseListInfo::setLabelNames(const std::vector<std::string>& value)
{
    labelNames_ = value;
    labelNamesIsSet_ = true;
}

bool UpdateTestCaseListInfo::labelNamesIsSet() const
{
    return labelNamesIsSet_;
}

void UpdateTestCaseListInfo::unsetlabelNames()
{
    labelNamesIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getModuleId() const
{
    return moduleId_;
}

void UpdateTestCaseListInfo::setModuleId(const std::string& value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool UpdateTestCaseListInfo::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void UpdateTestCaseListInfo::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

utility::datetime UpdateTestCaseListInfo::getExecuteLatestTime() const
{
    return executeLatestTime_;
}

void UpdateTestCaseListInfo::setExecuteLatestTime(const utility::datetime& value)
{
    executeLatestTime_ = value;
    executeLatestTimeIsSet_ = true;
}

bool UpdateTestCaseListInfo::executeLatestTimeIsSet() const
{
    return executeLatestTimeIsSet_;
}

void UpdateTestCaseListInfo::unsetexecuteLatestTime()
{
    executeLatestTimeIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getExecuteDuration() const
{
    return executeDuration_;
}

void UpdateTestCaseListInfo::setExecuteDuration(const std::string& value)
{
    executeDuration_ = value;
    executeDurationIsSet_ = true;
}

bool UpdateTestCaseListInfo::executeDurationIsSet() const
{
    return executeDurationIsSet_;
}

void UpdateTestCaseListInfo::unsetexecuteDuration()
{
    executeDurationIsSet_ = false;
}

int32_t UpdateTestCaseListInfo::getIsKeyword() const
{
    return isKeyword_;
}

void UpdateTestCaseListInfo::setIsKeyword(int32_t value)
{
    isKeyword_ = value;
    isKeywordIsSet_ = true;
}

bool UpdateTestCaseListInfo::isKeywordIsSet() const
{
    return isKeywordIsSet_;
}

void UpdateTestCaseListInfo::unsetisKeyword()
{
    isKeywordIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getReleaseDev() const
{
    return releaseDev_;
}

void UpdateTestCaseListInfo::setReleaseDev(const std::string& value)
{
    releaseDev_ = value;
    releaseDevIsSet_ = true;
}

bool UpdateTestCaseListInfo::releaseDevIsSet() const
{
    return releaseDevIsSet_;
}

void UpdateTestCaseListInfo::unsetreleaseDev()
{
    releaseDevIsSet_ = false;
}

int32_t UpdateTestCaseListInfo::getNewCreated() const
{
    return newCreated_;
}

void UpdateTestCaseListInfo::setNewCreated(int32_t value)
{
    newCreated_ = value;
    newCreatedIsSet_ = true;
}

bool UpdateTestCaseListInfo::newCreatedIsSet() const
{
    return newCreatedIsSet_;
}

void UpdateTestCaseListInfo::unsetnewCreated()
{
    newCreatedIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getExecuteParameter() const
{
    return executeParameter_;
}

void UpdateTestCaseListInfo::setExecuteParameter(const std::string& value)
{
    executeParameter_ = value;
    executeParameterIsSet_ = true;
}

bool UpdateTestCaseListInfo::executeParameterIsSet() const
{
    return executeParameterIsSet_;
}

void UpdateTestCaseListInfo::unsetexecuteParameter()
{
    executeParameterIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getProjectUuid() const
{
    return projectUuid_;
}

void UpdateTestCaseListInfo::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool UpdateTestCaseListInfo::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void UpdateTestCaseListInfo::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string UpdateTestCaseListInfo::getVersionUri() const
{
    return versionUri_;
}

void UpdateTestCaseListInfo::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool UpdateTestCaseListInfo::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void UpdateTestCaseListInfo::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::vector<CaseInfo>& UpdateTestCaseListInfo::getCaseList()
{
    return caseList_;
}

void UpdateTestCaseListInfo::setCaseList(const std::vector<CaseInfo>& value)
{
    caseList_ = value;
    caseListIsSet_ = true;
}

bool UpdateTestCaseListInfo::caseListIsSet() const
{
    return caseListIsSet_;
}

void UpdateTestCaseListInfo::unsetcaseList()
{
    caseListIsSet_ = false;
}

std::vector<std::string>& UpdateTestCaseListInfo::getCaseIdList()
{
    return caseIdList_;
}

void UpdateTestCaseListInfo::setCaseIdList(const std::vector<std::string>& value)
{
    caseIdList_ = value;
    caseIdListIsSet_ = true;
}

bool UpdateTestCaseListInfo::caseIdListIsSet() const
{
    return caseIdListIsSet_;
}

void UpdateTestCaseListInfo::unsetcaseIdList()
{
    caseIdListIsSet_ = false;
}

}
}
}
}
}


