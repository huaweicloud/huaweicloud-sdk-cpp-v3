

#include "huaweicloud/gaussdbforopengauss/v3/model/BaseOpsKeyViewRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BaseOpsKeyViewRequestBody::BaseOpsKeyViewRequestBody()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    componentId_ = "";
    componentIdIsSet_ = false;
}

BaseOpsKeyViewRequestBody::~BaseOpsKeyViewRequestBody() = default;

void BaseOpsKeyViewRequestBody::validate()
{
}

web::json::value BaseOpsKeyViewRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(componentIdIsSet_) {
        val[utility::conversions::to_string_t("component_id")] = ModelBase::toJson(componentId_);
    }

    return val;
}
bool BaseOpsKeyViewRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    return ok;
}


std::string BaseOpsKeyViewRequestBody::getInstanceId() const
{
    return instanceId_;
}

void BaseOpsKeyViewRequestBody::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BaseOpsKeyViewRequestBody::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BaseOpsKeyViewRequestBody::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string BaseOpsKeyViewRequestBody::getNodeId() const
{
    return nodeId_;
}

void BaseOpsKeyViewRequestBody::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool BaseOpsKeyViewRequestBody::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void BaseOpsKeyViewRequestBody::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string BaseOpsKeyViewRequestBody::getComponentId() const
{
    return componentId_;
}

void BaseOpsKeyViewRequestBody::setComponentId(const std::string& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool BaseOpsKeyViewRequestBody::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void BaseOpsKeyViewRequestBody::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

}
}
}
}
}


