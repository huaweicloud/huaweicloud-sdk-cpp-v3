

#include "huaweicloud/gaussdbforopengauss/v3/model/DnComponentInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DnComponentInfoResult::DnComponentInfoResult()
{
    nodeName_ = "";
    nodeNameIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    componentId_ = "";
    componentIdIsSet_ = false;
    role_ = "";
    roleIsSet_ = false;
}

DnComponentInfoResult::~DnComponentInfoResult() = default;

void DnComponentInfoResult::validate()
{
}

web::json::value DnComponentInfoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeNameIsSet_) {
        val[utility::conversions::to_string_t("node_name")] = ModelBase::toJson(nodeName_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(componentIdIsSet_) {
        val[utility::conversions::to_string_t("component_id")] = ModelBase::toJson(componentId_);
    }
    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }

    return val;
}
bool DnComponentInfoResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("component_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("component_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRole(refVal);
        }
    }
    return ok;
}


std::string DnComponentInfoResult::getNodeName() const
{
    return nodeName_;
}

void DnComponentInfoResult::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool DnComponentInfoResult::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void DnComponentInfoResult::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string DnComponentInfoResult::getNodeId() const
{
    return nodeId_;
}

void DnComponentInfoResult::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool DnComponentInfoResult::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void DnComponentInfoResult::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string DnComponentInfoResult::getComponentId() const
{
    return componentId_;
}

void DnComponentInfoResult::setComponentId(const std::string& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool DnComponentInfoResult::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void DnComponentInfoResult::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

std::string DnComponentInfoResult::getRole() const
{
    return role_;
}

void DnComponentInfoResult::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool DnComponentInfoResult::roleIsSet() const
{
    return roleIsSet_;
}

void DnComponentInfoResult::unsetrole()
{
    roleIsSet_ = false;
}

}
}
}
}
}


