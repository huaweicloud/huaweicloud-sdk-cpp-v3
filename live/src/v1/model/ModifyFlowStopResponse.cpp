

#include "huaweicloud/live/v1/model/ModifyFlowStopResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyFlowStopResponse::ModifyFlowStopResponse()
{
    status_ = "";
    statusIsSet_ = false;
    flowId_ = "";
    flowIdIsSet_ = false;
}

ModifyFlowStopResponse::~ModifyFlowStopResponse() = default;

void ModifyFlowStopResponse::validate()
{
}

web::json::value ModifyFlowStopResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(flowIdIsSet_) {
        val[utility::conversions::to_string_t("flow_id")] = ModelBase::toJson(flowId_);
    }

    return val;
}
bool ModifyFlowStopResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
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


std::string ModifyFlowStopResponse::getStatus() const
{
    return status_;
}

void ModifyFlowStopResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ModifyFlowStopResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ModifyFlowStopResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ModifyFlowStopResponse::getFlowId() const
{
    return flowId_;
}

void ModifyFlowStopResponse::setFlowId(const std::string& value)
{
    flowId_ = value;
    flowIdIsSet_ = true;
}

bool ModifyFlowStopResponse::flowIdIsSet() const
{
    return flowIdIsSet_;
}

void ModifyFlowStopResponse::unsetflowId()
{
    flowIdIsSet_ = false;
}

}
}
}
}
}


