

#include "huaweicloud/cce/v3/model/Clusters.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




Clusters::Clusters()
{
    name_ = "";
    nameIsSet_ = false;
    clusterIsSet_ = false;
}

Clusters::~Clusters() = default;

void Clusters::validate()
{
}

web::json::value Clusters::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(clusterIsSet_) {
        val[utility::conversions::to_string_t("cluster")] = ModelBase::toJson(cluster_);
    }

    return val;
}
bool Clusters::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster"));
        if(!fieldValue.is_null())
        {
            ClusterCert refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCluster(refVal);
        }
    }
    return ok;
}


std::string Clusters::getName() const
{
    return name_;
}

void Clusters::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Clusters::nameIsSet() const
{
    return nameIsSet_;
}

void Clusters::unsetname()
{
    nameIsSet_ = false;
}

ClusterCert Clusters::getCluster() const
{
    return cluster_;
}

void Clusters::setCluster(const ClusterCert& value)
{
    cluster_ = value;
    clusterIsSet_ = true;
}

bool Clusters::clusterIsSet() const
{
    return clusterIsSet_;
}

void Clusters::unsetcluster()
{
    clusterIsSet_ = false;
}

}
}
}
}
}


