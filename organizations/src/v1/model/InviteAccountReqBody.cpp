

#include "huaweicloud/organizations/v1/model/InviteAccountReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




InviteAccountReqBody::InviteAccountReqBody()
{
    targetIsSet_ = false;
    notes_ = "";
    notesIsSet_ = false;
    tagsIsSet_ = false;
}

InviteAccountReqBody::~InviteAccountReqBody() = default;

void InviteAccountReqBody::validate()
{
}

web::json::value InviteAccountReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetIsSet_) {
        val[utility::conversions::to_string_t("target")] = ModelBase::toJson(target_);
    }
    if(notesIsSet_) {
        val[utility::conversions::to_string_t("notes")] = ModelBase::toJson(notes_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool InviteAccountReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target"));
        if(!fieldValue.is_null())
        {
            TargetDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTarget(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


TargetDto InviteAccountReqBody::getTarget() const
{
    return target_;
}

void InviteAccountReqBody::setTarget(const TargetDto& value)
{
    target_ = value;
    targetIsSet_ = true;
}

bool InviteAccountReqBody::targetIsSet() const
{
    return targetIsSet_;
}

void InviteAccountReqBody::unsettarget()
{
    targetIsSet_ = false;
}

std::string InviteAccountReqBody::getNotes() const
{
    return notes_;
}

void InviteAccountReqBody::setNotes(const std::string& value)
{
    notes_ = value;
    notesIsSet_ = true;
}

bool InviteAccountReqBody::notesIsSet() const
{
    return notesIsSet_;
}

void InviteAccountReqBody::unsetnotes()
{
    notesIsSet_ = false;
}

std::vector<TagDto>& InviteAccountReqBody::getTags()
{
    return tags_;
}

void InviteAccountReqBody::setTags(const std::vector<TagDto>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool InviteAccountReqBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void InviteAccountReqBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


