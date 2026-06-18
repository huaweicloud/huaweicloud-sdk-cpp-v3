

#include "huaweicloud/codeartsrepo/v4/model/ShowTenantKmsGrantResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowTenantKmsGrantResponse::ShowTenantKmsGrantResponse()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
    assumed_ = false;
    assumedIsSet_ = false;
}

ShowTenantKmsGrantResponse::~ShowTenantKmsGrantResponse() = default;

void ShowTenantKmsGrantResponse::validate()
{
}

web::json::value ShowTenantKmsGrantResponse::toJson() const
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
bool ShowTenantKmsGrantResponse::fromJson(const web::json::value& val)
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


std::string ShowTenantKmsGrantResponse::getTenantId() const
{
    return tenantId_;
}

void ShowTenantKmsGrantResponse::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ShowTenantKmsGrantResponse::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ShowTenantKmsGrantResponse::unsettenantId()
{
    tenantIdIsSet_ = false;
}

bool ShowTenantKmsGrantResponse::isAssumed() const
{
    return assumed_;
}

void ShowTenantKmsGrantResponse::setAssumed(bool value)
{
    assumed_ = value;
    assumedIsSet_ = true;
}

bool ShowTenantKmsGrantResponse::assumedIsSet() const
{
    return assumedIsSet_;
}

void ShowTenantKmsGrantResponse::unsetassumed()
{
    assumedIsSet_ = false;
}

}
}
}
}
}


