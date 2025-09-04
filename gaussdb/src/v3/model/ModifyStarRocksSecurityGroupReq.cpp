

#include "huaweicloud/gaussdb/v3/model/ModifyStarRocksSecurityGroupReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyStarRocksSecurityGroupReq::ModifyStarRocksSecurityGroupReq()
{
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
}

ModifyStarRocksSecurityGroupReq::~ModifyStarRocksSecurityGroupReq() = default;

void ModifyStarRocksSecurityGroupReq::validate()
{
}

web::json::value ModifyStarRocksSecurityGroupReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }

    return val;
}
bool ModifyStarRocksSecurityGroupReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("security_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupId(refVal);
        }
    }
    return ok;
}


std::string ModifyStarRocksSecurityGroupReq::getSecurityGroupId() const
{
    return securityGroupId_;
}

void ModifyStarRocksSecurityGroupReq::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool ModifyStarRocksSecurityGroupReq::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void ModifyStarRocksSecurityGroupReq::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

}
}
}
}
}


