

#include "huaweicloud/gaussdb/v3/model/DeleteTaurusDbNodeProcessesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteTaurusDbNodeProcessesRequest::DeleteTaurusDbNodeProcessesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteTaurusDbNodeProcessesRequest::~DeleteTaurusDbNodeProcessesRequest() = default;

void DeleteTaurusDbNodeProcessesRequest::validate()
{
}

web::json::value DeleteTaurusDbNodeProcessesRequest::toJson() const
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
bool DeleteTaurusDbNodeProcessesRequest::fromJson(const web::json::value& val)
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
            DeleteTaurusDbNodeProcessesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteTaurusDbNodeProcessesRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteTaurusDbNodeProcessesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteTaurusDbNodeProcessesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteTaurusDbNodeProcessesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteTaurusDbNodeProcessesRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteTaurusDbNodeProcessesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteTaurusDbNodeProcessesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteTaurusDbNodeProcessesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteTaurusDbNodeProcessesRequest::getNodeId() const
{
    return nodeId_;
}

void DeleteTaurusDbNodeProcessesRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool DeleteTaurusDbNodeProcessesRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void DeleteTaurusDbNodeProcessesRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

DeleteTaurusDbNodeProcessesRequestBody DeleteTaurusDbNodeProcessesRequest::getBody() const
{
    return body_;
}

void DeleteTaurusDbNodeProcessesRequest::setBody(const DeleteTaurusDbNodeProcessesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteTaurusDbNodeProcessesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteTaurusDbNodeProcessesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


