

#include "huaweicloud/gaussdbforopengauss/v3/model/KillSessionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




KillSessionRequestBody::KillSessionRequestBody()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    componentId_ = "";
    componentIdIsSet_ = false;
    sessionIdsIsSet_ = false;
}

KillSessionRequestBody::~KillSessionRequestBody() = default;

void KillSessionRequestBody::validate()
{
}

web::json::value KillSessionRequestBody::toJson() const
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
    if(sessionIdsIsSet_) {
        val[utility::conversions::to_string_t("session_ids")] = ModelBase::toJson(sessionIds_);
    }

    return val;
}
bool KillSessionRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("session_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionIds(refVal);
        }
    }
    return ok;
}


std::string KillSessionRequestBody::getInstanceId() const
{
    return instanceId_;
}

void KillSessionRequestBody::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool KillSessionRequestBody::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void KillSessionRequestBody::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string KillSessionRequestBody::getNodeId() const
{
    return nodeId_;
}

void KillSessionRequestBody::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool KillSessionRequestBody::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void KillSessionRequestBody::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string KillSessionRequestBody::getComponentId() const
{
    return componentId_;
}

void KillSessionRequestBody::setComponentId(const std::string& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool KillSessionRequestBody::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void KillSessionRequestBody::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

std::vector<std::string>& KillSessionRequestBody::getSessionIds()
{
    return sessionIds_;
}

void KillSessionRequestBody::setSessionIds(const std::vector<std::string>& value)
{
    sessionIds_ = value;
    sessionIdsIsSet_ = true;
}

bool KillSessionRequestBody::sessionIdsIsSet() const
{
    return sessionIdsIsSet_;
}

void KillSessionRequestBody::unsetsessionIds()
{
    sessionIdsIsSet_ = false;
}

}
}
}
}
}


