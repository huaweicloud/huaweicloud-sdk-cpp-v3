

#include "huaweicloud/cpcs/v1/model/AssociateAppsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




AssociateAppsRequestBody::AssociateAppsRequestBody()
{
    appId_ = "";
    appIdIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

AssociateAppsRequestBody::~AssociateAppsRequestBody() = default;

void AssociateAppsRequestBody::validate()
{
}

web::json::value AssociateAppsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool AssociateAppsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
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


std::string AssociateAppsRequestBody::getAppId() const
{
    return appId_;
}

void AssociateAppsRequestBody::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool AssociateAppsRequestBody::appIdIsSet() const
{
    return appIdIsSet_;
}

void AssociateAppsRequestBody::unsetappId()
{
    appIdIsSet_ = false;
}

std::string AssociateAppsRequestBody::getClusterId() const
{
    return clusterId_;
}

void AssociateAppsRequestBody::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool AssociateAppsRequestBody::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void AssociateAppsRequestBody::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


