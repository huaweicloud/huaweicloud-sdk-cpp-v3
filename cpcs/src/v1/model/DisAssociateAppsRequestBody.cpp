

#include "huaweicloud/cpcs/v1/model/DisAssociateAppsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




DisAssociateAppsRequestBody::DisAssociateAppsRequestBody()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    appIdsIsSet_ = false;
}

DisAssociateAppsRequestBody::~DisAssociateAppsRequestBody() = default;

void DisAssociateAppsRequestBody::validate()
{
}

web::json::value DisAssociateAppsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(appIdsIsSet_) {
        val[utility::conversions::to_string_t("app_ids")] = ModelBase::toJson(appIds_);
    }

    return val;
}
bool DisAssociateAppsRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("app_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppIds(refVal);
        }
    }
    return ok;
}


std::string DisAssociateAppsRequestBody::getClusterId() const
{
    return clusterId_;
}

void DisAssociateAppsRequestBody::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool DisAssociateAppsRequestBody::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void DisAssociateAppsRequestBody::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::vector<std::string>& DisAssociateAppsRequestBody::getAppIds()
{
    return appIds_;
}

void DisAssociateAppsRequestBody::setAppIds(const std::vector<std::string>& value)
{
    appIds_ = value;
    appIdsIsSet_ = true;
}

bool DisAssociateAppsRequestBody::appIdsIsSet() const
{
    return appIdsIsSet_;
}

void DisAssociateAppsRequestBody::unsetappIds()
{
    appIdsIsSet_ = false;
}

}
}
}
}
}


