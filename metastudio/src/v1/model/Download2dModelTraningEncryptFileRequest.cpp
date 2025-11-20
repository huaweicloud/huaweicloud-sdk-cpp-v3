

#include "huaweicloud/metastudio/v1/model/Download2dModelTraningEncryptFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




Download2dModelTraningEncryptFileRequest::Download2dModelTraningEncryptFileRequest()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    onceToken_ = "";
    onceTokenIsSet_ = false;
}

Download2dModelTraningEncryptFileRequest::~Download2dModelTraningEncryptFileRequest() = default;

void Download2dModelTraningEncryptFileRequest::validate()
{
}

web::json::value Download2dModelTraningEncryptFileRequest::toJson() const
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
bool Download2dModelTraningEncryptFileRequest::fromJson(const web::json::value& val)
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


std::string Download2dModelTraningEncryptFileRequest::getTenantId() const
{
    return tenantId_;
}

void Download2dModelTraningEncryptFileRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool Download2dModelTraningEncryptFileRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void Download2dModelTraningEncryptFileRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string Download2dModelTraningEncryptFileRequest::getJobId() const
{
    return jobId_;
}

void Download2dModelTraningEncryptFileRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool Download2dModelTraningEncryptFileRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void Download2dModelTraningEncryptFileRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string Download2dModelTraningEncryptFileRequest::getOnceToken() const
{
    return onceToken_;
}

void Download2dModelTraningEncryptFileRequest::setOnceToken(const std::string& value)
{
    onceToken_ = value;
    onceTokenIsSet_ = true;
}

bool Download2dModelTraningEncryptFileRequest::onceTokenIsSet() const
{
    return onceTokenIsSet_;
}

void Download2dModelTraningEncryptFileRequest::unsetonceToken()
{
    onceTokenIsSet_ = false;
}

}
}
}
}
}


