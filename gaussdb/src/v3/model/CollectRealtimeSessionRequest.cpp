

#include "huaweicloud/gaussdb/v3/model/CollectRealtimeSessionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CollectRealtimeSessionRequest::CollectRealtimeSessionRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CollectRealtimeSessionRequest::~CollectRealtimeSessionRequest() = default;

void CollectRealtimeSessionRequest::validate()
{
}

web::json::value CollectRealtimeSessionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CollectRealtimeSessionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RealtimeSessionRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CollectRealtimeSessionRequest::getInstanceId() const
{
    return instanceId_;
}

void CollectRealtimeSessionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CollectRealtimeSessionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CollectRealtimeSessionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CollectRealtimeSessionRequest::getNodeId() const
{
    return nodeId_;
}

void CollectRealtimeSessionRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool CollectRealtimeSessionRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void CollectRealtimeSessionRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string CollectRealtimeSessionRequest::getXLanguage() const
{
    return xLanguage_;
}

void CollectRealtimeSessionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CollectRealtimeSessionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CollectRealtimeSessionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

RealtimeSessionRequest CollectRealtimeSessionRequest::getBody() const
{
    return body_;
}

void CollectRealtimeSessionRequest::setBody(const RealtimeSessionRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CollectRealtimeSessionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CollectRealtimeSessionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


