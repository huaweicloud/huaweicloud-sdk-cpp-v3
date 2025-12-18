

#include "huaweicloud/meeting/v1/model/RestRenamePartReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestRenamePartReqBody::RestRenamePartReqBody()
{
    participantID_ = "";
    participantIDIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    newName_ = "";
    newNameIsSet_ = false;
}

RestRenamePartReqBody::~RestRenamePartReqBody() = default;

void RestRenamePartReqBody::validate()
{
}

web::json::value RestRenamePartReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(participantIDIsSet_) {
        val[utility::conversions::to_string_t("participantID")] = ModelBase::toJson(participantID_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(newNameIsSet_) {
        val[utility::conversions::to_string_t("newName")] = ModelBase::toJson(newName_);
    }

    return val;
}
bool RestRenamePartReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("participantID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("participantID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParticipantID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("newName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("newName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewName(refVal);
        }
    }
    return ok;
}


std::string RestRenamePartReqBody::getParticipantID() const
{
    return participantID_;
}

void RestRenamePartReqBody::setParticipantID(const std::string& value)
{
    participantID_ = value;
    participantIDIsSet_ = true;
}

bool RestRenamePartReqBody::participantIDIsSet() const
{
    return participantIDIsSet_;
}

void RestRenamePartReqBody::unsetparticipantID()
{
    participantIDIsSet_ = false;
}

std::string RestRenamePartReqBody::getNumber() const
{
    return number_;
}

void RestRenamePartReqBody::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool RestRenamePartReqBody::numberIsSet() const
{
    return numberIsSet_;
}

void RestRenamePartReqBody::unsetnumber()
{
    numberIsSet_ = false;
}

std::string RestRenamePartReqBody::getNewName() const
{
    return newName_;
}

void RestRenamePartReqBody::setNewName(const std::string& value)
{
    newName_ = value;
    newNameIsSet_ = true;
}

bool RestRenamePartReqBody::newNameIsSet() const
{
    return newNameIsSet_;
}

void RestRenamePartReqBody::unsetnewName()
{
    newNameIsSet_ = false;
}

}
}
}
}
}


