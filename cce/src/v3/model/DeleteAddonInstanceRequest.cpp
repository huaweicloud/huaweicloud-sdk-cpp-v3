

#include "huaweicloud/cce/v3/model/DeleteAddonInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeleteAddonInstanceRequest::DeleteAddonInstanceRequest()
{
    id_ = "";
    idIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

DeleteAddonInstanceRequest::~DeleteAddonInstanceRequest() = default;

void DeleteAddonInstanceRequest::validate()
{
}

web::json::value DeleteAddonInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool DeleteAddonInstanceRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    return ok;
}


std::string DeleteAddonInstanceRequest::getId() const
{
    return id_;
}

void DeleteAddonInstanceRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteAddonInstanceRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteAddonInstanceRequest::unsetid()
{
    idIsSet_ = false;
}

std::string DeleteAddonInstanceRequest::getClusterId() const
{
    return clusterId_;
}

void DeleteAddonInstanceRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool DeleteAddonInstanceRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void DeleteAddonInstanceRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


