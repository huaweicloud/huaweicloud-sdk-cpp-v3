

#include "huaweicloud/metastudio/v1/model/ExecuteTransferAssetActionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ExecuteTransferAssetActionRequest::ExecuteTransferAssetActionRequest()
{
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    bodyIsSet_ = false;
}

ExecuteTransferAssetActionRequest::~ExecuteTransferAssetActionRequest() = default;

void ExecuteTransferAssetActionRequest::validate()
{
}

web::json::value ExecuteTransferAssetActionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ExecuteTransferAssetActionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TransJobRejectBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExecuteTransferAssetActionRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ExecuteTransferAssetActionRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ExecuteTransferAssetActionRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ExecuteTransferAssetActionRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ExecuteTransferAssetActionRequest::getJobId() const
{
    return jobId_;
}

void ExecuteTransferAssetActionRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ExecuteTransferAssetActionRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ExecuteTransferAssetActionRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ExecuteTransferAssetActionRequest::getAuthorization() const
{
    return authorization_;
}

void ExecuteTransferAssetActionRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ExecuteTransferAssetActionRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ExecuteTransferAssetActionRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ExecuteTransferAssetActionRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ExecuteTransferAssetActionRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ExecuteTransferAssetActionRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ExecuteTransferAssetActionRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ExecuteTransferAssetActionRequest::getAction() const
{
    return action_;
}

void ExecuteTransferAssetActionRequest::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ExecuteTransferAssetActionRequest::actionIsSet() const
{
    return actionIsSet_;
}

void ExecuteTransferAssetActionRequest::unsetaction()
{
    actionIsSet_ = false;
}

TransJobRejectBody ExecuteTransferAssetActionRequest::getBody() const
{
    return body_;
}

void ExecuteTransferAssetActionRequest::setBody(const TransJobRejectBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExecuteTransferAssetActionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExecuteTransferAssetActionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


