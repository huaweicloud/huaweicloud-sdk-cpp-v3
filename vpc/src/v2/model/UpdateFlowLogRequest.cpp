

#include "huaweicloud/vpc/v2/model/UpdateFlowLogRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




UpdateFlowLogRequest::UpdateFlowLogRequest()
{
    flowlogId_ = "";
    flowlogIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateFlowLogRequest::~UpdateFlowLogRequest() = default;

void UpdateFlowLogRequest::validate()
{
}

web::json::value UpdateFlowLogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flowlogIdIsSet_) {
        val[utility::conversions::to_string_t("flowlog_id")] = ModelBase::toJson(flowlogId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateFlowLogRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateFlowLogReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateFlowLogRequest::getFlowlogId() const
{
    return flowlogId_;
}

void UpdateFlowLogRequest::setFlowlogId(const std::string& value)
{
    flowlogId_ = value;
    flowlogIdIsSet_ = true;
}

bool UpdateFlowLogRequest::flowlogIdIsSet() const
{
    return flowlogIdIsSet_;
}

void UpdateFlowLogRequest::unsetflowlogId()
{
    flowlogIdIsSet_ = false;
}

UpdateFlowLogReqBody UpdateFlowLogRequest::getBody() const
{
    return body_;
}

void UpdateFlowLogRequest::setBody(const UpdateFlowLogReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateFlowLogRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateFlowLogRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


