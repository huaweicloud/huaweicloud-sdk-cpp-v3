

#include "huaweicloud/gaussdbfornosql/v3/model/ModifyPublicIpRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ModifyPublicIpRequest::ModifyPublicIpRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyPublicIpRequest::~ModifyPublicIpRequest() = default;

void ModifyPublicIpRequest::validate()
{
}

web::json::value ModifyPublicIpRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ModifyPublicIpRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModifyPublicIpRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ModifyPublicIpRequest::getInstanceId() const
{
    return instanceId_;
}

void ModifyPublicIpRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ModifyPublicIpRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ModifyPublicIpRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ModifyPublicIpRequest::getNodeId() const
{
    return nodeId_;
}

void ModifyPublicIpRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ModifyPublicIpRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ModifyPublicIpRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

ModifyPublicIpRequestBody ModifyPublicIpRequest::getBody() const
{
    return body_;
}

void ModifyPublicIpRequest::setBody(const ModifyPublicIpRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyPublicIpRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyPublicIpRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


