

#include "huaweicloud/codeartsrepo/v4/model/CreateTenantKmsGrantRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateTenantKmsGrantRequest::CreateTenantKmsGrantRequest()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
}

CreateTenantKmsGrantRequest::~CreateTenantKmsGrantRequest() = default;

void CreateTenantKmsGrantRequest::validate()
{
}

web::json::value CreateTenantKmsGrantRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }

    return val;
}
bool CreateTenantKmsGrantRequest::fromJson(const web::json::value& val)
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


std::string CreateTenantKmsGrantRequest::getTenantId() const
{
    return tenantId_;
}

void CreateTenantKmsGrantRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool CreateTenantKmsGrantRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void CreateTenantKmsGrantRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

}
}
}
}
}


