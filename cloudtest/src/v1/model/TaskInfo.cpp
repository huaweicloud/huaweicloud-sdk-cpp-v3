

#include "huaweicloud/cloudtest/v1/model/TaskInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TaskInfo::TaskInfo()
{
    uri_ = "";
    uriIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    ownerId_ = "";
    ownerIdIsSet_ = false;
    parentUri_ = "";
    parentUriIsSet_ = false;
    testCaseCondition_ = "";
    testCaseConditionIsSet_ = false;
    stage_ = "";
    stageIsSet_ = false;
    serviceType_ = 0;
    serviceTypeIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    tagsIsSet_ = false;
    moduleId_ = "";
    moduleIdIsSet_ = false;
    moduleName_ = "";
    moduleNameIsSet_ = false;
    releaseDev_ = "";
    releaseDevIsSet_ = false;
    statusCode_ = 0;
    statusCodeIsSet_ = false;
    extParam_ = "";
    extParamIsSet_ = false;
    executeWay_ = 0;
    executeWayIsSet_ = false;
    executeType_ = 0;
    executeTypeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    planStartTimestamp_ = 0L;
    planStartTimestampIsSet_ = false;
    planEndTimestamp_ = 0L;
    planEndTimestampIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    assignCaseUrisIsSet_ = false;
    caseOperationInfoIsSet_ = false;
    onlyUpdateStatus_ = false;
    onlyUpdateStatusIsSet_ = false;
    isAsync_ = false;
    isAsyncIsSet_ = false;
}

TaskInfo::~TaskInfo() = default;

void TaskInfo::validate()
{
}

