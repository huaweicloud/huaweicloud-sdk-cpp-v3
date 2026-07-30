

#include "huaweicloud/modelarts/v1/model/ResetNodesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ResetNodesRequest::ResetNodesRequest()
{
    nodeNamesIsSet_ = false;
    rollingConfigIsSet_ = false;
    nodeConfigIsSet_ = false;
}

ResetNodesRequest::~ResetNodesRequest() = default;

void ResetNodesRequest::validate()
{
}

web::json::value ResetNodesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeNamesIsSet_) {
        val[utility::conversions::to_string_t("nodeNames")] = ModelBase::toJson(nodeNames_);
    }
    if(rollingConfigIsSet_) {
        val[utility::conversions::to_string_t("rollingConfig")] = ModelBase::toJson(rollingConfig_);
    }
    if(nodeConfigIsSet_) {
        val[utility::conversions::to_string_t("nodeConfig")] = ModelBase::toJson(nodeConfig_);
    }

    return val;
}
bool ResetNodesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nodeNames"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeNames"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rollingConfig"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rollingConfig"));
        if(!fieldValue.is_null())
        {
            ResetNodesRequest_rollingConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRollingConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodeConfig"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeConfig"));
        if(!fieldValue.is_null())
        {
            ResetNodesRequest_nodeConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeConfig(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ResetNodesRequest::getNodeNames()
{
    return nodeNames_;
}

void ResetNodesRequest::setNodeNames(const std::vector<std::string>& value)
{
    nodeNames_ = value;
    nodeNamesIsSet_ = true;
}

bool ResetNodesRequest::nodeNamesIsSet() const
{
    return nodeNamesIsSet_;
}

void ResetNodesRequest::unsetnodeNames()
{
    nodeNamesIsSet_ = false;
}

ResetNodesRequest_rollingConfig ResetNodesRequest::getRollingConfig() const
{
    return rollingConfig_;
}

void ResetNodesRequest::setRollingConfig(const ResetNodesRequest_rollingConfig& value)
{
    rollingConfig_ = value;
    rollingConfigIsSet_ = true;
}

bool ResetNodesRequest::rollingConfigIsSet() const
{
    return rollingConfigIsSet_;
}

void ResetNodesRequest::unsetrollingConfig()
{
    rollingConfigIsSet_ = false;
}

ResetNodesRequest_nodeConfig ResetNodesRequest::getNodeConfig() const
{
    return nodeConfig_;
}

void ResetNodesRequest::setNodeConfig(const ResetNodesRequest_nodeConfig& value)
{
    nodeConfig_ = value;
    nodeConfigIsSet_ = true;
}

bool ResetNodesRequest::nodeConfigIsSet() const
{
    return nodeConfigIsSet_;
}

void ResetNodesRequest::unsetnodeConfig()
{
    nodeConfigIsSet_ = false;
}

}
}
}
}
}


