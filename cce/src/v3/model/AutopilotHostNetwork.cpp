

#include "huaweicloud/cce/v3/model/AutopilotHostNetwork.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AutopilotHostNetwork::AutopilotHostNetwork()
{
    vpc_ = "";
    vpcIsSet_ = false;
    subnet_ = "";
    subnetIsSet_ = false;
}

AutopilotHostNetwork::~AutopilotHostNetwork() = default;

void AutopilotHostNetwork::validate()
{
}

web::json::value AutopilotHostNetwork::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIsSet_) {
        val[utility::conversions::to_string_t("vpc")] = ModelBase::toJson(vpc_);
    }
    if(subnetIsSet_) {
        val[utility::conversions::to_string_t("subnet")] = ModelBase::toJson(subnet_);
    }

    return val;
}
bool AutopilotHostNetwork::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vpc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnet(refVal);
        }
    }
    return ok;
}


std::string AutopilotHostNetwork::getVpc() const
{
    return vpc_;
}

void AutopilotHostNetwork::setVpc(const std::string& value)
{
    vpc_ = value;
    vpcIsSet_ = true;
}

bool AutopilotHostNetwork::vpcIsSet() const
{
    return vpcIsSet_;
}

void AutopilotHostNetwork::unsetvpc()
{
    vpcIsSet_ = false;
}

std::string AutopilotHostNetwork::getSubnet() const
{
    return subnet_;
}

void AutopilotHostNetwork::setSubnet(const std::string& value)
{
    subnet_ = value;
    subnetIsSet_ = true;
}

bool AutopilotHostNetwork::subnetIsSet() const
{
    return subnetIsSet_;
}

void AutopilotHostNetwork::unsetsubnet()
{
    subnetIsSet_ = false;
}

}
}
}
}
}