web::json::value TaskInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(ownerIdIsSet_) {
        val[utility::conversions::to_string_t("owner_id")] = ModelBase::toJson(ownerId_);
    }
    if(parentUriIsSet_) {
        val[utility::conversions::to_string_t("parent_uri")] = ModelBase::toJson(parentUri_);
    }
    if(testCaseConditionIsSet_) {
        val[utility::conversions::to_string_t("test_case_condition")] = ModelBase::toJson(testCaseCondition_);
    }
    if(stageIsSet_) {
        val[utility::conversions::to_string_t("stage")] = ModelBase::toJson(stage_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(moduleIdIsSet_) {
        val[utility::conversions::to_string_t("module_id")] = ModelBase::toJson(moduleId_);
    }
    if(moduleNameIsSet_) {
        val[utility::conversions::to_string_t("module_name")] = ModelBase::toJson(moduleName_);
    }
    if(releaseDevIsSet_) {
        val[utility::conversions::to_string_t("release_dev")] = ModelBase::toJson(releaseDev_);
    }
    if(statusCodeIsSet_) {
        val[utility::conversions::to_string_t("status_code")] = ModelBase::toJson(statusCode_);
    }
    if(extParamIsSet_) {
        val[utility::conversions::to_string_t("ext_param")] = ModelBase::toJson(extParam_);
    }
    if(executeWayIsSet_) {
        val[utility::conversions::to_string_t("execute_way")] = ModelBase::toJson(executeWay_);
    }
    if(executeTypeIsSet_) {
        val[utility::conversions::to_string_t("execute_type")] = ModelBase::toJson(executeType_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(planStartTimestampIsSet_) {
        val[utility::conversions::to_string_t("plan_start_timestamp")] = ModelBase::toJson(planStartTimestamp_);
    }
    if(planEndTimestampIsSet_) {
        val[utility::conversions::to_string_t("plan_end_timestamp")] = ModelBase::toJson(planEndTimestamp_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(assignCaseUrisIsSet_) {
        val[utility::conversions::to_string_t("assign_case_uris")] = ModelBase::toJson(assignCaseUris_);
    }
    if(caseOperationInfoIsSet_) {
        val[utility::conversions::to_string_t("case_operation_info")] = ModelBase::toJson(caseOperationInfo_);
    }
    if(onlyUpdateStatusIsSet_) {
        val[utility::conversions::to_string_t("only_update_status")] = ModelBase::toJson(onlyUpdateStatus_);
    }
    if(isAsyncIsSet_) {
        val[utility::conversions::to_string_t("is_async")] = ModelBase::toJson(isAsync_);
    }

    return val;
}
bool TaskInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionUri(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("owner_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("test_case_condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_case_condition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseCondition(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("release_dev"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release_dev"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseDev(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_code"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ext_param"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ext_param"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtParam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_way"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_way"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteWay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("plan_start_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_start_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanStartTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_end_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_end_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanEndTimestamp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("assign_case_uris"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assign_case_uris"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignCaseUris(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_operation_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_operation_info"));
        if(!fieldValue.is_null())
        {
            CaseOperationInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseOperationInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("only_update_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("only_update_status"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnlyUpdateStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_async"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_async"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAsync(refVal);
        }
    }
    return ok;
}


std::string TaskInfo::getUri() const
{
    return uri_;
}

void TaskInfo::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool TaskInfo::uriIsSet() const
{
    return uriIsSet_;
}

void TaskInfo::unseturi()
{
    uriIsSet_ = false;
}

std::string TaskInfo::getVersionUri() const
{
    return versionUri_;
}

void TaskInfo::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool TaskInfo::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void TaskInfo::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::string TaskInfo::getName() const
{
    return name_;
}

void TaskInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TaskInfo::nameIsSet() const
{
    return nameIsSet_;
}

void TaskInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string TaskInfo::getOwnerId() const
{
    return ownerId_;
}

void TaskInfo::setOwnerId(const std::string& value)
{
    ownerId_ = value;
    ownerIdIsSet_ = true;
}

bool TaskInfo::ownerIdIsSet() const
{
    return ownerIdIsSet_;
}

void TaskInfo::unsetownerId()
{
    ownerIdIsSet_ = false;
}

std::string TaskInfo::getParentUri() const
{
    return parentUri_;
}

void TaskInfo::setParentUri(const std::string& value)
{
    parentUri_ = value;
    parentUriIsSet_ = true;
}

bool TaskInfo::parentUriIsSet() const
{
    return parentUriIsSet_;
}

void TaskInfo::unsetparentUri()
{
    parentUriIsSet_ = false;
}

std::string TaskInfo::getTestCaseCondition() const
{
    return testCaseCondition_;
}

void TaskInfo::setTestCaseCondition(const std::string& value)
{
    testCaseCondition_ = value;
    testCaseConditionIsSet_ = true;
}

bool TaskInfo::testCaseConditionIsSet() const
{
    return testCaseConditionIsSet_;
}

void TaskInfo::unsettestCaseCondition()
{
    testCaseConditionIsSet_ = false;
}

std::string TaskInfo::getStage() const
{
    return stage_;
}

void TaskInfo::setStage(const std::string& value)
{
    stage_ = value;
    stageIsSet_ = true;
}

bool TaskInfo::stageIsSet() const
{
    return stageIsSet_;
}

void TaskInfo::unsetstage()
{
    stageIsSet_ = false;
}

int32_t TaskInfo::getServiceType() const
{
    return serviceType_;
}

void TaskInfo::setServiceType(int32_t value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool TaskInfo::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void TaskInfo::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string TaskInfo::getNumber() const
{
    return number_;
}

void TaskInfo::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool TaskInfo::numberIsSet() const
{
    return numberIsSet_;
}

void TaskInfo::unsetnumber()
{
    numberIsSet_ = false;
}

std::vector<std::string>& TaskInfo::getTags()
{
    return tags_;
}

void TaskInfo::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool TaskInfo::tagsIsSet() const
{
    return tagsIsSet_;
}

void TaskInfo::unsettags()
{
    tagsIsSet_ = false;
}

std::string TaskInfo::getModuleId() const
{
    return moduleId_;
}

void TaskInfo::setModuleId(const std::string& value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool TaskInfo::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void TaskInfo::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

std::string TaskInfo::getModuleName() const
{
    return moduleName_;
}

void TaskInfo::setModuleName(const std::string& value)
{
    moduleName_ = value;
    moduleNameIsSet_ = true;
}

bool TaskInfo::moduleNameIsSet() const
{
    return moduleNameIsSet_;
}

void TaskInfo::unsetmoduleName()
{
    moduleNameIsSet_ = false;
}

std::string TaskInfo::getReleaseDev() const
{
    return releaseDev_;
}

void TaskInfo::setReleaseDev(const std::string& value)
{
    releaseDev_ = value;
    releaseDevIsSet_ = true;
}

bool TaskInfo::releaseDevIsSet() const
{
    return releaseDevIsSet_;
}

void TaskInfo::unsetreleaseDev()
{
    releaseDevIsSet_ = false;
}

int32_t TaskInfo::getStatusCode() const
{
    return statusCode_;
}

void TaskInfo::setStatusCode(int32_t value)
{
    statusCode_ = value;
    statusCodeIsSet_ = true;
}

bool TaskInfo::statusCodeIsSet() const
{
    return statusCodeIsSet_;
}

void TaskInfo::unsetstatusCode()
{
    statusCodeIsSet_ = false;
}

std::string TaskInfo::getExtParam() const
{
    return extParam_;
}

void TaskInfo::setExtParam(const std::string& value)
{
    extParam_ = value;
    extParamIsSet_ = true;
}

bool TaskInfo::extParamIsSet() const
{
    return extParamIsSet_;
}

void TaskInfo::unsetextParam()
{
    extParamIsSet_ = false;
}

int32_t TaskInfo::getExecuteWay() const
{
    return executeWay_;
}

void TaskInfo::setExecuteWay(int32_t value)
{
    executeWay_ = value;
    executeWayIsSet_ = true;
}

bool TaskInfo::executeWayIsSet() const
{
    return executeWayIsSet_;
}

void TaskInfo::unsetexecuteWay()
{
    executeWayIsSet_ = false;
}

int32_t TaskInfo::getExecuteType() const
{
    return executeType_;
}

void TaskInfo::setExecuteType(int32_t value)
{
    executeType_ = value;
    executeTypeIsSet_ = true;
}

bool TaskInfo::executeTypeIsSet() const
{
    return executeTypeIsSet_;
}

void TaskInfo::unsetexecuteType()
{
    executeTypeIsSet_ = false;
}

std::string TaskInfo::getDescription() const
{
    return description_;
}

void TaskInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TaskInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TaskInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

int64_t TaskInfo::getPlanStartTimestamp() const
{
    return planStartTimestamp_;
}

void TaskInfo::setPlanStartTimestamp(int64_t value)
{
    planStartTimestamp_ = value;
    planStartTimestampIsSet_ = true;
}

bool TaskInfo::planStartTimestampIsSet() const
{
    return planStartTimestampIsSet_;
}

void TaskInfo::unsetplanStartTimestamp()
{
    planStartTimestampIsSet_ = false;
}

int64_t TaskInfo::getPlanEndTimestamp() const
{
    return planEndTimestamp_;
}

void TaskInfo::setPlanEndTimestamp(int64_t value)
{
    planEndTimestamp_ = value;
    planEndTimestampIsSet_ = true;
}

bool TaskInfo::planEndTimestampIsSet() const
{
    return planEndTimestampIsSet_;
}

void TaskInfo::unsetplanEndTimestamp()
{
    planEndTimestampIsSet_ = false;
}

std::string TaskInfo::getRegion() const
{
    return region_;
}

void TaskInfo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool TaskInfo::regionIsSet() const
{
    return regionIsSet_;
}

void TaskInfo::unsetregion()
{
    regionIsSet_ = false;
}

std::vector<std::string>& TaskInfo::getAssignCaseUris()
{
    return assignCaseUris_;
}

void TaskInfo::setAssignCaseUris(const std::vector<std::string>& value)
{
    assignCaseUris_ = value;
    assignCaseUrisIsSet_ = true;
}

bool TaskInfo::assignCaseUrisIsSet() const
{
    return assignCaseUrisIsSet_;
}

void TaskInfo::unsetassignCaseUris()
{
    assignCaseUrisIsSet_ = false;
}

CaseOperationInfo TaskInfo::getCaseOperationInfo() const
{
    return caseOperationInfo_;
}

void TaskInfo::setCaseOperationInfo(const CaseOperationInfo& value)
{
    caseOperationInfo_ = value;
    caseOperationInfoIsSet_ = true;
}

bool TaskInfo::caseOperationInfoIsSet() const
{
    return caseOperationInfoIsSet_;
}

void TaskInfo::unsetcaseOperationInfo()
{
    caseOperationInfoIsSet_ = false;
}

bool TaskInfo::isOnlyUpdateStatus() const
{
    return onlyUpdateStatus_;
}

void TaskInfo::setOnlyUpdateStatus(bool value)
{
    onlyUpdateStatus_ = value;
    onlyUpdateStatusIsSet_ = true;
}

bool TaskInfo::onlyUpdateStatusIsSet() const
{
    return onlyUpdateStatusIsSet_;
}

void TaskInfo::unsetonlyUpdateStatus()
{
    onlyUpdateStatusIsSet_ = false;
}

bool TaskInfo::isIsAsync() const
{
    return isAsync_;
}

void TaskInfo::setIsAsync(bool value)
{
    isAsync_ = value;
    isAsyncIsSet_ = true;
}

bool TaskInfo::isAsyncIsSet() const
{
    return isAsyncIsSet_;
}

void TaskInfo::unsetisAsync()
{
    isAsyncIsSet_ = false;
}

}
}
}
}
}


