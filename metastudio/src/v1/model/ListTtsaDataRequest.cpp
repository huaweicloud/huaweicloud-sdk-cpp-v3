

#include "huaweicloud/metastudio/v1/model/ListTtsaDataRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListTtsaDataRequest::ListTtsaDataRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListTtsaDataRequest::~ListTtsaDataRequest() = default;

void ListTtsaDataRequest::validate()
{
}

web::json::value ListTtsaDataRequest::toJson() const
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
    if(xProjectIdIsSet_) {
        val[utility::conversions::to_string_t("X-Project-Id")] = ModelBase::toJson(xProjectId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListTtsaDataRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXProjectId(refVal);
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
    return ok;
}


std::string ListTtsaDataRequest::getJobId() const
{
    return jobId_;
}

void ListTtsaDataRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListTtsaDataRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListTtsaDataRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ListTtsaDataRequest::getAuthorization() const
{
    return authorization_;
}

void ListTtsaDataRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListTtsaDataRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListTtsaDataRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListTtsaDataRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListTtsaDataRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListTtsaDataRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListTtsaDataRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListTtsaDataRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListTtsaDataRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListTtsaDataRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListTtsaDataRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

int32_t ListTtsaDataRequest::getOffset() const
{
    return offset_;
}

void ListTtsaDataRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTtsaDataRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTtsaDataRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


