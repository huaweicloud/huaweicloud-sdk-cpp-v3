

#include "huaweicloud/modelarts/v1/model/CreateHyperClusterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateHyperClusterResponse::CreateHyperClusterResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    networkInfoIsSet_ = false;
}

CreateHyperClusterResponse::~CreateHyperClusterResponse() = default;

void CreateHyperClusterResponse::validate()
{
}

web::json::value CreateHyperClusterResponse::toJson() const
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
bool CreateHyperClusterResponse::fromJson(const web::json::value& val)
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


std::string CreateHyperClusterResponse::getId() const
{
    return id_;
}

void CreateHyperClusterResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateHyperClusterResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateHyperClusterResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CreateHyperClusterResponse::getName() const
{
    return name_;
}

void CreateHyperClusterResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateHyperClusterResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateHyperClusterResponse::unsetname()
{
    nameIsSet_ = false;
}

std::vector<HyperCluster_network_info>& CreateHyperClusterResponse::getNetworkInfo()
{
    return networkInfo_;
}

void CreateHyperClusterResponse::setNetworkInfo(const std::vector<HyperCluster_network_info>& value)
{
    networkInfo_ = value;
    networkInfoIsSet_ = true;
}

bool CreateHyperClusterResponse::networkInfoIsSet() const
{
    return networkInfoIsSet_;
}

void CreateHyperClusterResponse::unsetnetworkInfo()
{
    networkInfoIsSet_ = false;
}

}
}
}
}
}


