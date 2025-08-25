

#include "huaweicloud/cpcs/v1/model/DisassociateAppsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




DisassociateAppsResponse::DisassociateAppsResponse()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    appIdIsSet_ = false;
}

DisassociateAppsResponse::~DisassociateAppsResponse() = default;

void DisassociateAppsResponse::validate()
{
}

web::json::value DisassociateAppsResponse::toJson() const
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
bool DisassociateAppsResponse::fromJson(const web::json::value& val)
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
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    return ok;
}


std::string DisassociateAppsResponse::getClusterId() const
{
    return clusterId_;
}

void DisassociateAppsResponse::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool DisassociateAppsResponse::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void DisassociateAppsResponse::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::vector<std::string>& DisassociateAppsResponse::getAppId()
{
    return appId_;
}

void DisassociateAppsResponse::setAppId(const std::vector<std::string>& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool DisassociateAppsResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void DisassociateAppsResponse::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}


