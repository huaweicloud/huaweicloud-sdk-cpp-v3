

#include "huaweicloud/gaussdbforopengauss/v3/model/ExcuteSQLNodeInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExcuteSQLNodeInfoResult::ExcuteSQLNodeInfoResult()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    nodeName_ = "";
    nodeNameIsSet_ = false;
    role_ = "";
    roleIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    componentType_ = "";
    componentTypeIsSet_ = false;
}

ExcuteSQLNodeInfoResult::~ExcuteSQLNodeInfoResult() = default;

void ExcuteSQLNodeInfoResult::validate()
{
}

web::json::value ExcuteSQLNodeInfoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(nodeNameIsSet_) {
        val[utility::conversions::to_string_t("node_name")] = ModelBase::toJson(nodeName_);
    }
    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(componentTypeIsSet_) {
        val[utility::conversions::to_string_t("component_type")] = ModelBase::toJson(componentType_);
    }

    return val;
}
bool ExcuteSQLNodeInfoResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("component_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("component_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponentType(refVal);
        }
    }
    return ok;
}


std::string ExcuteSQLNodeInfoResult::getNodeId() const
{
    return nodeId_;
}

void ExcuteSQLNodeInfoResult::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ExcuteSQLNodeInfoResult::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ExcuteSQLNodeInfoResult::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ExcuteSQLNodeInfoResult::getNodeName() const
{
    return nodeName_;
}

void ExcuteSQLNodeInfoResult::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool ExcuteSQLNodeInfoResult::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void ExcuteSQLNodeInfoResult::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string ExcuteSQLNodeInfoResult::getRole() const
{
    return role_;
}

void ExcuteSQLNodeInfoResult::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool ExcuteSQLNodeInfoResult::roleIsSet() const
{
    return roleIsSet_;
}

void ExcuteSQLNodeInfoResult::unsetrole()
{
    roleIsSet_ = false;
}

std::string ExcuteSQLNodeInfoResult::getInstanceId() const
{
    return instanceId_;
}

void ExcuteSQLNodeInfoResult::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ExcuteSQLNodeInfoResult::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ExcuteSQLNodeInfoResult::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ExcuteSQLNodeInfoResult::getComponentType() const
{
    return componentType_;
}

void ExcuteSQLNodeInfoResult::setComponentType(const std::string& value)
{
    componentType_ = value;
    componentTypeIsSet_ = true;
}

bool ExcuteSQLNodeInfoResult::componentTypeIsSet() const
{
    return componentTypeIsSet_;
}

void ExcuteSQLNodeInfoResult::unsetcomponentType()
{
    componentTypeIsSet_ = false;
}

}
}
}
}
}


