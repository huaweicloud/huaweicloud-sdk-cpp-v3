

#include "huaweicloud/live/v1/model/DeleteFlowResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DeleteFlowResponse::DeleteFlowResponse()
{
    status_ = "";
    statusIsSet_ = false;
    flowId_ = "";
    flowIdIsSet_ = false;
}

DeleteFlowResponse::~DeleteFlowResponse() = default;

void DeleteFlowResponse::validate()
{
}

web::json::value DeleteFlowResponse::toJson() const
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
bool DeleteFlowResponse::fromJson(const web::json::value& val)
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


std::string DeleteFlowResponse::getStatus() const
{
    return status_;
}

void DeleteFlowResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteFlowResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteFlowResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DeleteFlowResponse::getFlowId() const
{
    return flowId_;
}

void DeleteFlowResponse::setFlowId(const std::string& value)
{
    flowId_ = value;
    flowIdIsSet_ = true;
}

bool DeleteFlowResponse::flowIdIsSet() const
{
    return flowIdIsSet_;
}

void DeleteFlowResponse::unsetflowId()
{
    flowIdIsSet_ = false;
}

}
}
}
}
}


