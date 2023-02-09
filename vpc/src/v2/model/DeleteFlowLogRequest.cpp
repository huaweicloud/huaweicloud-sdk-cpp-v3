

#include "huaweicloud/vpc/v2/model/DeleteFlowLogRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




DeleteFlowLogRequest::DeleteFlowLogRequest()
{
    flowlogId_ = "";
    flowlogIdIsSet_ = false;
}

DeleteFlowLogRequest::~DeleteFlowLogRequest() = default;

void DeleteFlowLogRequest::validate()
{
}

web::json::value DeleteFlowLogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flowlogIdIsSet_) {
        val[utility::conversions::to_string_t("flowlog_id")] = ModelBase::toJson(flowlogId_);
    }

    return val;
}

bool DeleteFlowLogRequest::fromJson(const web::json::value& val)
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


std::string DeleteFlowLogRequest::getFlowlogId() const
{
    return flowlogId_;
}

void DeleteFlowLogRequest::setFlowlogId(const std::string& value)
{
    flowlogId_ = value;
    flowlogIdIsSet_ = true;
}

bool DeleteFlowLogRequest::flowlogIdIsSet() const
{
    return flowlogIdIsSet_;
}

void DeleteFlowLogRequest::unsetflowlogId()
{
    flowlogIdIsSet_ = false;
}

}
}
}
}
}


