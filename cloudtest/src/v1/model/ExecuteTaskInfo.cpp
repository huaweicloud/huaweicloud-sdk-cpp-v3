

#include "huaweicloud/cloudtest/v1/model/ExecuteTaskInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ExecuteTaskInfo::ExecuteTaskInfo()
{
    description_ = "";
    descriptionIsSet_ = false;
    releaseDev_ = "";
    releaseDevIsSet_ = false;
    resultCode_ = "";
    resultCodeIsSet_ = false;
    testResultUri_ = "";
    testResultUriIsSet_ = false;
    statusCode_ = "";
    statusCodeIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
}

ExecuteTaskInfo::~ExecuteTaskInfo() = default;

void ExecuteTaskInfo::validate()
{
}

web::json::value ExecuteTaskInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(releaseDevIsSet_) {
        val[utility::conversions::to_string_t("release_dev")] = ModelBase::toJson(releaseDev_);
    }
    if(resultCodeIsSet_) {
        val[utility::conversions::to_string_t("result_code")] = ModelBase::toJson(resultCode_);
    }
    if(testResultUriIsSet_) {
        val[utility::conversions::to_string_t("test_result_uri")] = ModelBase::toJson(testResultUri_);
    }
    if(statusCodeIsSet_) {
        val[utility::conversions::to_string_t("status_code")] = ModelBase::toJson(statusCode_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }

    return val;
}
bool ExecuteTaskInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("result_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResultCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_result_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_result_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestResultUri(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionUri(refVal);
        }
    }
    return ok;
}


std::string ExecuteTaskInfo::getDescription() const
{
    return description_;
}

void ExecuteTaskInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ExecuteTaskInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ExecuteTaskInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ExecuteTaskInfo::getReleaseDev() const
{
    return releaseDev_;
}

void ExecuteTaskInfo::setReleaseDev(const std::string& value)
{
    releaseDev_ = value;
    releaseDevIsSet_ = true;
}

bool ExecuteTaskInfo::releaseDevIsSet() const
{
    return releaseDevIsSet_;
}

void ExecuteTaskInfo::unsetreleaseDev()
{
    releaseDevIsSet_ = false;
}

std::string ExecuteTaskInfo::getResultCode() const
{
    return resultCode_;
}

void ExecuteTaskInfo::setResultCode(const std::string& value)
{
    resultCode_ = value;
    resultCodeIsSet_ = true;
}

bool ExecuteTaskInfo::resultCodeIsSet() const
{
    return resultCodeIsSet_;
}

void ExecuteTaskInfo::unsetresultCode()
{
    resultCodeIsSet_ = false;
}

std::string ExecuteTaskInfo::getTestResultUri() const
{
    return testResultUri_;
}

void ExecuteTaskInfo::setTestResultUri(const std::string& value)
{
    testResultUri_ = value;
    testResultUriIsSet_ = true;
}

bool ExecuteTaskInfo::testResultUriIsSet() const
{
    return testResultUriIsSet_;
}

void ExecuteTaskInfo::unsettestResultUri()
{
    testResultUriIsSet_ = false;
}

std::string ExecuteTaskInfo::getStatusCode() const
{
    return statusCode_;
}

void ExecuteTaskInfo::setStatusCode(const std::string& value)
{
    statusCode_ = value;
    statusCodeIsSet_ = true;
}

bool ExecuteTaskInfo::statusCodeIsSet() const
{
    return statusCodeIsSet_;
}

void ExecuteTaskInfo::unsetstatusCode()
{
    statusCodeIsSet_ = false;
}

std::string ExecuteTaskInfo::getVersionUri() const
{
    return versionUri_;
}

void ExecuteTaskInfo::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool ExecuteTaskInfo::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void ExecuteTaskInfo::unsetversionUri()
{
    versionUriIsSet_ = false;
}

}
}
}
}
}


