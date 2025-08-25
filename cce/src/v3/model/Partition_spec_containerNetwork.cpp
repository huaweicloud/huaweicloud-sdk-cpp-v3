

#include "huaweicloud/cce/v3/model/Partition_spec_containerNetwork.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




Partition_spec_containerNetwork::Partition_spec_containerNetwork()
{
    subnetID_ = "";
    subnetIDIsSet_ = false;
}

Partition_spec_containerNetwork::~Partition_spec_containerNetwork() = default;

void Partition_spec_containerNetwork::validate()
{
}

web::json::value Partition_spec_containerNetwork::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIDIsSet_) {
        val[utility::conversions::to_string_t("subnetID")] = ModelBase::toJson(subnetID_);
    }

    return val;
}
bool Partition_spec_containerNetwork::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subnetID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnetID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetID(refVal);
        }
    }
    return ok;
}


std::string Partition_spec_containerNetwork::getSubnetID() const
{
    return subnetID_;
}

void Partition_spec_containerNetwork::setSubnetID(const std::string& value)
{
    subnetID_ = value;
    subnetIDIsSet_ = true;
}

bool Partition_spec_containerNetwork::subnetIDIsSet() const
{
    return subnetIDIsSet_;
}

void Partition_spec_containerNetwork::unsetsubnetID()
{
    subnetIDIsSet_ = false;
}

}
}
}
}
}


