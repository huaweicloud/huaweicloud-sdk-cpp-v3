

#include "huaweicloud/vpc/v2/model/ShowFlowLogRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowFlowLogRequest::ShowFlowLogRequest()
{
    flowlogId_ = "";
    flowlogIdIsSet_ = false;
}

ShowFlowLogRequest::~ShowFlowLogRequest() = default;

void ShowFlowLogRequest::validate()
{
}

web::json::value ShowFlowLogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flowlogIdIsSet_) {
        val[utility::conversions::to_string_t("flowlog_id")] = ModelBase::toJson(flowlogId_);
    }

    return val;
}

bool ShowFlowLogRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flowlog_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flowlog_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlowlogId(refVal);
        }
    }
    return ok;
}

std::string ShowFlowLogRequest::getFlowlogId() const
{
    return flowlogId_;
}

void ShowFlowLogRequest::setFlowlogId(const std::string& value)
{
    flowlogId_ = value;
    flowlogIdIsSet_ = true;
}

bool ShowFlowLogRequest::flowlogIdIsSet() const
{
    return flowlogIdIsSet_;
}

void ShowFlowLogRequest::unsetflowlogId()
{
    flowlogIdIsSet_ = false;
}

}
}
}
}
}


