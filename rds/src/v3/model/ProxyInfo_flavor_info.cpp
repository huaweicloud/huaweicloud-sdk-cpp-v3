

#include "huaweicloud/rds/v3/model/ProxyInfo_flavor_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ProxyInfo_flavor_info::ProxyInfo_flavor_info()
{
    groupType_ = "";
    groupTypeIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
}

ProxyInfo_flavor_info::~ProxyInfo_flavor_info() = default;

void ProxyInfo_flavor_info::validate()
{
}

web::json::value ProxyInfo_flavor_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupTypeIsSet_) {
        val[utility::conversions::to_string_t("group_type")] = ModelBase::toJson(groupType_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }

    return val;
}
bool ProxyInfo_flavor_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    return ok;
}


std::string ProxyInfo_flavor_info::getGroupType() const
{
    return groupType_;
}

void ProxyInfo_flavor_info::setGroupType(const std::string& value)
{
    groupType_ = value;
    groupTypeIsSet_ = true;
}

bool ProxyInfo_flavor_info::groupTypeIsSet() const
{
    return groupTypeIsSet_;
}

void ProxyInfo_flavor_info::unsetgroupType()
{
    groupTypeIsSet_ = false;
}

std::string ProxyInfo_flavor_info::getCode() const
{
    return code_;
}

void ProxyInfo_flavor_info::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ProxyInfo_flavor_info::codeIsSet() const
{
    return codeIsSet_;
}

void ProxyInfo_flavor_info::unsetcode()
{
    codeIsSet_ = false;
}

}
}
}
}
}


