

#include "huaweicloud/gaussdb/v3/model/ModifyNodePriorityRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyNodePriorityRequest::ModifyNodePriorityRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyNodePriorityRequest::~ModifyNodePriorityRequest() = default;

void ModifyNodePriorityRequest::validate()
{
}

web::json::value ModifyNodePriorityRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
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
bool ModifyNodePriorityRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
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
            ModifyNodePriorityRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyNodePriorityRequest::getXLanguage() const
{
    return xLanguage_;
}

void ModifyNodePriorityRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ModifyNodePriorityRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ModifyNodePriorityRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ModifyNodePriorityRequest::getInstanceId() const
{
    return instanceId_;
}

void ModifyNodePriorityRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ModifyNodePriorityRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ModifyNodePriorityRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ModifyNodePriorityRequest::getNodeId() const
{
    return nodeId_;
}

void ModifyNodePriorityRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ModifyNodePriorityRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ModifyNodePriorityRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

ModifyNodePriorityRequestBody ModifyNodePriorityRequest::getBody() const
{
    return body_;
}

void ModifyNodePriorityRequest::setBody(const ModifyNodePriorityRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyNodePriorityRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyNodePriorityRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


