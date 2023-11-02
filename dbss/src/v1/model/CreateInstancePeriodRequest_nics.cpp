

#include "huaweicloud/dbss/v1/model/CreateInstancePeriodRequest_nics.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CreateInstancePeriodRequest_nics::CreateInstancePeriodRequest_nics()
{
    subnetId_ = "";
    subnetIdIsSet_ = false;
    ipAddress_ = "";
    ipAddressIsSet_ = false;
}

CreateInstancePeriodRequest_nics::~CreateInstancePeriodRequest_nics() = default;

void CreateInstancePeriodRequest_nics::validate()
{
}

web::json::value CreateInstancePeriodRequest_nics::toJson() const
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
bool CreateInstancePeriodRequest_nics::fromJson(const web::json::value& val)
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


std::string CreateInstancePeriodRequest_nics::getSubnetId() const
{
    return subnetId_;
}

void CreateInstancePeriodRequest_nics::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool CreateInstancePeriodRequest_nics::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void CreateInstancePeriodRequest_nics::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string CreateInstancePeriodRequest_nics::getIpAddress() const
{
    return ipAddress_;
}

void CreateInstancePeriodRequest_nics::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool CreateInstancePeriodRequest_nics::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void CreateInstancePeriodRequest_nics::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

}
}
}
}
}


