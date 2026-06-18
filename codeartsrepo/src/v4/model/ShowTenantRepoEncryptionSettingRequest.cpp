

#include "huaweicloud/codeartsrepo/v4/model/ShowTenantRepoEncryptionSettingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowTenantRepoEncryptionSettingRequest::ShowTenantRepoEncryptionSettingRequest()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
}

ShowTenantRepoEncryptionSettingRequest::~ShowTenantRepoEncryptionSettingRequest() = default;

void ShowTenantRepoEncryptionSettingRequest::validate()
{
}

web::json::value ShowTenantRepoEncryptionSettingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }

    return val;
}
bool ShowTenantRepoEncryptionSettingRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowTenantRepoEncryptionSettingRequest::getTenantId() const
{
    return tenantId_;
}

void ShowTenantRepoEncryptionSettingRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ShowTenantRepoEncryptionSettingRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ShowTenantRepoEncryptionSettingRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

}
}
}
}
}


