

#include "huaweicloud/cloudtest/v1/model/AwInstanceRes.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AwInstanceRes::AwInstanceRes()
{
    aliasRunaw_ = "";
    aliasRunawIsSet_ = false;
    authenticationInfoIsSet_ = false;
    authenticationType_ = "";
    authenticationTypeIsSet_ = false;
    awDescription_ = "";
    awDescriptionIsSet_ = false;
    awId_ = "";
    awIdIsSet_ = false;
    awType_ = 0;
    awTypeIsSet_ = false;
    basicAwIsSet_ = false;
    bodyParamType_ = "";
    bodyParamTypeIsSet_ = false;
    byOrder_ = 0;
    byOrderIsSet_ = false;
    changeSign_ = 0;
    changeSignIsSet_ = false;
    checkPointListIsSet_ = false;
    childrenIsSet_ = false;
    conditionStatement_ = "";
    conditionStatementIsSet_ = false;
    conditionType_ = 0;
    conditionTypeIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    createTimeStamp_ = 0L;
    createTimeStampIsSet_ = false;
    createTimeString_ = "";
    createTimeStringIsSet_ = false;
    createUser_ = "";
    createUserIsSet_ = false;
    customHeaderIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    errorInfoIsSet_ = false;
    extraInfoIsSet_ = false;
    fromOutside_ = 0;
    fromOutsideIsSet_ = false;
    hasLevel_ = 0;
    hasLevelIsSet_ = false;
    headerArrayIsSet_ = false;
    hisScript_ = "";
    hisScriptIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    isBasic_ = 0;
    isBasicIsSet_ = false;
    isContractAw_ = 0;
    isContractAwIsSet_ = false;
    isDisabled_ = 0;
    isDisabledIsSet_ = false;
    isSectestAw_ = 0;
    isSectestAwIsSet_ = false;
    level_ = 0;
    levelIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    paramDependent_ = "";
    paramDependentIsSet_ = false;
    paramDependentEnabled_ = 0;
    paramDependentEnabledIsSet_ = false;
    paramTypeAndValueIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    relation_ = "";
    relationIsSet_ = false;
    relationId_ = "";
    relationIdIsSet_ = false;
    relationType_ = 0;
    relationTypeIsSet_ = false;
    retryInterval_ = "";
    retryIntervalIsSet_ = false;
    retryTimes_ = "";
    retryTimesIsSet_ = false;
    scriptName_ = "";
    scriptNameIsSet_ = false;
    serviceAndStage_ = "";
    serviceAndStageIsSet_ = false;
    specialType_ = 0;
    specialTypeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    updateTimeStamp_ = 0L;
    updateTimeStampIsSet_ = false;
    updateTimeString_ = "";
    updateTimeStringIsSet_ = false;
    updateUser_ = "";
    updateUserIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    variableListIsSet_ = false;
}

AwInstanceRes::~AwInstanceRes() = default;

void AwInstanceRes::validate()
{
}

