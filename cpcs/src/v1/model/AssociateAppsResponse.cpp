

#include "huaweicloud/cpcs/v1/model/AssociateAppsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




AssociateAppsResponse::AssociateAppsResponse()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
}

AssociateAppsResponse::~AssociateAppsResponse() = default;

void AssociateAppsResponse::validate()
{
}

web::json::value AssociateAppsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }

    return val;
}
bool AssociateAppsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    return ok;
}


std::string AssociateAppsResponse::getClusterId() const
{
    return clusterId_;
}

void AssociateAppsResponse::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool AssociateAppsResponse::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void AssociateAppsResponse::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string AssociateAppsResponse::getAppId() const
{
    return appId_;
}

void AssociateAppsResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool AssociateAppsResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void AssociateAppsResponse::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}


