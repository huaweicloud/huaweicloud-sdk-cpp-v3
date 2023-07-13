

#include "huaweicloud/live/v1/model/RunRecordRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




RunRecordRequest::RunRecordRequest()
{
    action_ = "";
    actionIsSet_ = false;
    bodyIsSet_ = false;
}

RunRecordRequest::~RunRecordRequest() = default;

void RunRecordRequest::validate()
{
}

web::json::value RunRecordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RunRecordRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RecordControlInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string RunRecordRequest::getAction() const
{
    return action_;
}

void RunRecordRequest::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool RunRecordRequest::actionIsSet() const
{
    return actionIsSet_;
}

void RunRecordRequest::unsetaction()
{
    actionIsSet_ = false;
}

RecordControlInfo RunRecordRequest::getBody() const
{
    return body_;
}

void RunRecordRequest::setBody(const RecordControlInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RunRecordRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RunRecordRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


