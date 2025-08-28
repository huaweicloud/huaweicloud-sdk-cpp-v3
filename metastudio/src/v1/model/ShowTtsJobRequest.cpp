

#include "huaweicloud/metastudio/v1/model/ShowTtsJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowTtsJobRequest::ShowTtsJobRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    createSince_ = "";
    createSinceIsSet_ = false;
    createUntil_ = "";
    createUntilIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    jobType_ = "";
    jobTypeIsSet_ = false;
    ttsServiceEnum_ = "";
    ttsServiceEnumIsSet_ = false;
    businessType_ = "";
    businessTypeIsSet_ = false;
}

ShowTtsJobRequest::~ShowTtsJobRequest() = default;

void ShowTtsJobRequest::validate()
{
}

web::json::value ShowTtsJobRequest::toJson() const
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
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(createSinceIsSet_) {
        val[utility::conversions::to_string_t("create_since")] = ModelBase::toJson(createSince_);
    }
    if(createUntilIsSet_) {
        val[utility::conversions::to_string_t("create_until")] = ModelBase::toJson(createUntil_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }
    if(ttsServiceEnumIsSet_) {
        val[utility::conversions::to_string_t("tts_service_enum")] = ModelBase::toJson(ttsServiceEnum_);
    }
    if(businessTypeIsSet_) {
        val[utility::conversions::to_string_t("business_type")] = ModelBase::toJson(businessType_);
    }

    return val;
}
bool ShowTtsJobRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_since"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_since"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateSince(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_until"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_until"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateUntil(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("job_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tts_service_enum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tts_service_enum"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTtsServiceEnum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("business_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessType(refVal);
        }
    }
    return ok;
}


std::string ShowTtsJobRequest::getAuthorization() const
{
    return authorization_;
}

void ShowTtsJobRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowTtsJobRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowTtsJobRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowTtsJobRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowTtsJobRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowTtsJobRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowTtsJobRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowTtsJobRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowTtsJobRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowTtsJobRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowTtsJobRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowTtsJobRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowTtsJobRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowTtsJobRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowTtsJobRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ShowTtsJobRequest::getLimit() const
{
    return limit_;
}

void ShowTtsJobRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowTtsJobRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowTtsJobRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowTtsJobRequest::getOffset() const
{
    return offset_;
}

void ShowTtsJobRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowTtsJobRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowTtsJobRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ShowTtsJobRequest::getCreateSince() const
{
    return createSince_;
}

void ShowTtsJobRequest::setCreateSince(const std::string& value)
{
    createSince_ = value;
    createSinceIsSet_ = true;
}

bool ShowTtsJobRequest::createSinceIsSet() const
{
    return createSinceIsSet_;
}

void ShowTtsJobRequest::unsetcreateSince()
{
    createSinceIsSet_ = false;
}

std::string ShowTtsJobRequest::getCreateUntil() const
{
    return createUntil_;
}

void ShowTtsJobRequest::setCreateUntil(const std::string& value)
{
    createUntil_ = value;
    createUntilIsSet_ = true;
}

bool ShowTtsJobRequest::createUntilIsSet() const
{
    return createUntilIsSet_;
}

void ShowTtsJobRequest::unsetcreateUntil()
{
    createUntilIsSet_ = false;
}

std::string ShowTtsJobRequest::getJobId() const
{
    return jobId_;
}

void ShowTtsJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowTtsJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowTtsJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowTtsJobRequest::getJobType() const
{
    return jobType_;
}

void ShowTtsJobRequest::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool ShowTtsJobRequest::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void ShowTtsJobRequest::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string ShowTtsJobRequest::getTtsServiceEnum() const
{
    return ttsServiceEnum_;
}

void ShowTtsJobRequest::setTtsServiceEnum(const std::string& value)
{
    ttsServiceEnum_ = value;
    ttsServiceEnumIsSet_ = true;
}

bool ShowTtsJobRequest::ttsServiceEnumIsSet() const
{
    return ttsServiceEnumIsSet_;
}

void ShowTtsJobRequest::unsetttsServiceEnum()
{
    ttsServiceEnumIsSet_ = false;
}

std::string ShowTtsJobRequest::getBusinessType() const
{
    return businessType_;
}

void ShowTtsJobRequest::setBusinessType(const std::string& value)
{
    businessType_ = value;
    businessTypeIsSet_ = true;
}

bool ShowTtsJobRequest::businessTypeIsSet() const
{
    return businessTypeIsSet_;
}

void ShowTtsJobRequest::unsetbusinessType()
{
    businessTypeIsSet_ = false;
}

}
}
}
}
}


