

#include "huaweicloud/codeartsrepo/v4/model/ShowTenantKmsGrantRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowTenantKmsGrantRequest::ShowTenantKmsGrantRequest()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
}

ShowTenantKmsGrantRequest::~ShowTenantKmsGrantRequest() = default;

void ShowTenantKmsGrantRequest::validate()
{
}

web::json::value ShowTenantKmsGrantRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }

    return val;
}
bool ShowTenantKmsGrantRequest::fromJson(const web::json::value& val)
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


std::string ShowTenantKmsGrantRequest::getTenantId() const
{
    return tenantId_;
}

void ShowTenantKmsGrantRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ShowTenantKmsGrantRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ShowTenantKmsGrantRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

}
}
}
}
}


