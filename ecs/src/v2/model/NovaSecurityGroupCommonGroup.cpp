

#include "huaweicloud/ecs/v2/model/NovaSecurityGroupCommonGroup.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaSecurityGroupCommonGroup::NovaSecurityGroupCommonGroup()
{
    name_ = "";
    nameIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
}

NovaSecurityGroupCommonGroup::~NovaSecurityGroupCommonGroup() = default;

void NovaSecurityGroupCommonGroup::validate()
{
}

web::json::value NovaSecurityGroupCommonGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }

    return val;
}

bool NovaSecurityGroupCommonGroup::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
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

std::string NovaSecurityGroupCommonGroup::getName() const
{
    return name_;
}

void NovaSecurityGroupCommonGroup::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NovaSecurityGroupCommonGroup::nameIsSet() const
{
    return nameIsSet_;
}

void NovaSecurityGroupCommonGroup::unsetname()
{
    nameIsSet_ = false;
}

std::string NovaSecurityGroupCommonGroup::getTenantId() const
{
    return tenantId_;
}

void NovaSecurityGroupCommonGroup::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool NovaSecurityGroupCommonGroup::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void NovaSecurityGroupCommonGroup::unsettenantId()
{
    tenantIdIsSet_ = false;
}

}
}
}
}
}


