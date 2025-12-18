

#include "huaweicloud/meeting/v1/model/SetQosThresholdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SetQosThresholdRequest::SetQosThresholdRequest()
{
    thresholdType_ = "";
    thresholdTypeIsSet_ = false;
    bodyIsSet_ = false;
}

SetQosThresholdRequest::~SetQosThresholdRequest() = default;

void SetQosThresholdRequest::validate()
{
}

web::json::value SetQosThresholdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(thresholdTypeIsSet_) {
        val[utility::conversions::to_string_t("thresholdType")] = ModelBase::toJson(thresholdType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetQosThresholdRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("thresholdType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thresholdType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThresholdType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SetQosThresholdReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetQosThresholdRequest::getThresholdType() const
{
    return thresholdType_;
}

void SetQosThresholdRequest::setThresholdType(const std::string& value)
{
    thresholdType_ = value;
    thresholdTypeIsSet_ = true;
}

bool SetQosThresholdRequest::thresholdTypeIsSet() const
{
    return thresholdTypeIsSet_;
}

void SetQosThresholdRequest::unsetthresholdType()
{
    thresholdTypeIsSet_ = false;
}

SetQosThresholdReq SetQosThresholdRequest::getBody() const
{
    return body_;
}

void SetQosThresholdRequest::setBody(const SetQosThresholdReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetQosThresholdRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetQosThresholdRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


