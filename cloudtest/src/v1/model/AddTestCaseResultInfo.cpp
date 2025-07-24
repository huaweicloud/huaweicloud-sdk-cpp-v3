

#include "huaweicloud/cloudtest/v1/model/AddTestCaseResultInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AddTestCaseResultInfo::AddTestCaseResultInfo()
{
    uri_ = "";
    uriIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    preparation_ = "";
    preparationIsSet_ = false;
    stepsIsSet_ = false;
    releaseDev_ = "";
    releaseDevIsSet_ = false;
    taskUri_ = "";
    taskUriIsSet_ = false;
    taskResultUri_ = "";
    taskResultUriIsSet_ = false;
}

AddTestCaseResultInfo::~AddTestCaseResultInfo() = default;

void AddTestCaseResultInfo::validate()
{
}

web::json::value AddTestCaseResultInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(preparationIsSet_) {
        val[utility::conversions::to_string_t("preparation")] = ModelBase::toJson(preparation_);
    }
    if(stepsIsSet_) {
        val[utility::conversions::to_string_t("steps")] = ModelBase::toJson(steps_);
    }
    if(releaseDevIsSet_) {
        val[utility::conversions::to_string_t("release_dev")] = ModelBase::toJson(releaseDev_);
    }
    if(taskUriIsSet_) {
        val[utility::conversions::to_string_t("task_uri")] = ModelBase::toJson(taskUri_);
    }
    if(taskResultUriIsSet_) {
        val[utility::conversions::to_string_t("task_result_uri")] = ModelBase::toJson(taskResultUri_);
    }

    return val;
}
bool AddTestCaseResultInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("steps"));
        if(!fieldValue.is_null())
        {
            std::vector<TestCaseStepResultInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSteps(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("task_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_result_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_result_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskResultUri(refVal);
        }
    }
    return ok;
}


std::string AddTestCaseResultInfo::getUri() const
{
    return uri_;
}

void AddTestCaseResultInfo::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool AddTestCaseResultInfo::uriIsSet() const
{
    return uriIsSet_;
}

void AddTestCaseResultInfo::unseturi()
{
    uriIsSet_ = false;
}

std::string AddTestCaseResultInfo::getName() const
{
    return name_;
}

void AddTestCaseResultInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AddTestCaseResultInfo::nameIsSet() const
{
    return nameIsSet_;
}

void AddTestCaseResultInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string AddTestCaseResultInfo::getDescription() const
{
    return description_;
}

void AddTestCaseResultInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AddTestCaseResultInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AddTestCaseResultInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string AddTestCaseResultInfo::getResult() const
{
    return result_;
}

void AddTestCaseResultInfo::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool AddTestCaseResultInfo::resultIsSet() const
{
    return resultIsSet_;
}

void AddTestCaseResultInfo::unsetresult()
{
    resultIsSet_ = false;
}

std::string AddTestCaseResultInfo::getStatus() const
{
    return status_;
}

void AddTestCaseResultInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddTestCaseResultInfo::statusIsSet() const
{
    return statusIsSet_;
}

void AddTestCaseResultInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string AddTestCaseResultInfo::getPreparation() const
{
    return preparation_;
}

void AddTestCaseResultInfo::setPreparation(const std::string& value)
{
    preparation_ = value;
    preparationIsSet_ = true;
}

bool AddTestCaseResultInfo::preparationIsSet() const
{
    return preparationIsSet_;
}

void AddTestCaseResultInfo::unsetpreparation()
{
    preparationIsSet_ = false;
}

std::vector<TestCaseStepResultInfo>& AddTestCaseResultInfo::getSteps()
{
    return steps_;
}

void AddTestCaseResultInfo::setSteps(const std::vector<TestCaseStepResultInfo>& value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool AddTestCaseResultInfo::stepsIsSet() const
{
    return stepsIsSet_;
}

void AddTestCaseResultInfo::unsetsteps()
{
    stepsIsSet_ = false;
}

std::string AddTestCaseResultInfo::getReleaseDev() const
{
    return releaseDev_;
}

void AddTestCaseResultInfo::setReleaseDev(const std::string& value)
{
    releaseDev_ = value;
    releaseDevIsSet_ = true;
}

bool AddTestCaseResultInfo::releaseDevIsSet() const
{
    return releaseDevIsSet_;
}

void AddTestCaseResultInfo::unsetreleaseDev()
{
    releaseDevIsSet_ = false;
}

std::string AddTestCaseResultInfo::getTaskUri() const
{
    return taskUri_;
}

void AddTestCaseResultInfo::setTaskUri(const std::string& value)
{
    taskUri_ = value;
    taskUriIsSet_ = true;
}

bool AddTestCaseResultInfo::taskUriIsSet() const
{
    return taskUriIsSet_;
}

void AddTestCaseResultInfo::unsettaskUri()
{
    taskUriIsSet_ = false;
}

std::string AddTestCaseResultInfo::getTaskResultUri() const
{
    return taskResultUri_;
}

void AddTestCaseResultInfo::setTaskResultUri(const std::string& value)
{
    taskResultUri_ = value;
    taskResultUriIsSet_ = true;
}

bool AddTestCaseResultInfo::taskResultUriIsSet() const
{
    return taskResultUriIsSet_;
}

void AddTestCaseResultInfo::unsettaskResultUri()
{
    taskResultUriIsSet_ = false;
}

}
}
}
}
}


