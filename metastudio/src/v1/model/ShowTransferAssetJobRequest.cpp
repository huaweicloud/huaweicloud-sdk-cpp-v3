

#include "huaweicloud/metastudio/v1/model/ShowTransferAssetJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowTransferAssetJobRequest::ShowTransferAssetJobRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
}

ShowTransferAssetJobRequest::~ShowTransferAssetJobRequest() = default;

void ShowTransferAssetJobRequest::validate()
{
}

web::json::value ShowTransferAssetJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }

    return val;
}
bool ShowTransferAssetJobRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
        }
    }
    return ok;
}


std::string ShowTransferAssetJobRequest::getJobId() const
{
    return jobId_;
}

void ShowTransferAssetJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowTransferAssetJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowTransferAssetJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowTransferAssetJobRequest::getAuthorization() const
{
    return authorization_;
}

void ShowTransferAssetJobRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowTransferAssetJobRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowTransferAssetJobRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowTransferAssetJobRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowTransferAssetJobRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowTransferAssetJobRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowTransferAssetJobRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowTransferAssetJobRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowTransferAssetJobRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowTransferAssetJobRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowTransferAssetJobRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

}
}
}
}
}