web::json::value AwInstanceRes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(aliasRunawIsSet_) {
        val[utility::conversions::to_string_t("alias_runaw")] = ModelBase::toJson(aliasRunaw_);
    }
    if(authenticationInfoIsSet_) {
        val[utility::conversions::to_string_t("authentication_info")] = ModelBase::toJson(authenticationInfo_);
    }
    if(authenticationTypeIsSet_) {
        val[utility::conversions::to_string_t("authentication_type")] = ModelBase::toJson(authenticationType_);
    }
    if(awDescriptionIsSet_) {
        val[utility::conversions::to_string_t("aw_description")] = ModelBase::toJson(awDescription_);
    }
    if(awIdIsSet_) {
        val[utility::conversions::to_string_t("aw_id")] = ModelBase::toJson(awId_);
    }
    if(awTypeIsSet_) {
        val[utility::conversions::to_string_t("aw_type")] = ModelBase::toJson(awType_);
    }
    if(basicAwIsSet_) {
        val[utility::conversions::to_string_t("basic_aw")] = ModelBase::toJson(basicAw_);
    }
    if(bodyParamTypeIsSet_) {
        val[utility::conversions::to_string_t("body_param_type")] = ModelBase::toJson(bodyParamType_);
    }
    if(byOrderIsSet_) {
        val[utility::conversions::to_string_t("by_order")] = ModelBase::toJson(byOrder_);
    }
    if(changeSignIsSet_) {
        val[utility::conversions::to_string_t("changeSign")] = ModelBase::toJson(changeSign_);
    }
    if(checkPointListIsSet_) {
        val[utility::conversions::to_string_t("check_point_list")] = ModelBase::toJson(checkPointList_);
    }
    if(childrenIsSet_) {
        val[utility::conversions::to_string_t("children")] = ModelBase::toJson(*children_);
    }
    if(conditionStatementIsSet_) {
        val[utility::conversions::to_string_t("condition_statement")] = ModelBase::toJson(conditionStatement_);
    }
    if(conditionTypeIsSet_) {
        val[utility::conversions::to_string_t("condition_type")] = ModelBase::toJson(conditionType_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(createTimeStampIsSet_) {
        val[utility::conversions::to_string_t("create_time_stamp")] = ModelBase::toJson(createTimeStamp_);
    }
    if(createTimeStringIsSet_) {
        val[utility::conversions::to_string_t("create_time_string")] = ModelBase::toJson(createTimeString_);
    }
    if(createUserIsSet_) {
        val[utility::conversions::to_string_t("create_user")] = ModelBase::toJson(createUser_);
    }
    if(customHeaderIsSet_) {
        val[utility::conversions::to_string_t("custom_header")] = ModelBase::toJson(customHeader_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(errorInfoIsSet_) {
        val[utility::conversions::to_string_t("error_info")] = ModelBase::toJson(errorInfo_);
    }
    if(extraInfoIsSet_) {
        val[utility::conversions::to_string_t("extra_info")] = ModelBase::toJson(extraInfo_);
    }
    if(fromOutsideIsSet_) {
        val[utility::conversions::to_string_t("from_outside")] = ModelBase::toJson(fromOutside_);
    }
    if(hasLevelIsSet_) {
        val[utility::conversions::to_string_t("hasLevel")] = ModelBase::toJson(hasLevel_);
    }
    if(headerArrayIsSet_) {
        val[utility::conversions::to_string_t("header_array")] = ModelBase::toJson(headerArray_);
    }
    if(hisScriptIsSet_) {
        val[utility::conversions::to_string_t("his_script")] = ModelBase::toJson(hisScript_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(isBasicIsSet_) {
        val[utility::conversions::to_string_t("is_basic")] = ModelBase::toJson(isBasic_);
    }
    if(isContractAwIsSet_) {
        val[utility::conversions::to_string_t("is_contract_aw")] = ModelBase::toJson(isContractAw_);
    }
    if(isDisabledIsSet_) {
        val[utility::conversions::to_string_t("is_disabled")] = ModelBase::toJson(isDisabled_);
    }
    if(isSectestAwIsSet_) {
        val[utility::conversions::to_string_t("is_sectest_aw")] = ModelBase::toJson(isSectestAw_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(paramDependentIsSet_) {
        val[utility::conversions::to_string_t("param_dependent")] = ModelBase::toJson(paramDependent_);
    }
    if(paramDependentEnabledIsSet_) {
        val[utility::conversions::to_string_t("param_dependent_enabled")] = ModelBase::toJson(paramDependentEnabled_);
    }
    if(paramTypeAndValueIsSet_) {
        val[utility::conversions::to_string_t("param_type_and_value")] = ModelBase::toJson(paramTypeAndValue_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("projectId")] = ModelBase::toJson(projectId_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(relationIsSet_) {
        val[utility::conversions::to_string_t("relation")] = ModelBase::toJson(relation_);
    }
    if(relationIdIsSet_) {
        val[utility::conversions::to_string_t("relation_id")] = ModelBase::toJson(relationId_);
    }
    if(relationTypeIsSet_) {
        val[utility::conversions::to_string_t("relation_type")] = ModelBase::toJson(relationType_);
    }
    if(retryIntervalIsSet_) {
        val[utility::conversions::to_string_t("retry_interval")] = ModelBase::toJson(retryInterval_);
    }
    if(retryTimesIsSet_) {
        val[utility::conversions::to_string_t("retry_times")] = ModelBase::toJson(retryTimes_);
    }
    if(scriptNameIsSet_) {
        val[utility::conversions::to_string_t("scriptName")] = ModelBase::toJson(scriptName_);
    }
    if(serviceAndStageIsSet_) {
        val[utility::conversions::to_string_t("service_and_stage")] = ModelBase::toJson(serviceAndStage_);
    }
    if(specialTypeIsSet_) {
        val[utility::conversions::to_string_t("special_type")] = ModelBase::toJson(specialType_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(updateTimeStampIsSet_) {
        val[utility::conversions::to_string_t("update_time_stamp")] = ModelBase::toJson(updateTimeStamp_);
    }
    if(updateTimeStringIsSet_) {
        val[utility::conversions::to_string_t("update_time_string")] = ModelBase::toJson(updateTimeString_);
    }
    if(updateUserIsSet_) {
        val[utility::conversions::to_string_t("update_user")] = ModelBase::toJson(updateUser_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(variableListIsSet_) {
        val[utility::conversions::to_string_t("variable_list")] = ModelBase::toJson(variableList_);
    }

    return val;
}
bool AwInstanceRes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alias_runaw"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias_runaw"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAliasRunaw(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("authentication_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authentication_info"));
        if(!fieldValue.is_null())
        {
            AuthInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthenticationInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("authentication_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authentication_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthenticationType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("aw_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("aw_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAwDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("aw_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("aw_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAwId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("aw_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("aw_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAwType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("basic_aw"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("basic_aw"));
        if(!fieldValue.is_null())
        {
            BasicAwRes refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBasicAw(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body_param_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body_param_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBodyParamType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("by_order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("by_order"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setByOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("changeSign"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("changeSign"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChangeSign(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("check_point_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_point_list"));
        if(!fieldValue.is_null())
        {
            std::vector<CheckPoint> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckPointList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("children"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("children"));
        if(!fieldValue.is_null())
        {
            std::vector<AwInstanceRes> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildren(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("condition_statement"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("condition_statement"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConditionStatement(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("condition_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("condition_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConditionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time_stamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time_stamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTimeStamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time_string"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time_string"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTimeString(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_header"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_header"));
        if(!fieldValue.is_null())
        {
            std::vector<AwParam> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomHeader(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_info"));
        if(!fieldValue.is_null())
        {
            ErrorInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extra_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_info"));
        if(!fieldValue.is_null())
        {
            ExtraInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtraInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("from_outside"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("from_outside"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFromOutside(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hasLevel"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hasLevel"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHasLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("header_array"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("header_array"));
        if(!fieldValue.is_null())
        {
            std::vector<ArrayNode> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeaderArray(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("his_script"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("his_script"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHisScript(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_basic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_basic"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsBasic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_contract_aw"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_contract_aw"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsContractAw(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_disabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_disabled"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDisabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_sectest_aw"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_sectest_aw"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSectestAw(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("param_dependent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param_dependent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParamDependent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("param_dependent_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param_dependent_enabled"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParamDependentEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("param_type_and_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param_type_and_value"));
        if(!fieldValue.is_null())
        {
            std::vector<AwParam> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParamTypeAndValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("projectId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projectId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("relation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relation_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relation_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relation_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relation_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelationType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retry_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retry_interval"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetryInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retry_times"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retry_times"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetryTimes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scriptName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scriptName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_and_stage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_and_stage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceAndStage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("special_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("special_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecialType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time_stamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time_stamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimeStamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time_string"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time_string"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimeString(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("variable_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("variable_list"));
        if(!fieldValue.is_null())
        {
            std::vector<AwVariable> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVariableList(refVal);
        }
    }
    return ok;
}


std::string AwInstanceRes::getAliasRunaw() const
{
    return aliasRunaw_;
}

void AwInstanceRes::setAliasRunaw(const std::string& value)
{
    aliasRunaw_ = value;
    aliasRunawIsSet_ = true;
}

bool AwInstanceRes::aliasRunawIsSet() const
{
    return aliasRunawIsSet_;
}

void AwInstanceRes::unsetaliasRunaw()
{
    aliasRunawIsSet_ = false;
}

AuthInfo AwInstanceRes::getAuthenticationInfo() const
{
    return authenticationInfo_;
}

void AwInstanceRes::setAuthenticationInfo(const AuthInfo& value)
{
    authenticationInfo_ = value;
    authenticationInfoIsSet_ = true;
}

bool AwInstanceRes::authenticationInfoIsSet() const
{
    return authenticationInfoIsSet_;
}

void AwInstanceRes::unsetauthenticationInfo()
{
    authenticationInfoIsSet_ = false;
}

std::string AwInstanceRes::getAuthenticationType() const
{
    return authenticationType_;
}

void AwInstanceRes::setAuthenticationType(const std::string& value)
{
    authenticationType_ = value;
    authenticationTypeIsSet_ = true;
}

bool AwInstanceRes::authenticationTypeIsSet() const
{
    return authenticationTypeIsSet_;
}

void AwInstanceRes::unsetauthenticationType()
{
    authenticationTypeIsSet_ = false;
}

std::string AwInstanceRes::getAwDescription() const
{
    return awDescription_;
}

void AwInstanceRes::setAwDescription(const std::string& value)
{
    awDescription_ = value;
    awDescriptionIsSet_ = true;
}

bool AwInstanceRes::awDescriptionIsSet() const
{
    return awDescriptionIsSet_;
}

void AwInstanceRes::unsetawDescription()
{
    awDescriptionIsSet_ = false;
}

std::string AwInstanceRes::getAwId() const
{
    return awId_;
}

void AwInstanceRes::setAwId(const std::string& value)
{
    awId_ = value;
    awIdIsSet_ = true;
}

bool AwInstanceRes::awIdIsSet() const
{
    return awIdIsSet_;
}

void AwInstanceRes::unsetawId()
{
    awIdIsSet_ = false;
}

int32_t AwInstanceRes::getAwType() const
{
    return awType_;
}

void AwInstanceRes::setAwType(int32_t value)
{
    awType_ = value;
    awTypeIsSet_ = true;
}

bool AwInstanceRes::awTypeIsSet() const
{
    return awTypeIsSet_;
}

void AwInstanceRes::unsetawType()
{
    awTypeIsSet_ = false;
}

BasicAwRes AwInstanceRes::getBasicAw() const
{
    return basicAw_;
}

void AwInstanceRes::setBasicAw(const BasicAwRes& value)
{
    basicAw_ = value;
    basicAwIsSet_ = true;
}

bool AwInstanceRes::basicAwIsSet() const
{
    return basicAwIsSet_;
}

void AwInstanceRes::unsetbasicAw()
{
    basicAwIsSet_ = false;
}

std::string AwInstanceRes::getBodyParamType() const
{
    return bodyParamType_;
}

void AwInstanceRes::setBodyParamType(const std::string& value)
{
    bodyParamType_ = value;
    bodyParamTypeIsSet_ = true;
}

bool AwInstanceRes::bodyParamTypeIsSet() const
{
    return bodyParamTypeIsSet_;
}

void AwInstanceRes::unsetbodyParamType()
{
    bodyParamTypeIsSet_ = false;
}

int32_t AwInstanceRes::getByOrder() const
{
    return byOrder_;
}

void AwInstanceRes::setByOrder(int32_t value)
{
    byOrder_ = value;
    byOrderIsSet_ = true;
}

bool AwInstanceRes::byOrderIsSet() const
{
    return byOrderIsSet_;
}

void AwInstanceRes::unsetbyOrder()
{
    byOrderIsSet_ = false;
}

int32_t AwInstanceRes::getChangeSign() const
{
    return changeSign_;
}

void AwInstanceRes::setChangeSign(int32_t value)
{
    changeSign_ = value;
    changeSignIsSet_ = true;
}

bool AwInstanceRes::changeSignIsSet() const
{
    return changeSignIsSet_;
}

void AwInstanceRes::unsetchangeSign()
{
    changeSignIsSet_ = false;
}

std::vector<CheckPoint>& AwInstanceRes::getCheckPointList()
{
    return checkPointList_;
}

void AwInstanceRes::setCheckPointList(const std::vector<CheckPoint>& value)
{
    checkPointList_ = value;
    checkPointListIsSet_ = true;
}

bool AwInstanceRes::checkPointListIsSet() const
{
    return checkPointListIsSet_;
}

void AwInstanceRes::unsetcheckPointList()
{
    checkPointListIsSet_ = false;
}

std::vector<AwInstanceRes>& AwInstanceRes::getChildren()
{
    return *children_;
}

void AwInstanceRes::setChildren(const std::vector<AwInstanceRes>& value)
{
    *children_ = value;
    childrenIsSet_ = true;
}

bool AwInstanceRes::childrenIsSet() const
{
    return childrenIsSet_;
}

void AwInstanceRes::unsetchildren()
{
    childrenIsSet_ = false;
}

std::string AwInstanceRes::getConditionStatement() const
{
    return conditionStatement_;
}

void AwInstanceRes::setConditionStatement(const std::string& value)
{
    conditionStatement_ = value;
    conditionStatementIsSet_ = true;
}

bool AwInstanceRes::conditionStatementIsSet() const
{
    return conditionStatementIsSet_;
}

void AwInstanceRes::unsetconditionStatement()
{
    conditionStatementIsSet_ = false;
}

int32_t AwInstanceRes::getConditionType() const
{
    return conditionType_;
}

void AwInstanceRes::setConditionType(int32_t value)
{
    conditionType_ = value;
    conditionTypeIsSet_ = true;
}

bool AwInstanceRes::conditionTypeIsSet() const
{
    return conditionTypeIsSet_;
}

void AwInstanceRes::unsetconditionType()
{
    conditionTypeIsSet_ = false;
}

std::string AwInstanceRes::getCreateTime() const
{
    return createTime_;
}

void AwInstanceRes::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AwInstanceRes::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AwInstanceRes::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t AwInstanceRes::getCreateTimeStamp() const
{
    return createTimeStamp_;
}

void AwInstanceRes::setCreateTimeStamp(int64_t value)
{
    createTimeStamp_ = value;
    createTimeStampIsSet_ = true;
}

bool AwInstanceRes::createTimeStampIsSet() const
{
    return createTimeStampIsSet_;
}

void AwInstanceRes::unsetcreateTimeStamp()
{
    createTimeStampIsSet_ = false;
}

std::string AwInstanceRes::getCreateTimeString() const
{
    return createTimeString_;
}

void AwInstanceRes::setCreateTimeString(const std::string& value)
{
    createTimeString_ = value;
    createTimeStringIsSet_ = true;
}

bool AwInstanceRes::createTimeStringIsSet() const
{
    return createTimeStringIsSet_;
}

void AwInstanceRes::unsetcreateTimeString()
{
    createTimeStringIsSet_ = false;
}

std::string AwInstanceRes::getCreateUser() const
{
    return createUser_;
}

void AwInstanceRes::setCreateUser(const std::string& value)
{
    createUser_ = value;
    createUserIsSet_ = true;
}

bool AwInstanceRes::createUserIsSet() const
{
    return createUserIsSet_;
}

void AwInstanceRes::unsetcreateUser()
{
    createUserIsSet_ = false;
}

std::vector<AwParam>& AwInstanceRes::getCustomHeader()
{
    return customHeader_;
}

void AwInstanceRes::setCustomHeader(const std::vector<AwParam>& value)
{
    customHeader_ = value;
    customHeaderIsSet_ = true;
}

bool AwInstanceRes::customHeaderIsSet() const
{
    return customHeaderIsSet_;
}

void AwInstanceRes::unsetcustomHeader()
{
    customHeaderIsSet_ = false;
}

std::string AwInstanceRes::getDescription() const
{
    return description_;
}

void AwInstanceRes::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AwInstanceRes::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AwInstanceRes::unsetdescription()
{
    descriptionIsSet_ = false;
}

ErrorInfo AwInstanceRes::getErrorInfo() const
{
    return errorInfo_;
}

void AwInstanceRes::setErrorInfo(const ErrorInfo& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool AwInstanceRes::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void AwInstanceRes::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

ExtraInfo AwInstanceRes::getExtraInfo() const
{
    return extraInfo_;
}

void AwInstanceRes::setExtraInfo(const ExtraInfo& value)
{
    extraInfo_ = value;
    extraInfoIsSet_ = true;
}

bool AwInstanceRes::extraInfoIsSet() const
{
    return extraInfoIsSet_;
}

void AwInstanceRes::unsetextraInfo()
{
    extraInfoIsSet_ = false;
}

int32_t AwInstanceRes::getFromOutside() const
{
    return fromOutside_;
}

void AwInstanceRes::setFromOutside(int32_t value)
{
    fromOutside_ = value;
    fromOutsideIsSet_ = true;
}

bool AwInstanceRes::fromOutsideIsSet() const
{
    return fromOutsideIsSet_;
}

void AwInstanceRes::unsetfromOutside()
{
    fromOutsideIsSet_ = false;
}

int32_t AwInstanceRes::getHasLevel() const
{
    return hasLevel_;
}

void AwInstanceRes::setHasLevel(int32_t value)
{
    hasLevel_ = value;
    hasLevelIsSet_ = true;
}

bool AwInstanceRes::hasLevelIsSet() const
{
    return hasLevelIsSet_;
}

void AwInstanceRes::unsethasLevel()
{
    hasLevelIsSet_ = false;
}

std::vector<ArrayNode>& AwInstanceRes::getHeaderArray()
{
    return headerArray_;
}

void AwInstanceRes::setHeaderArray(const std::vector<ArrayNode>& value)
{
    headerArray_ = value;
    headerArrayIsSet_ = true;
}

bool AwInstanceRes::headerArrayIsSet() const
{
    return headerArrayIsSet_;
}

void AwInstanceRes::unsetheaderArray()
{
    headerArrayIsSet_ = false;
}

std::string AwInstanceRes::getHisScript() const
{
    return hisScript_;
}

void AwInstanceRes::setHisScript(const std::string& value)
{
    hisScript_ = value;
    hisScriptIsSet_ = true;
}

bool AwInstanceRes::hisScriptIsSet() const
{
    return hisScriptIsSet_;
}

void AwInstanceRes::unsethisScript()
{
    hisScriptIsSet_ = false;
}

std::string AwInstanceRes::getId() const
{
    return id_;
}

void AwInstanceRes::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AwInstanceRes::idIsSet() const
{
    return idIsSet_;
}

void AwInstanceRes::unsetid()
{
    idIsSet_ = false;
}

int32_t AwInstanceRes::getIsBasic() const
{
    return isBasic_;
}

void AwInstanceRes::setIsBasic(int32_t value)
{
    isBasic_ = value;
    isBasicIsSet_ = true;
}

bool AwInstanceRes::isBasicIsSet() const
{
    return isBasicIsSet_;
}

void AwInstanceRes::unsetisBasic()
{
    isBasicIsSet_ = false;
}

int32_t AwInstanceRes::getIsContractAw() const
{
    return isContractAw_;
}

void AwInstanceRes::setIsContractAw(int32_t value)
{
    isContractAw_ = value;
    isContractAwIsSet_ = true;
}

bool AwInstanceRes::isContractAwIsSet() const
{
    return isContractAwIsSet_;
}

void AwInstanceRes::unsetisContractAw()
{
    isContractAwIsSet_ = false;
}

int32_t AwInstanceRes::getIsDisabled() const
{
    return isDisabled_;
}

void AwInstanceRes::setIsDisabled(int32_t value)
{
    isDisabled_ = value;
    isDisabledIsSet_ = true;
}

bool AwInstanceRes::isDisabledIsSet() const
{
    return isDisabledIsSet_;
}

void AwInstanceRes::unsetisDisabled()
{
    isDisabledIsSet_ = false;
}

int32_t AwInstanceRes::getIsSectestAw() const
{
    return isSectestAw_;
}

void AwInstanceRes::setIsSectestAw(int32_t value)
{
    isSectestAw_ = value;
    isSectestAwIsSet_ = true;
}

bool AwInstanceRes::isSectestAwIsSet() const
{
    return isSectestAwIsSet_;
}

void AwInstanceRes::unsetisSectestAw()
{
    isSectestAwIsSet_ = false;
}

int32_t AwInstanceRes::getLevel() const
{
    return level_;
}

void AwInstanceRes::setLevel(int32_t value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool AwInstanceRes::levelIsSet() const
{
    return levelIsSet_;
}

void AwInstanceRes::unsetlevel()
{
    levelIsSet_ = false;
}

std::string AwInstanceRes::getName() const
{
    return name_;
}

void AwInstanceRes::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AwInstanceRes::nameIsSet() const
{
    return nameIsSet_;
}

void AwInstanceRes::unsetname()
{
    nameIsSet_ = false;
}

std::string AwInstanceRes::getParamDependent() const
{
    return paramDependent_;
}

void AwInstanceRes::setParamDependent(const std::string& value)
{
    paramDependent_ = value;
    paramDependentIsSet_ = true;
}

bool AwInstanceRes::paramDependentIsSet() const
{
    return paramDependentIsSet_;
}

void AwInstanceRes::unsetparamDependent()
{
    paramDependentIsSet_ = false;
}

int32_t AwInstanceRes::getParamDependentEnabled() const
{
    return paramDependentEnabled_;
}

void AwInstanceRes::setParamDependentEnabled(int32_t value)
{
    paramDependentEnabled_ = value;
    paramDependentEnabledIsSet_ = true;
}

bool AwInstanceRes::paramDependentEnabledIsSet() const
{
    return paramDependentEnabledIsSet_;
}

void AwInstanceRes::unsetparamDependentEnabled()
{
    paramDependentEnabledIsSet_ = false;
}

std::vector<AwParam>& AwInstanceRes::getParamTypeAndValue()
{
    return paramTypeAndValue_;
}

void AwInstanceRes::setParamTypeAndValue(const std::vector<AwParam>& value)
{
    paramTypeAndValue_ = value;
    paramTypeAndValueIsSet_ = true;
}

bool AwInstanceRes::paramTypeAndValueIsSet() const
{
    return paramTypeAndValueIsSet_;
}

void AwInstanceRes::unsetparamTypeAndValue()
{
    paramTypeAndValueIsSet_ = false;
}

std::string AwInstanceRes::getProjectId() const
{
    return projectId_;
}

void AwInstanceRes::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AwInstanceRes::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AwInstanceRes::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string AwInstanceRes::getRegion() const
{
    return region_;
}

void AwInstanceRes::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool AwInstanceRes::regionIsSet() const
{
    return regionIsSet_;
}

void AwInstanceRes::unsetregion()
{
    regionIsSet_ = false;
}

std::string AwInstanceRes::getRelation() const
{
    return relation_;
}

void AwInstanceRes::setRelation(const std::string& value)
{
    relation_ = value;
    relationIsSet_ = true;
}

bool AwInstanceRes::relationIsSet() const
{
    return relationIsSet_;
}

void AwInstanceRes::unsetrelation()
{
    relationIsSet_ = false;
}

std::string AwInstanceRes::getRelationId() const
{
    return relationId_;
}

void AwInstanceRes::setRelationId(const std::string& value)
{
    relationId_ = value;
    relationIdIsSet_ = true;
}

bool AwInstanceRes::relationIdIsSet() const
{
    return relationIdIsSet_;
}

void AwInstanceRes::unsetrelationId()
{
    relationIdIsSet_ = false;
}

int32_t AwInstanceRes::getRelationType() const
{
    return relationType_;
}

void AwInstanceRes::setRelationType(int32_t value)
{
    relationType_ = value;
    relationTypeIsSet_ = true;
}

bool AwInstanceRes::relationTypeIsSet() const
{
    return relationTypeIsSet_;
}

void AwInstanceRes::unsetrelationType()
{
    relationTypeIsSet_ = false;
}

std::string AwInstanceRes::getRetryInterval() const
{
    return retryInterval_;
}

void AwInstanceRes::setRetryInterval(const std::string& value)
{
    retryInterval_ = value;
    retryIntervalIsSet_ = true;
}

bool AwInstanceRes::retryIntervalIsSet() const
{
    return retryIntervalIsSet_;
}

void AwInstanceRes::unsetretryInterval()
{
    retryIntervalIsSet_ = false;
}

std::string AwInstanceRes::getRetryTimes() const
{
    return retryTimes_;
}

void AwInstanceRes::setRetryTimes(const std::string& value)
{
    retryTimes_ = value;
    retryTimesIsSet_ = true;
}

bool AwInstanceRes::retryTimesIsSet() const
{
    return retryTimesIsSet_;
}

void AwInstanceRes::unsetretryTimes()
{
    retryTimesIsSet_ = false;
}

std::string AwInstanceRes::getScriptName() const
{
    return scriptName_;
}

void AwInstanceRes::setScriptName(const std::string& value)
{
    scriptName_ = value;
    scriptNameIsSet_ = true;
}

bool AwInstanceRes::scriptNameIsSet() const
{
    return scriptNameIsSet_;
}

void AwInstanceRes::unsetscriptName()
{
    scriptNameIsSet_ = false;
}

std::string AwInstanceRes::getServiceAndStage() const
{
    return serviceAndStage_;
}

void AwInstanceRes::setServiceAndStage(const std::string& value)
{
    serviceAndStage_ = value;
    serviceAndStageIsSet_ = true;
}

bool AwInstanceRes::serviceAndStageIsSet() const
{
    return serviceAndStageIsSet_;
}

void AwInstanceRes::unsetserviceAndStage()
{
    serviceAndStageIsSet_ = false;
}

int32_t AwInstanceRes::getSpecialType() const
{
    return specialType_;
}

void AwInstanceRes::setSpecialType(int32_t value)
{
    specialType_ = value;
    specialTypeIsSet_ = true;
}

bool AwInstanceRes::specialTypeIsSet() const
{
    return specialTypeIsSet_;
}

void AwInstanceRes::unsetspecialType()
{
    specialTypeIsSet_ = false;
}

std::string AwInstanceRes::getUpdateTime() const
{
    return updateTime_;
}

void AwInstanceRes::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool AwInstanceRes::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void AwInstanceRes::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

int64_t AwInstanceRes::getUpdateTimeStamp() const
{
    return updateTimeStamp_;
}

void AwInstanceRes::setUpdateTimeStamp(int64_t value)
{
    updateTimeStamp_ = value;
    updateTimeStampIsSet_ = true;
}

bool AwInstanceRes::updateTimeStampIsSet() const
{
    return updateTimeStampIsSet_;
}

void AwInstanceRes::unsetupdateTimeStamp()
{
    updateTimeStampIsSet_ = false;
}

std::string AwInstanceRes::getUpdateTimeString() const
{
    return updateTimeString_;
}

void AwInstanceRes::setUpdateTimeString(const std::string& value)
{
    updateTimeString_ = value;
    updateTimeStringIsSet_ = true;
}

bool AwInstanceRes::updateTimeStringIsSet() const
{
    return updateTimeStringIsSet_;
}

void AwInstanceRes::unsetupdateTimeString()
{
    updateTimeStringIsSet_ = false;
}

std::string AwInstanceRes::getUpdateUser() const
{
    return updateUser_;
}

void AwInstanceRes::setUpdateUser(const std::string& value)
{
    updateUser_ = value;
    updateUserIsSet_ = true;
}

bool AwInstanceRes::updateUserIsSet() const
{
    return updateUserIsSet_;
}

void AwInstanceRes::unsetupdateUser()
{
    updateUserIsSet_ = false;
}

std::string AwInstanceRes::getUserId() const
{
    return userId_;
}

void AwInstanceRes::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool AwInstanceRes::userIdIsSet() const
{
    return userIdIsSet_;
}

void AwInstanceRes::unsetuserId()
{
    userIdIsSet_ = false;
}

std::vector<AwVariable>& AwInstanceRes::getVariableList()
{
    return variableList_;
}

void AwInstanceRes::setVariableList(const std::vector<AwVariable>& value)
{
    variableList_ = value;
    variableListIsSet_ = true;
}

bool AwInstanceRes::variableListIsSet() const
{
    return variableListIsSet_;
}

void AwInstanceRes::unsetvariableList()
{
    variableListIsSet_ = false;
}

}
}
}
}
}


