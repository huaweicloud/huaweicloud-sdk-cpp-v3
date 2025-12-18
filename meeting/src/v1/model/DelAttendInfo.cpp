

#include "huaweicloud/meeting/v1/model/DelAttendInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




DelAttendInfo::DelAttendInfo()
{
    number_ = "";
    numberIsSet_ = false;
    participantID_ = "";
    participantIDIsSet_ = false;
}

DelAttendInfo::~DelAttendInfo() = default;

void DelAttendInfo::validate()
{
}

web::json::value DelAttendInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(participantIDIsSet_) {
        val[utility::conversions::to_string_t("participantID")] = ModelBase::toJson(participantID_);
    }

    return val;
}
bool DelAttendInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("participantID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("participantID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParticipantID(refVal);
        }
    }
    return ok;
}


std::string DelAttendInfo::getNumber() const
{
    return number_;
}

void DelAttendInfo::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool DelAttendInfo::numberIsSet() const
{
    return numberIsSet_;
}

void DelAttendInfo::unsetnumber()
{
    numberIsSet_ = false;
}

std::string DelAttendInfo::getParticipantID() const
{
    return participantID_;
}

void DelAttendInfo::setParticipantID(const std::string& value)
{
    participantID_ = value;
    participantIDIsSet_ = true;
}

bool DelAttendInfo::participantIDIsSet() const
{
    return participantIDIsSet_;
}

void DelAttendInfo::unsetparticipantID()
{
    participantIDIsSet_ = false;
}

}
}
}
}
}


