

#include "huaweicloud/metastudio/v1/model/ListSmartLiveRuleCommandsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListSmartLiveRuleCommandsRequest::ListSmartLiveRuleCommandsRequest()
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

ListSmartLiveRuleCommandsRequest::~ListSmartLiveRuleCommandsRequest() = default;

void ListSmartLiveRuleCommandsRequest::validate()
{
}

web::json::value ListSmartLiveRuleCommandsRequest::toJson() const
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
bool ListSmartLiveRuleCommandsRequest::fromJson(const web::json::value& val)
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


std::string ListSmartLiveRuleCommandsRequest::getAuthorization() const
{
    return authorization_;
}

void ListSmartLiveRuleCommandsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListSmartLiveRuleCommandsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListSmartLiveRuleCommandsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListSmartLiveRuleCommandsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListSmartLiveRuleCommandsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListSmartLiveRuleCommandsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListSmartLiveRuleCommandsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListSmartLiveRuleCommandsRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListSmartLiveRuleCommandsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListSmartLiveRuleCommandsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListSmartLiveRuleCommandsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListSmartLiveRuleCommandsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListSmartLiveRuleCommandsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListSmartLiveRuleCommandsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListSmartLiveRuleCommandsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ListSmartLiveRuleCommandsRequest::getJobId() const
{
    return jobId_;
}

void ListSmartLiveRuleCommandsRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListSmartLiveRuleCommandsRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListSmartLiveRuleCommandsRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t ListSmartLiveRuleCommandsRequest::getOffset() const
{
    return offset_;
}

void ListSmartLiveRuleCommandsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSmartLiveRuleCommandsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSmartLiveRuleCommandsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSmartLiveRuleCommandsRequest::getLimit() const
{
    return limit_;
}

void ListSmartLiveRuleCommandsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSmartLiveRuleCommandsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSmartLiveRuleCommandsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


