

#include "huaweicloud/gaussdb/v3/model/RestartGaussMySqlNodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RestartGaussMySqlNodeRequest::RestartGaussMySqlNodeRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    bodyIsSet_ = false;
}

RestartGaussMySqlNodeRequest::~RestartGaussMySqlNodeRequest() = default;

void RestartGaussMySqlNodeRequest::validate()
{
}

web::json::value RestartGaussMySqlNodeRequest::toJson() const
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
bool RestartGaussMySqlNodeRequest::fromJson(const web::json::value& val)
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
            RestartNodeRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RestartGaussMySqlNodeRequest::getXLanguage() const
{
    return xLanguage_;
}

void RestartGaussMySqlNodeRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool RestartGaussMySqlNodeRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void RestartGaussMySqlNodeRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string RestartGaussMySqlNodeRequest::getInstanceId() const
{
    return instanceId_;
}

void RestartGaussMySqlNodeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RestartGaussMySqlNodeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RestartGaussMySqlNodeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string RestartGaussMySqlNodeRequest::getNodeId() const
{
    return nodeId_;
}

void RestartGaussMySqlNodeRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool RestartGaussMySqlNodeRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void RestartGaussMySqlNodeRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

RestartNodeRequest RestartGaussMySqlNodeRequest::getBody() const
{
    return body_;
}

void RestartGaussMySqlNodeRequest::setBody(const RestartNodeRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RestartGaussMySqlNodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RestartGaussMySqlNodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


