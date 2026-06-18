

#include "huaweicloud/codeartsrepo/v4/model/CreateTenantKmsGrantResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateTenantKmsGrantResponse::CreateTenantKmsGrantResponse()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
    assumed_ = false;
    assumedIsSet_ = false;
}

CreateTenantKmsGrantResponse::~CreateTenantKmsGrantResponse() = default;

void CreateTenantKmsGrantResponse::validate()
{
}

web::json::value CreateTenantKmsGrantResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(assumedIsSet_) {
        val[utility::conversions::to_string_t("assumed")] = ModelBase::toJson(assumed_);
    }

    return val;
}
bool CreateTenantKmsGrantResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("assumed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assumed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssumed(refVal);
        }
    }
    return ok;
}


std::string CreateTenantKmsGrantResponse::getTenantId() const
{
    return tenantId_;
}

void CreateTenantKmsGrantResponse::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool CreateTenantKmsGrantResponse::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void CreateTenantKmsGrantResponse::unsettenantId()
{
    tenantIdIsSet_ = false;
}

bool CreateTenantKmsGrantResponse::isAssumed() const
{
    return assumed_;
}

void CreateTenantKmsGrantResponse::setAssumed(bool value)
{
    assumed_ = value;
    assumedIsSet_ = true;
}

bool CreateTenantKmsGrantResponse::assumedIsSet() const
{
    return assumedIsSet_;
}

void CreateTenantKmsGrantResponse::unsetassumed()
{
    assumedIsSet_ = false;
}

}
}
}
}
}


