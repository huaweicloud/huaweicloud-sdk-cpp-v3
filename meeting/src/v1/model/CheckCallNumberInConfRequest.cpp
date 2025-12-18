

#include "huaweicloud/meeting/v1/model/CheckCallNumberInConfRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CheckCallNumberInConfRequest::CheckCallNumberInConfRequest()
{
    callNumber_ = "";
    callNumberIsSet_ = false;
}

CheckCallNumberInConfRequest::~CheckCallNumberInConfRequest() = default;

void CheckCallNumberInConfRequest::validate()
{
}

web::json::value CheckCallNumberInConfRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(callNumberIsSet_) {
        val[utility::conversions::to_string_t("call_number")] = ModelBase::toJson(callNumber_);
    }

    return val;
}
bool CheckCallNumberInConfRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("call_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("call_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallNumber(refVal);
        }
    }
    return ok;
}


std::string CheckCallNumberInConfRequest::getCallNumber() const
{
    return callNumber_;
}

void CheckCallNumberInConfRequest::setCallNumber(const std::string& value)
{
    callNumber_ = value;
    callNumberIsSet_ = true;
}

bool CheckCallNumberInConfRequest::callNumberIsSet() const
{
    return callNumberIsSet_;
}

void CheckCallNumberInConfRequest::unsetcallNumber()
{
    callNumberIsSet_ = false;
}

}
}
}
}
}


