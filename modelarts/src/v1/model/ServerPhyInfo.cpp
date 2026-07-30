

#include "huaweicloud/modelarts/v1/model/ServerPhyInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServerPhyInfo::ServerPhyInfo()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    networkNodesIsSet_ = false;
}

ServerPhyInfo::~ServerPhyInfo() = default;

void ServerPhyInfo::validate()
{
}

web::json::value ServerPhyInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(networkNodesIsSet_) {
        val[utility::conversions::to_string_t("network_nodes")] = ModelBase::toJson(networkNodes_);
    }

    return val;
}
bool ServerPhyInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("network_nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_nodes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkNodes(refVal);
        }
    }
    return ok;
}


std::string ServerPhyInfo::getResourceId() const
{
    return resourceId_;
}

void ServerPhyInfo::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ServerPhyInfo::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ServerPhyInfo::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::vector<std::string>& ServerPhyInfo::getNetworkNodes()
{
    return networkNodes_;
}

void ServerPhyInfo::setNetworkNodes(const std::vector<std::string>& value)
{
    networkNodes_ = value;
    networkNodesIsSet_ = true;
}

bool ServerPhyInfo::networkNodesIsSet() const
{
    return networkNodesIsSet_;
}

void ServerPhyInfo::unsetnetworkNodes()
{
    networkNodesIsSet_ = false;
}

}
}
}
}
}


