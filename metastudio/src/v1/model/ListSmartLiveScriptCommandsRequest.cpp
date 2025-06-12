

#include "huaweicloud/metastudio/v1/model/ListSmartLiveScriptCommandsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListSmartLiveScriptCommandsRequest::ListSmartLiveScriptCommandsRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListSmartLiveScriptCommandsRequest::~ListSmartLiveScriptCommandsRequest() = default;

void ListSmartLiveScriptCommandsRequest::validate()
{
}

web::json::value ListSmartLiveScriptCommandsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xProjectIdIsSet_) {
        val[utility::conversions::to_string_t("X-Project-Id")] = ModelBase::toJson(xProjectId_);
    }
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListSmartLiveScriptCommandsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("X-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListSmartLiveScriptCommandsRequest::getAuthorization() const
{
    return authorization_;
}

void ListSmartLiveScriptCommandsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListSmartLiveScriptCommandsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListSmartLiveScriptCommandsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListSmartLiveScriptCommandsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListSmartLiveScriptCommandsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListSmartLiveScriptCommandsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListSmartLiveScriptCommandsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListSmartLiveScriptCommandsRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListSmartLiveScriptCommandsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListSmartLiveScriptCommandsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListSmartLiveScriptCommandsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListSmartLiveScriptCommandsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListSmartLiveScriptCommandsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListSmartLiveScriptCommandsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListSmartLiveScriptCommandsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ListSmartLiveScriptCommandsRequest::getJobId() const
{
    return jobId_;
}

void ListSmartLiveScriptCommandsRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListSmartLiveScriptCommandsRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListSmartLiveScriptCommandsRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t ListSmartLiveScriptCommandsRequest::getOffset() const
{
    return offset_;
}

void ListSmartLiveScriptCommandsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSmartLiveScriptCommandsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSmartLiveScriptCommandsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSmartLiveScriptCommandsRequest::getLimit() const
{
    return limit_;
}

void ListSmartLiveScriptCommandsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSmartLiveScriptCommandsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSmartLiveScriptCommandsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


