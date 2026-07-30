

#include "huaweicloud/modelarts/v1/model/HyperCluster.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




HyperCluster::HyperCluster()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    networkInfoIsSet_ = false;
}

HyperCluster::~HyperCluster() = default;

void HyperCluster::validate()
{
}

web::json::value HyperCluster::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(networkInfoIsSet_) {
        val[utility::conversions::to_string_t("network_info")] = ModelBase::toJson(networkInfo_);
    }

    return val;
}
bool HyperCluster::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("network_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_info"));
        if(!fieldValue.is_null())
        {
            std::vector<HyperCluster_network_info> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkInfo(refVal);
        }
    }
    return ok;
}


std::string HyperCluster::getId() const
{
    return id_;
}

void HyperCluster::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool HyperCluster::idIsSet() const
{
    return idIsSet_;
}

void HyperCluster::unsetid()
{
    idIsSet_ = false;
}

std::string HyperCluster::getName() const
{
    return name_;
}

void HyperCluster::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool HyperCluster::nameIsSet() const
{
    return nameIsSet_;
}

void HyperCluster::unsetname()
{
    nameIsSet_ = false;
}

std::vector<HyperCluster_network_info>& HyperCluster::getNetworkInfo()
{
    return networkInfo_;
}

void HyperCluster::setNetworkInfo(const std::vector<HyperCluster_network_info>& value)
{
    networkInfo_ = value;
    networkInfoIsSet_ = true;
}

bool HyperCluster::networkInfoIsSet() const
{
    return networkInfoIsSet_;
}

void HyperCluster::unsetnetworkInfo()
{
    networkInfoIsSet_ = false;
}

}
}
}
}
}


