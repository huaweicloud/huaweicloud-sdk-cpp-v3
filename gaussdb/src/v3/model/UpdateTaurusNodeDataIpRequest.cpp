

#include "huaweicloud/gaussdb/v3/model/UpdateTaurusNodeDataIpRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateTaurusNodeDataIpRequest::UpdateTaurusNodeDataIpRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTaurusNodeDataIpRequest::~UpdateTaurusNodeDataIpRequest() = default;

void UpdateTaurusNodeDataIpRequest::validate()
{
}

web::json::value UpdateTaurusNodeDataIpRequest::toJson() const
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
bool UpdateTaurusNodeDataIpRequest::fromJson(const web::json::value& val)
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
            ModifyNodeDataIpRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateTaurusNodeDataIpRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateTaurusNodeDataIpRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateTaurusNodeDataIpRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateTaurusNodeDataIpRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateTaurusNodeDataIpRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateTaurusNodeDataIpRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateTaurusNodeDataIpRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateTaurusNodeDataIpRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateTaurusNodeDataIpRequest::getNodeId() const
{
    return nodeId_;
}

void UpdateTaurusNodeDataIpRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool UpdateTaurusNodeDataIpRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void UpdateTaurusNodeDataIpRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

ModifyNodeDataIpRequest UpdateTaurusNodeDataIpRequest::getBody() const
{
    return body_;
}

void UpdateTaurusNodeDataIpRequest::setBody(const ModifyNodeDataIpRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTaurusNodeDataIpRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTaurusNodeDataIpRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


