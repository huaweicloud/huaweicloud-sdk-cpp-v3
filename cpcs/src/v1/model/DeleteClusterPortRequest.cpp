

#include "huaweicloud/cpcs/v1/model/DeleteClusterPortRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




DeleteClusterPortRequest::DeleteClusterPortRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

DeleteClusterPortRequest::~DeleteClusterPortRequest() = default;

void DeleteClusterPortRequest::validate()
{
}

web::json::value DeleteClusterPortRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool DeleteClusterPortRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string DeleteClusterPortRequest::getClusterId() const
{
    return clusterId_;
}

void DeleteClusterPortRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool DeleteClusterPortRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void DeleteClusterPortRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string DeleteClusterPortRequest::getId() const
{
    return id_;
}

void DeleteClusterPortRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteClusterPortRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteClusterPortRequest::unsetid()
{
    idIsSet_ = false;
}

std::string DeleteClusterPortRequest::getType() const
{
    return type_;
}

void DeleteClusterPortRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DeleteClusterPortRequest::typeIsSet() const
{
    return typeIsSet_;
}

void DeleteClusterPortRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


