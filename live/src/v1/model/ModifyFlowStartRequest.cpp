

#include "huaweicloud/live/v1/model/ModifyFlowStartRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyFlowStartRequest::ModifyFlowStartRequest()
{
    flowId_ = "";
    flowIdIsSet_ = false;
}

ModifyFlowStartRequest::~ModifyFlowStartRequest() = default;

void ModifyFlowStartRequest::validate()
{
}

web::json::value ModifyFlowStartRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flowIdIsSet_) {
        val[utility::conversions::to_string_t("flow_id")] = ModelBase::toJson(flowId_);
    }

    return val;
}
bool ModifyFlowStartRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ModifyFlowStartRequest::getFlowId() const
{
    return flowId_;
}

void ModifyFlowStartRequest::setFlowId(const std::string& value)
{
    flowId_ = value;
    flowIdIsSet_ = true;
}

bool ModifyFlowStartRequest::flowIdIsSet() const
{
    return flowIdIsSet_;
}

void ModifyFlowStartRequest::unsetflowId()
{
    flowIdIsSet_ = false;
}

}
}
}
}
}


