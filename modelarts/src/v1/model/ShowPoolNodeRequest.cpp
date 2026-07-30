

#include "huaweicloud/modelarts/v1/model/ShowPoolNodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowPoolNodeRequest::ShowPoolNodeRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
    nodeName_ = "";
    nodeNameIsSet_ = false;
}

ShowPoolNodeRequest::~ShowPoolNodeRequest() = default;

void ShowPoolNodeRequest::validate()
{
}

web::json::value ShowPoolNodeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(poolNameIsSet_) {
        val[utility::conversions::to_string_t("pool_name")] = ModelBase::toJson(poolName_);
    }
    if(nodeNameIsSet_) {
        val[utility::conversions::to_string_t("node_name")] = ModelBase::toJson(nodeName_);
    }

    return val;
}
bool ShowPoolNodeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pool_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeName(refVal);
        }
    }
    return ok;
}


std::string ShowPoolNodeRequest::getPoolName() const
{
    return poolName_;
}

void ShowPoolNodeRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool ShowPoolNodeRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void ShowPoolNodeRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

std::string ShowPoolNodeRequest::getNodeName() const
{
    return nodeName_;
}

void ShowPoolNodeRequest::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool ShowPoolNodeRequest::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void ShowPoolNodeRequest::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

}
}
}
}
}


