

#include "huaweicloud/cloudtest/v1/model/TaskAssignCaseDetailVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TaskAssignCaseDetailVo::TaskAssignCaseDetailVo()
{
    uri_ = "";
    uriIsSet_ = false;
    sort_ = 0;
    sortIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    stage_ = 0;
    stageIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    taskUri_ = "";
    taskUriIsSet_ = false;
    updateTime_ = utility::datetime();
    updateTimeIsSet_ = false;
    updatorName_ = "";
    updatorNameIsSet_ = false;
    updator_ = "";
    updatorIsSet_ = false;
    caseUri_ = "";
    caseUriIsSet_ = false;
    isAvailable_ = 0;
    isAvailableIsSet_ = false;
    testCaseName_ = "";
    testCaseNameIsSet_ = false;
    featureUri_ = "";
    featureUriIsSet_ = false;
    testCaseNumber_ = "";
    testCaseNumberIsSet_ = false;
    svnScriptPath_ = "";
    svnScriptPathIsSet_ = false;
    statusCode_ = "";
    statusCodeIsSet_ = false;
    statusName_ = "";
    statusNameIsSet_ = false;
    resultCode_ = "";
    resultCodeIsSet_ = false;
    resultName_ = "";
    resultNameIsSet_ = false;
    ownerName_ = "";
    ownerNameIsSet_ = false;
    executeLatestTime_ = utility::datetime();
    executeLatestTimeIsSet_ = false;
    executeDuration_ = "";
    executeDurationIsSet_ = false;
    isKeyword_ = 0;
    isKeywordIsSet_ = false;
    netWorkScriptName_ = "";
    netWorkScriptNameIsSet_ = false;
    rankId_ = 0;
    rankIdIsSet_ = false;
}

TaskAssignCaseDetailVo::~TaskAssignCaseDetailVo() = default;

void TaskAssignCaseDetailVo::validate()
{
}

web::json::value TaskAssignCaseDetailVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(stageIsSet_) {
        val[utility::conversions::to_string_t("stage")] = ModelBase::toJson(stage_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(taskUriIsSet_) {
        val[utility::conversions::to_string_t("task_uri")] = ModelBase::toJson(taskUri_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(updatorNameIsSet_) {
        val[utility::conversions::to_string_t("updator_name")] = ModelBase::toJson(updatorName_);
    }
    if(updatorIsSet_) {
        val[utility::conversions::to_string_t("updator")] = ModelBase::toJson(updator_);
    }
    if(caseUriIsSet_) {
        val[utility::conversions::to_string_t("case_uri")] = ModelBase::toJson(caseUri_);
    }
    if(isAvailableIsSet_) {
        val[utility::conversions::to_string_t("is_available")] = ModelBase::toJson(isAvailable_);
    }
    if(testCaseNameIsSet_) {
        val[utility::conversions::to_string_t("test_case_name")] = ModelBase::toJson(testCaseName_);
    }
    if(featureUriIsSet_) {
        val[utility::conversions::to_string_t("feature_uri")] = ModelBase::toJson(featureUri_);
    }
    if(testCaseNumberIsSet_) {
        val[utility::conversions::to_string_t("test_case_number")] = ModelBase::toJson(testCaseNumber_);
    }
    if(svnScriptPathIsSet_) {
        val[utility::conversions::to_string_t("svn_script_path")] = ModelBase::toJson(svnScriptPath_);
    }
    if(statusCodeIsSet_) {
        val[utility::conversions::to_string_t("status_code")] = ModelBase::toJson(statusCode_);
    }
    if(statusNameIsSet_) {
        val[utility::conversions::to_string_t("status_name")] = ModelBase::toJson(statusName_);
    }
    if(resultCodeIsSet_) {
        val[utility::conversions::to_string_t("result_code")] = ModelBase::toJson(resultCode_);
    }
    if(resultNameIsSet_) {
        val[utility::conversions::to_string_t("result_name")] = ModelBase::toJson(resultName_);
    }
    if(ownerNameIsSet_) {
        val[utility::conversions::to_string_t("owner_name")] = ModelBase::toJson(ownerName_);
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
    if(netWorkScriptNameIsSet_) {
        val[utility::conversions::to_string_t("net_work_script_name")] = ModelBase::toJson(netWorkScriptName_);
    }
    if(rankIdIsSet_) {
        val[utility::conversions::to_string_t("rank_id")] = ModelBase::toJson(rankId_);
    }

    return val;
}
bool TaskAssignCaseDetailVo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sort"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSort(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("stage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stage"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("task_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_available"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_available"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAvailable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_case_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_case_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("test_case_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_case_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("result_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResultName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("net_work_script_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("net_work_script_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetWorkScriptName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rank_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rank_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRankId(refVal);
        }
    }
    return ok;
}


std::string TaskAssignCaseDetailVo::getUri() const
{
    return uri_;
}

void TaskAssignCaseDetailVo::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool TaskAssignCaseDetailVo::uriIsSet() const
{
    return uriIsSet_;
}

void TaskAssignCaseDetailVo::unseturi()
{
    uriIsSet_ = false;
}

int32_t TaskAssignCaseDetailVo::getSort() const
{
    return sort_;
}

void TaskAssignCaseDetailVo::setSort(int32_t value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool TaskAssignCaseDetailVo::sortIsSet() const
{
    return sortIsSet_;
}

void TaskAssignCaseDetailVo::unsetsort()
{
    sortIsSet_ = false;
}

std::string TaskAssignCaseDetailVo::getOwner() const
{
    return owner_;
}

void TaskAssignCaseDetailVo::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool TaskAssignCaseDetailVo::ownerIsSet() const
{
    return ownerIsSet_;
}

void TaskAssignCaseDetailVo::unsetowner()
{
    ownerIsSet_ = false;
}

int32_t TaskAssignCaseDetailVo::getStage() const
{
    return stage_;
}

void TaskAssignCaseDetailVo::setStage(int32_t value)
{
    stage_ = value;
    stageIsSet_ = true;
}

bool TaskAssignCaseDetailVo::stageIsSet() const
{
    return stageIsSet_;
}

void TaskAssignCaseDetailVo::unsetstage()
{
    stageIsSet_ = false;
}

std::string TaskAssignCaseDetailVo::getProjectUuid() const
{
    return projectUuid_;
}

void TaskAssignCaseDetailVo::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool TaskAssignCaseDetailVo::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void TaskAssignCaseDetailVo::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string TaskAssignCaseDetailVo::getTaskUri() const
{
    return taskUri_;
}

void TaskAssignCaseDetailVo::setTaskUri(const std::string& value)
{
    taskUri_ = value;
    taskUriIsSet_ = true;
}

bool TaskAssignCaseDetailVo::taskUriIsSet() const
{
    return taskUriIsSet_;
}

void TaskAssignCaseDetailVo::unsettaskUri()
{
    taskUriIsSet_ = false;
}

utility::datetime TaskAssignCaseDetailVo::getUpdateTime() const
{
    return updateTime_;
}

void TaskAssignCaseDetailVo::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool TaskAssignCaseDetailVo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void TaskAssignCaseDetailVo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string TaskAssignCaseDetailVo::getUpdatorName() const
{
    return updatorName_;
}

void TaskAssignCaseDetailVo::setUpdatorName(const std::string& value)
{
    updatorName_ = value;
    updatorNameIsSet_ = true;
}

bool TaskAssignCaseDetailVo::updatorNameIsSet() const
{
    return updatorNameIsSet_;
}

void TaskAssignCaseDetailVo::unsetupdatorName()
{
    updatorNameIsSet_ = false;
}

std::string TaskAssignCaseDetailVo::getUpdator() const
{
    return updator_;
}

void TaskAssignCaseDetailVo::setUpdator(const std::string& value)
{
    updator_ = value;
    updatorIsSet_ = true;
}

bool TaskAssignCaseDetailVo::updatorIsSet() const
{
    return updatorIsSet_;
}

void TaskAssignCaseDetailVo::unsetupdator()
{
    updatorIsSet_ = false;
}

std::string TaskAssignCaseDetailVo::getCaseUri() const
{
    return caseUri_;
}

void TaskAssignCaseDetailVo::setCaseUri(const std::string& value)
{
    caseUri_ = value;
    caseUriIsSet_ = true;
}

bool TaskAssignCaseDetailVo::caseUriIsSet() const
{
    return caseUriIsSet_;
}

void TaskAssignCaseDetailVo::unsetcaseUri()
{
    caseUriIsSet_ = false;
}

int32_t TaskAssignCaseDetailVo::getIsAvailable() const
{
    return isAvailable_;
}

void TaskAssignCaseDetailVo::setIsAvailable(int32_t value)
{
    isAvailable_ = value;
    isAvailableIsSet_ = true;
}

bool TaskAssignCaseDetailVo::isAvailableIsSet() const
{
    return isAvailableIsSet_;
}

void TaskAssignCaseDetailVo::unsetisAvailable()
{
    isAvailableIsSet_ = false;
}

std::string TaskAssignCaseDetailVo::getTestCaseName() const
{
    return testCaseName_;
}

void TaskAssignCaseDetailVo::setTestCaseName(const std::string& value)
{
    testCaseName_ = value;
    testCaseNameIsSet_ = true;
}

bool TaskAssignCaseDetailVo::testCaseNameIsSet() const
{
    return testCaseNameIsSet_;
}

void TaskAssignCaseDetailVo::unsettestCaseName()
{
    testCaseNameIsSet_ = false;
}

std::string TaskAssignCaseDetailVo::getFeatureUri() const
{
    return featureUri_;
}

void TaskAssignCaseDetailVo::setFeatureUri(const std::string& value)
{
    featureUri_ = value;
    featureUriIsSet_ = true;
}

bool TaskAssignCaseDetailVo::featureUriIsSet() const
{
    return featureUriIsSet_;
}

void TaskAssignCaseDetailVo::unsetfeatureUri()
{
    featureUriIsSet_ = false;
}

std::string TaskAssignCaseDetailVo::getTestCaseNumber() const
{
    return testCaseNumber_;
}

void TaskAssignCaseDetailVo::setTestCaseNumber(const std::string& value)
{
    testCaseNumber_ = value;
    testCaseNumberIsSet_ = true;
}

bool TaskAssignCaseDetailVo::testCaseNumberIsSet() const
{
    return testCaseNumberIsSet_;
}

void TaskAssignCaseDetailVo::unsettestCaseNumber()
{
    testCaseNumberIsSet_ = false;
}

std::string TaskAssignCaseDetailVo::getSvnScriptPath() const
{
    return svnScriptPath_;
}

void TaskAssignCaseDetailVo::setSvnScriptPath(const std::string& value)
{
    svnScriptPath_ = value;
    svnScriptPathIsSet_ = true;
}

bool TaskAssignCaseDetailVo::svnScriptPathIsSet() const
{
    return svnScriptPathIsSet_;
}

void TaskAssignCaseDetailVo::unsetsvnScriptPath()
{
    svnScriptPathIsSet_ = false;
}

std::string TaskAssignCaseDetailVo::getStatusCode() const
{
    return statusCode_;
}

void TaskAssignCaseDetailVo::setStatusCode(const std::string& value)
{
    statusCode_ = value;
    statusCodeIsSet_ = true;
}

bool TaskAssignCaseDetailVo::statusCodeIsSet() const
{
    return statusCodeIsSet_;
}

void TaskAssignCaseDetailVo::unsetstatusCode()
{
    statusCodeIsSet_ = false;
}

std::string TaskAssignCaseDetailVo::getStatusName() const
{
    return statusName_;
}

void TaskAssignCaseDetailVo::setStatusName(const std::string& value)
{
    statusName_ = value;
    statusNameIsSet_ = true;
}

bool TaskAssignCaseDetailVo::statusNameIsSet() const
{
    return statusNameIsSet_;
}

void TaskAssignCaseDetailVo::unsetstatusName()
{
    statusNameIsSet_ = false;
}

std::string TaskAssignCaseDetailVo::getResultCode() const
{
    return resultCode_;
}

void TaskAssignCaseDetailVo::setResultCode(const std::string& value)
{
    resultCode_ = value;
    resultCodeIsSet_ = true;
}

bool TaskAssignCaseDetailVo::resultCodeIsSet() const
{
    return resultCodeIsSet_;
}

void TaskAssignCaseDetailVo::unsetresultCode()
{
    resultCodeIsSet_ = false;
}

std::string TaskAssignCaseDetailVo::getResultName() const
{
    return resultName_;
}

void TaskAssignCaseDetailVo::setResultName(const std::string& value)
{
    resultName_ = value;
    resultNameIsSet_ = true;
}

bool TaskAssignCaseDetailVo::resultNameIsSet() const
{
    return resultNameIsSet_;
}

void TaskAssignCaseDetailVo::unsetresultName()
{
    resultNameIsSet_ = false;
}

std::string TaskAssignCaseDetailVo::getOwnerName() const
{
    return ownerName_;
}

void TaskAssignCaseDetailVo::setOwnerName(const std::string& value)
{
    ownerName_ = value;
    ownerNameIsSet_ = true;
}

bool TaskAssignCaseDetailVo::ownerNameIsSet() const
{
    return ownerNameIsSet_;
}

void TaskAssignCaseDetailVo::unsetownerName()
{
    ownerNameIsSet_ = false;
}

utility::datetime TaskAssignCaseDetailVo::getExecuteLatestTime() const
{
    return executeLatestTime_;
}

void TaskAssignCaseDetailVo::setExecuteLatestTime(const utility::datetime& value)
{
    executeLatestTime_ = value;
    executeLatestTimeIsSet_ = true;
}

bool TaskAssignCaseDetailVo::executeLatestTimeIsSet() const
{
    return executeLatestTimeIsSet_;
}

void TaskAssignCaseDetailVo::unsetexecuteLatestTime()
{
    executeLatestTimeIsSet_ = false;
}

std::string TaskAssignCaseDetailVo::getExecuteDuration() const
{
    return executeDuration_;
}

void TaskAssignCaseDetailVo::setExecuteDuration(const std::string& value)
{
    executeDuration_ = value;
    executeDurationIsSet_ = true;
}

bool TaskAssignCaseDetailVo::executeDurationIsSet() const
{
    return executeDurationIsSet_;
}

void TaskAssignCaseDetailVo::unsetexecuteDuration()
{
    executeDurationIsSet_ = false;
}

int32_t TaskAssignCaseDetailVo::getIsKeyword() const
{
    return isKeyword_;
}

void TaskAssignCaseDetailVo::setIsKeyword(int32_t value)
{
    isKeyword_ = value;
    isKeywordIsSet_ = true;
}

bool TaskAssignCaseDetailVo::isKeywordIsSet() const
{
    return isKeywordIsSet_;
}

void TaskAssignCaseDetailVo::unsetisKeyword()
{
    isKeywordIsSet_ = false;
}

std::string TaskAssignCaseDetailVo::getNetWorkScriptName() const
{
    return netWorkScriptName_;
}

void TaskAssignCaseDetailVo::setNetWorkScriptName(const std::string& value)
{
    netWorkScriptName_ = value;
    netWorkScriptNameIsSet_ = true;
}

bool TaskAssignCaseDetailVo::netWorkScriptNameIsSet() const
{
    return netWorkScriptNameIsSet_;
}

void TaskAssignCaseDetailVo::unsetnetWorkScriptName()
{
    netWorkScriptNameIsSet_ = false;
}

int32_t TaskAssignCaseDetailVo::getRankId() const
{
    return rankId_;
}

void TaskAssignCaseDetailVo::setRankId(int32_t value)
{
    rankId_ = value;
    rankIdIsSet_ = true;
}

bool TaskAssignCaseDetailVo::rankIdIsSet() const
{
    return rankIdIsSet_;
}

void TaskAssignCaseDetailVo::unsetrankId()
{
    rankIdIsSet_ = false;
}

}
}
}
}
}


