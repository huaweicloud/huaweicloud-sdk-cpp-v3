

#include "huaweicloud/live/v1/model/ModifyFlowStartResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyFlowStartResponse::ModifyFlowStartResponse()
{
    status_ = "";
    statusIsSet_ = false;
    flowId_ = "";
    flowIdIsSet_ = false;
}

ModifyFlowStartResponse::~ModifyFlowStartResponse() = default;

void ModifyFlowStartResponse::validate()
{
}

web::json::value ModifyFlowStartResponse::toJson() const
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
bool ModifyFlowStartResponse::fromJson(const web::json::value& val)
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


std::string ModifyFlowStartResponse::getStatus() const
{
    return status_;
}

void ModifyFlowStartResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ModifyFlowStartResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ModifyFlowStartResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ModifyFlowStartResponse::getFlowId() const
{
    return flowId_;
}

void ModifyFlowStartResponse::setFlowId(const std::string& value)
{
    flowId_ = value;
    flowIdIsSet_ = true;
}

bool ModifyFlowStartResponse::flowIdIsSet() const
{
    return flowIdIsSet_;
}

void ModifyFlowStartResponse::unsetflowId()
{
    flowIdIsSet_ = false;
}

}
}
}
}
}


