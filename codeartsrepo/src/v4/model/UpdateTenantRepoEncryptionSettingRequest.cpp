

#include "huaweicloud/codeartsrepo/v4/model/UpdateTenantRepoEncryptionSettingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateTenantRepoEncryptionSettingRequest::UpdateTenantRepoEncryptionSettingRequest()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTenantRepoEncryptionSettingRequest::~UpdateTenantRepoEncryptionSettingRequest() = default;

void UpdateTenantRepoEncryptionSettingRequest::validate()
{
}

web::json::value UpdateTenantRepoEncryptionSettingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateTenantRepoEncryptionSettingRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TenantRepoEncryptionSettingRequestDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateTenantRepoEncryptionSettingRequest::getTenantId() const
{
    return tenantId_;
}

void UpdateTenantRepoEncryptionSettingRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool UpdateTenantRepoEncryptionSettingRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void UpdateTenantRepoEncryptionSettingRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

TenantRepoEncryptionSettingRequestDto UpdateTenantRepoEncryptionSettingRequest::getBody() const
{
    return body_;
}

void UpdateTenantRepoEncryptionSettingRequest::setBody(const TenantRepoEncryptionSettingRequestDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTenantRepoEncryptionSettingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTenantRepoEncryptionSettingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


