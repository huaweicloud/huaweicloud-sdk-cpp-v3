

#include "huaweicloud/meeting/v1/model/UserStatusDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UserStatusDTO::UserStatusDTO()
{
    number_ = "";
    numberIsSet_ = false;
    regStatus_ = "";
    regStatusIsSet_ = false;
    callStatus_ = "";
    callStatusIsSet_ = false;
}

UserStatusDTO::~UserStatusDTO() = default;

void UserStatusDTO::validate()
{
}

web::json::value UserStatusDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(numberIsSet_) {
        val[utility::conversions::to_string_t("Number")] = ModelBase::toJson(number_);
    }
    if(regStatusIsSet_) {
        val[utility::conversions::to_string_t("RegStatus")] = ModelBase::toJson(regStatus_);
    }
    if(callStatusIsSet_) {
        val[utility::conversions::to_string_t("CallStatus")] = ModelBase::toJson(callStatus_);
    }

    return val;
}
bool UserStatusDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("RegStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("RegStatus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("CallStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("CallStatus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallStatus(refVal);
        }
    }
    return ok;
}


std::string UserStatusDTO::getNumber() const
{
    return number_;
}

void UserStatusDTO::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool UserStatusDTO::numberIsSet() const
{
    return numberIsSet_;
}

void UserStatusDTO::unsetnumber()
{
    numberIsSet_ = false;
}

std::string UserStatusDTO::getRegStatus() const
{
    return regStatus_;
}

void UserStatusDTO::setRegStatus(const std::string& value)
{
    regStatus_ = value;
    regStatusIsSet_ = true;
}

bool UserStatusDTO::regStatusIsSet() const
{
    return regStatusIsSet_;
}

void UserStatusDTO::unsetregStatus()
{
    regStatusIsSet_ = false;
}

std::string UserStatusDTO::getCallStatus() const
{
    return callStatus_;
}

void UserStatusDTO::setCallStatus(const std::string& value)
{
    callStatus_ = value;
    callStatusIsSet_ = true;
}

bool UserStatusDTO::callStatusIsSet() const
{
    return callStatusIsSet_;
}

void UserStatusDTO::unsetcallStatus()
{
    callStatusIsSet_ = false;
}

}
}
}
}
}


