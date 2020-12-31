

#include "huaweicloud/vpc/model/VpcInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




VpcInfo::VpcInfo()
{
    vpcId_ = "";
    vpcIdIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
}

VpcInfo::~VpcInfo() = default;

void VpcInfo::validate()
{
}

web::json::value VpcInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }

    return val;
}

bool VpcInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
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


std::string VpcInfo::getVpcId() const
{
    return vpcId_;
}

void VpcInfo::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool VpcInfo::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void VpcInfo::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string VpcInfo::getTenantId() const
{
    return tenantId_;
}

void VpcInfo::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool VpcInfo::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void VpcInfo::unsettenantId()
{
    tenantIdIsSet_ = false;
}

}
}
}
}
}


