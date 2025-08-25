

#include "huaweicloud/cce/v3/model/DeleteAutopilotAddonInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeleteAutopilotAddonInstanceRequest::DeleteAutopilotAddonInstanceRequest()
{
    id_ = "";
    idIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

DeleteAutopilotAddonInstanceRequest::~DeleteAutopilotAddonInstanceRequest() = default;

void DeleteAutopilotAddonInstanceRequest::validate()
{
}

web::json::value DeleteAutopilotAddonInstanceRequest::toJson() const
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
bool DeleteAutopilotAddonInstanceRequest::fromJson(const web::json::value& val)
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


std::string DeleteAutopilotAddonInstanceRequest::getId() const
{
    return id_;
}

void DeleteAutopilotAddonInstanceRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteAutopilotAddonInstanceRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteAutopilotAddonInstanceRequest::unsetid()
{
    idIsSet_ = false;
}

std::string DeleteAutopilotAddonInstanceRequest::getClusterId() const
{
    return clusterId_;
}

void DeleteAutopilotAddonInstanceRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool DeleteAutopilotAddonInstanceRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void DeleteAutopilotAddonInstanceRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


