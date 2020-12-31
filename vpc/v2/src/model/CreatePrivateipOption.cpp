

#include "huaweicloud/vpc/model/CreatePrivateipOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreatePrivateipOption::CreatePrivateipOption()
{
    subnetId_ = "";
    subnetIdIsSet_ = false;
    ipAddress_ = "";
    ipAddressIsSet_ = false;
}

CreatePrivateipOption::~CreatePrivateipOption() = default;

void CreatePrivateipOption::validate()
{
}

web::json::value CreatePrivateipOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ip_address")] = ModelBase::toJson(ipAddress_);
    }

    return val;
}

bool CreatePrivateipOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpAddress(refVal);
        }
    }
    return ok;
}


std::string CreatePrivateipOption::getSubnetId() const
{
    return subnetId_;
}

void CreatePrivateipOption::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool CreatePrivateipOption::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void CreatePrivateipOption::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string CreatePrivateipOption::getIpAddress() const
{
    return ipAddress_;
}

void CreatePrivateipOption::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool CreatePrivateipOption::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void CreatePrivateipOption::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

}
}
}
}
}


