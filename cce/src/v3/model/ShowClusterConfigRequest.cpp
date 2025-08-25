

#include "huaweicloud/cce/v3/model/ShowClusterConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowClusterConfigRequest::ShowClusterConfigRequest()
{
    type_ = "";
    typeIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ShowClusterConfigRequest::~ShowClusterConfigRequest() = default;

void ShowClusterConfigRequest::validate()
{
}

web::json::value ShowClusterConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool ShowClusterConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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


std::string ShowClusterConfigRequest::getType() const
{
    return type_;
}

void ShowClusterConfigRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowClusterConfigRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ShowClusterConfigRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowClusterConfigRequest::getClusterId() const
{
    return clusterId_;
}

void ShowClusterConfigRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowClusterConfigRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowClusterConfigRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


