

#include "huaweicloud/metastudio/v1/model/ShowEncryptFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowEncryptFileRequest::ShowEncryptFileRequest()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    onceToken_ = "";
    onceTokenIsSet_ = false;
}

ShowEncryptFileRequest::~ShowEncryptFileRequest() = default;

void ShowEncryptFileRequest::validate()
{
}

web::json::value ShowEncryptFileRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(onceTokenIsSet_) {
        val[utility::conversions::to_string_t("once_token")] = ModelBase::toJson(onceToken_);
    }

    return val;
}
bool ShowEncryptFileRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("once_token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("once_token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnceToken(refVal);
        }
    }
    return ok;
}


std::string ShowEncryptFileRequest::getTenantId() const
{
    return tenantId_;
}

void ShowEncryptFileRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ShowEncryptFileRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ShowEncryptFileRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string ShowEncryptFileRequest::getJobId() const
{
    return jobId_;
}

void ShowEncryptFileRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowEncryptFileRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowEncryptFileRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowEncryptFileRequest::getOnceToken() const
{
    return onceToken_;
}

void ShowEncryptFileRequest::setOnceToken(const std::string& value)
{
    onceToken_ = value;
    onceTokenIsSet_ = true;
}

bool ShowEncryptFileRequest::onceTokenIsSet() const
{
    return onceTokenIsSet_;
}

void ShowEncryptFileRequest::unsetonceToken()
{
    onceTokenIsSet_ = false;
}

}
}
}
}
}


