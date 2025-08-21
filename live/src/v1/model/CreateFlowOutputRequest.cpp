

#include "huaweicloud/live/v1/model/CreateFlowOutputRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateFlowOutputRequest::CreateFlowOutputRequest()
{
    flowId_ = "";
    flowIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateFlowOutputRequest::~CreateFlowOutputRequest() = default;

void CreateFlowOutputRequest::validate()
{
}

web::json::value CreateFlowOutputRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flowIdIsSet_) {
        val[utility::conversions::to_string_t("flow_id")] = ModelBase::toJson(flowId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateFlowOutputRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<AddFlowOutputsRequest> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateFlowOutputRequest::getFlowId() const
{
    return flowId_;
}

void CreateFlowOutputRequest::setFlowId(const std::string& value)
{
    flowId_ = value;
    flowIdIsSet_ = true;
}

bool CreateFlowOutputRequest::flowIdIsSet() const
{
    return flowIdIsSet_;
}

void CreateFlowOutputRequest::unsetflowId()
{
    flowIdIsSet_ = false;
}

std::vector<AddFlowOutputsRequest>& CreateFlowOutputRequest::getBody()
{
    return body_;
}

void CreateFlowOutputRequest::setBody(const std::vector<AddFlowOutputsRequest>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateFlowOutputRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateFlowOutputRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


