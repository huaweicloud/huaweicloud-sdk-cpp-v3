

#include "huaweicloud/modelarts/v1/model/HyperCluster_network_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




HyperCluster_network_info::HyperCluster_network_info()
{
    hyperClusterSubnetId_ = "";
    hyperClusterSubnetIdIsSet_ = false;
    isDefault_ = false;
    isDefaultIsSet_ = false;
}

HyperCluster_network_info::~HyperCluster_network_info() = default;

void HyperCluster_network_info::validate()
{
}

web::json::value HyperCluster_network_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hyperClusterSubnetIdIsSet_) {
        val[utility::conversions::to_string_t("hyper_cluster_subnet_id")] = ModelBase::toJson(hyperClusterSubnetId_);
    }
    if(isDefaultIsSet_) {
        val[utility::conversions::to_string_t("is_default")] = ModelBase::toJson(isDefault_);
    }

    return val;
}
bool HyperCluster_network_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hyper_cluster_subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hyper_cluster_subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHyperClusterSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_default"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDefault(refVal);
        }
    }
    return ok;
}


std::string HyperCluster_network_info::getHyperClusterSubnetId() const
{
    return hyperClusterSubnetId_;
}

void HyperCluster_network_info::setHyperClusterSubnetId(const std::string& value)
{
    hyperClusterSubnetId_ = value;
    hyperClusterSubnetIdIsSet_ = true;
}

bool HyperCluster_network_info::hyperClusterSubnetIdIsSet() const
{
    return hyperClusterSubnetIdIsSet_;
}

void HyperCluster_network_info::unsethyperClusterSubnetId()
{
    hyperClusterSubnetIdIsSet_ = false;
}

bool HyperCluster_network_info::isIsDefault() const
{
    return isDefault_;
}

void HyperCluster_network_info::setIsDefault(bool value)
{
    isDefault_ = value;
    isDefaultIsSet_ = true;
}

bool HyperCluster_network_info::isDefaultIsSet() const
{
    return isDefaultIsSet_;
}

void HyperCluster_network_info::unsetisDefault()
{
    isDefaultIsSet_ = false;
}

}
}
}
}
}


