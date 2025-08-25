

#include "huaweicloud/cce/v3/model/ShowAddonInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowAddonInstanceRequest::ShowAddonInstanceRequest()
{
    id_ = "";
    idIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ShowAddonInstanceRequest::~ShowAddonInstanceRequest() = default;

void ShowAddonInstanceRequest::validate()
{
}

web::json::value ShowAddonInstanceRequest::toJson() const
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
bool ShowAddonInstanceRequest::fromJson(const web::json::value& val)
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


std::string ShowAddonInstanceRequest::getId() const
{
    return id_;
}

void ShowAddonInstanceRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowAddonInstanceRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowAddonInstanceRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ShowAddonInstanceRequest::getClusterId() const
{
    return clusterId_;
}

void ShowAddonInstanceRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowAddonInstanceRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowAddonInstanceRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


