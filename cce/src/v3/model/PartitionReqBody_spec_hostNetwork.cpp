

#include "huaweicloud/cce/v3/model/PartitionReqBody_spec_hostNetwork.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PartitionReqBody_spec_hostNetwork::PartitionReqBody_spec_hostNetwork()
{
    subnetID_ = "";
    subnetIDIsSet_ = false;
}

PartitionReqBody_spec_hostNetwork::~PartitionReqBody_spec_hostNetwork() = default;

void PartitionReqBody_spec_hostNetwork::validate()
{
}

web::json::value PartitionReqBody_spec_hostNetwork::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIDIsSet_) {
        val[utility::conversions::to_string_t("subnetID")] = ModelBase::toJson(subnetID_);
    }

    return val;
}
bool PartitionReqBody_spec_hostNetwork::fromJson(const web::json::value& val)
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


std::string PartitionReqBody_spec_hostNetwork::getSubnetID() const
{
    return subnetID_;
}

void PartitionReqBody_spec_hostNetwork::setSubnetID(const std::string& value)
{
    subnetID_ = value;
    subnetIDIsSet_ = true;
}

bool PartitionReqBody_spec_hostNetwork::subnetIDIsSet() const
{
    return subnetIDIsSet_;
}

void PartitionReqBody_spec_hostNetwork::unsetsubnetID()
{
    subnetIDIsSet_ = false;
}

}
}
}
}
}


