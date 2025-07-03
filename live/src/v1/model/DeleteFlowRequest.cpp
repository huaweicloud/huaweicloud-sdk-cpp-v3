

#include "huaweicloud/live/v1/model/DeleteFlowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DeleteFlowRequest::DeleteFlowRequest()
{
    flowId_ = "";
    flowIdIsSet_ = false;
}

DeleteFlowRequest::~DeleteFlowRequest() = default;

void DeleteFlowRequest::validate()
{
}

web::json::value DeleteFlowRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flowIdIsSet_) {
        val[utility::conversions::to_string_t("flow_id")] = ModelBase::toJson(flowId_);
    }

    return val;
}
bool DeleteFlowRequest::fromJson(const web::json::value& val)
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


std::string DeleteFlowRequest::getFlowId() const
{
    return flowId_;
}

void DeleteFlowRequest::setFlowId(const std::string& value)
{
    flowId_ = value;
    flowIdIsSet_ = true;
}

bool DeleteFlowRequest::flowIdIsSet() const
{
    return flowIdIsSet_;
}

void DeleteFlowRequest::unsetflowId()
{
    flowIdIsSet_ = false;
}

}
}
}
}
}


