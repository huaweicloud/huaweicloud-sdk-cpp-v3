

#include "huaweicloud/live/v1/model/ModifyFlowStopRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyFlowStopRequest::ModifyFlowStopRequest()
{
    flowId_ = "";
    flowIdIsSet_ = false;
}

ModifyFlowStopRequest::~ModifyFlowStopRequest() = default;

void ModifyFlowStopRequest::validate()
{
}

web::json::value ModifyFlowStopRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flowIdIsSet_) {
        val[utility::conversions::to_string_t("flow_id")] = ModelBase::toJson(flowId_);
    }

    return val;
}
bool ModifyFlowStopRequest::fromJson(const web::json::value& val)
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


std::string ModifyFlowStopRequest::getFlowId() const
{
    return flowId_;
}

void ModifyFlowStopRequest::setFlowId(const std::string& value)
{
    flowId_ = value;
    flowIdIsSet_ = true;
}

bool ModifyFlowStopRequest::flowIdIsSet() const
{
    return flowIdIsSet_;
}

void ModifyFlowStopRequest::unsetflowId()
{
    flowIdIsSet_ = false;
}

}
}
}
}
}


