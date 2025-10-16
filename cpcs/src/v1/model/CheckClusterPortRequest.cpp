

#include "huaweicloud/cpcs/v1/model/CheckClusterPortRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




CheckClusterPortRequest::CheckClusterPortRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

CheckClusterPortRequest::~CheckClusterPortRequest() = default;

void CheckClusterPortRequest::validate()
{
}

web::json::value CheckClusterPortRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool CheckClusterPortRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string CheckClusterPortRequest::getClusterId() const
{
    return clusterId_;
}

void CheckClusterPortRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CheckClusterPortRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CheckClusterPortRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string CheckClusterPortRequest::getId() const
{
    return id_;
}

void CheckClusterPortRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CheckClusterPortRequest::idIsSet() const
{
    return idIsSet_;
}

void CheckClusterPortRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


