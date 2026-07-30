

#include "huaweicloud/modelarts/v1/model/ServerNetwork_hyper_cluster.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServerNetwork_hyper_cluster::ServerNetwork_hyper_cluster()
{
    id_ = "";
    idIsSet_ = false;
    hyperClusterSubnetId_ = "";
    hyperClusterSubnetIdIsSet_ = false;
}

ServerNetwork_hyper_cluster::~ServerNetwork_hyper_cluster() = default;

void ServerNetwork_hyper_cluster::validate()
{
}

web::json::value ServerNetwork_hyper_cluster::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(hyperClusterSubnetIdIsSet_) {
        val[utility::conversions::to_string_t("hyper_cluster_subnet_id")] = ModelBase::toJson(hyperClusterSubnetId_);
    }

    return val;
}
bool ServerNetwork_hyper_cluster::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("hyper_cluster_subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hyper_cluster_subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHyperClusterSubnetId(refVal);
        }
    }
    return ok;
}


std::string ServerNetwork_hyper_cluster::getId() const
{
    return id_;
}

void ServerNetwork_hyper_cluster::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ServerNetwork_hyper_cluster::idIsSet() const
{
    return idIsSet_;
}

void ServerNetwork_hyper_cluster::unsetid()
{
    idIsSet_ = false;
}

std::string ServerNetwork_hyper_cluster::getHyperClusterSubnetId() const
{
    return hyperClusterSubnetId_;
}

void ServerNetwork_hyper_cluster::setHyperClusterSubnetId(const std::string& value)
{
    hyperClusterSubnetId_ = value;
    hyperClusterSubnetIdIsSet_ = true;
}

bool ServerNetwork_hyper_cluster::hyperClusterSubnetIdIsSet() const
{
    return hyperClusterSubnetIdIsSet_;
}

void ServerNetwork_hyper_cluster::unsethyperClusterSubnetId()
{
    hyperClusterSubnetIdIsSet_ = false;
}

}
}
}
}
}


