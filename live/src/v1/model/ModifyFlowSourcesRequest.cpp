

#include "huaweicloud/live/v1/model/ModifyFlowSourcesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyFlowSourcesRequest::ModifyFlowSourcesRequest()
{
    flowId_ = "";
    flowIdIsSet_ = false;
    sourceName_ = "";
    sourceNameIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyFlowSourcesRequest::~ModifyFlowSourcesRequest() = default;

void ModifyFlowSourcesRequest::validate()
{
}

web::json::value ModifyFlowSourcesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flowIdIsSet_) {
        val[utility::conversions::to_string_t("flow_id")] = ModelBase::toJson(flowId_);
    }
    if(sourceNameIsSet_) {
        val[utility::conversions::to_string_t("source_name")] = ModelBase::toJson(sourceName_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ModifyFlowSourcesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flow_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flow_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlowId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModifyFlowSourcesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyFlowSourcesRequest::getFlowId() const
{
    return flowId_;
}

void ModifyFlowSourcesRequest::setFlowId(const std::string& value)
{
    flowId_ = value;
    flowIdIsSet_ = true;
}

bool ModifyFlowSourcesRequest::flowIdIsSet() const
{
    return flowIdIsSet_;
}

void ModifyFlowSourcesRequest::unsetflowId()
{
    flowIdIsSet_ = false;
}

std::string ModifyFlowSourcesRequest::getSourceName() const
{
    return sourceName_;
}

void ModifyFlowSourcesRequest::setSourceName(const std::string& value)
{
    sourceName_ = value;
    sourceNameIsSet_ = true;
}

bool ModifyFlowSourcesRequest::sourceNameIsSet() const
{
    return sourceNameIsSet_;
}

void ModifyFlowSourcesRequest::unsetsourceName()
{
    sourceNameIsSet_ = false;
}

ModifyFlowSourcesRequestBody ModifyFlowSourcesRequest::getBody() const
{
    return body_;
}

void ModifyFlowSourcesRequest::setBody(const ModifyFlowSourcesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyFlowSourcesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyFlowSourcesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


