

#include "huaweicloud/gaussdbforopengauss/v3/model/OpsKeyViewExecuteNodeResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpsKeyViewExecuteNodeResult::OpsKeyViewExecuteNodeResult()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    nodeName_ = "";
    nodeNameIsSet_ = false;
    role_ = "";
    roleIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    distributedId_ = "";
    distributedIdIsSet_ = false;
    componentId_ = "";
    componentIdIsSet_ = false;
    detail_ = "";
    detailIsSet_ = false;
}

OpsKeyViewExecuteNodeResult::~OpsKeyViewExecuteNodeResult() = default;

void OpsKeyViewExecuteNodeResult::validate()
{
}

web::json::value OpsKeyViewExecuteNodeResult::toJson() const
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
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(distributedIdIsSet_) {
        val[utility::conversions::to_string_t("distributed_id")] = ModelBase::toJson(distributedId_);
    }
    if(componentIdIsSet_) {
        val[utility::conversions::to_string_t("component_id")] = ModelBase::toJson(componentId_);
    }
    if(detailIsSet_) {
        val[utility::conversions::to_string_t("detail")] = ModelBase::toJson(detail_);
    }

    return val;
}
bool OpsKeyViewExecuteNodeResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("distributed_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("distributed_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDistributedId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetail(refVal);
        }
    }
    return ok;
}


std::string OpsKeyViewExecuteNodeResult::getNodeId() const
{
    return nodeId_;
}

void OpsKeyViewExecuteNodeResult::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool OpsKeyViewExecuteNodeResult::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void OpsKeyViewExecuteNodeResult::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string OpsKeyViewExecuteNodeResult::getNodeName() const
{
    return nodeName_;
}

void OpsKeyViewExecuteNodeResult::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool OpsKeyViewExecuteNodeResult::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void OpsKeyViewExecuteNodeResult::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string OpsKeyViewExecuteNodeResult::getRole() const
{
    return role_;
}

void OpsKeyViewExecuteNodeResult::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool OpsKeyViewExecuteNodeResult::roleIsSet() const
{
    return roleIsSet_;
}

void OpsKeyViewExecuteNodeResult::unsetrole()
{
    roleIsSet_ = false;
}

std::string OpsKeyViewExecuteNodeResult::getType() const
{
    return type_;
}

void OpsKeyViewExecuteNodeResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool OpsKeyViewExecuteNodeResult::typeIsSet() const
{
    return typeIsSet_;
}

void OpsKeyViewExecuteNodeResult::unsettype()
{
    typeIsSet_ = false;
}

std::string OpsKeyViewExecuteNodeResult::getDistributedId() const
{
    return distributedId_;
}

void OpsKeyViewExecuteNodeResult::setDistributedId(const std::string& value)
{
    distributedId_ = value;
    distributedIdIsSet_ = true;
}

bool OpsKeyViewExecuteNodeResult::distributedIdIsSet() const
{
    return distributedIdIsSet_;
}

void OpsKeyViewExecuteNodeResult::unsetdistributedId()
{
    distributedIdIsSet_ = false;
}

std::string OpsKeyViewExecuteNodeResult::getComponentId() const
{
    return componentId_;
}

void OpsKeyViewExecuteNodeResult::setComponentId(const std::string& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool OpsKeyViewExecuteNodeResult::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void OpsKeyViewExecuteNodeResult::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

std::string OpsKeyViewExecuteNodeResult::getDetail() const
{
    return detail_;
}

void OpsKeyViewExecuteNodeResult::setDetail(const std::string& value)
{
    detail_ = value;
    detailIsSet_ = true;
}

bool OpsKeyViewExecuteNodeResult::detailIsSet() const
{
    return detailIsSet_;
}

void OpsKeyViewExecuteNodeResult::unsetdetail()
{
    detailIsSet_ = false;
}

}
}
}
}
}


