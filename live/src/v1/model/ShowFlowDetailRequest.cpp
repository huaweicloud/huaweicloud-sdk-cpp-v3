

#include "huaweicloud/live/v1/model/ShowFlowDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowFlowDetailRequest::ShowFlowDetailRequest()
{
    flowId_ = "";
    flowIdIsSet_ = false;
}

ShowFlowDetailRequest::~ShowFlowDetailRequest() = default;

void ShowFlowDetailRequest::validate()
{
}

web::json::value ShowFlowDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flowIdIsSet_) {
        val[utility::conversions::to_string_t("flow_id")] = ModelBase::toJson(flowId_);
    }

    return val;
}
bool ShowFlowDetailRequest::fromJson(const web::json::value& val)
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


std::string ShowFlowDetailRequest::getFlowId() const
{
    return flowId_;
}

void ShowFlowDetailRequest::setFlowId(const std::string& value)
{
    flowId_ = value;
    flowIdIsSet_ = true;
}

bool ShowFlowDetailRequest::flowIdIsSet() const
{
    return flowIdIsSet_;
}

void ShowFlowDetailRequest::unsetflowId()
{
    flowIdIsSet_ = false;
}

}
}
}
}
}


