

#include "huaweicloud/codehub/v4/model/NotesCountDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




NotesCountDto::NotesCountDto()
{
    notesCount_ = 0;
    notesCountIsSet_ = false;
    unresolvedNotesCount_ = 0;
    unresolvedNotesCountIsSet_ = false;
    alreadyResolvedCount_ = 0;
    alreadyResolvedCountIsSet_ = false;
    needResolvedCount_ = 0;
    needResolvedCountIsSet_ = false;
}

NotesCountDto::~NotesCountDto() = default;

void NotesCountDto::validate()
{
}

web::json::value NotesCountDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(notesCountIsSet_) {
        val[utility::conversions::to_string_t("notes_count")] = ModelBase::toJson(notesCount_);
    }
    if(unresolvedNotesCountIsSet_) {
        val[utility::conversions::to_string_t("unresolved_notes_count")] = ModelBase::toJson(unresolvedNotesCount_);
    }
    if(alreadyResolvedCountIsSet_) {
        val[utility::conversions::to_string_t("already_resolved_count")] = ModelBase::toJson(alreadyResolvedCount_);
    }
    if(needResolvedCountIsSet_) {
        val[utility::conversions::to_string_t("need_resolved_count")] = ModelBase::toJson(needResolvedCount_);
    }

    return val;
}
bool NotesCountDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("notes_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notes_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotesCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unresolved_notes_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unresolved_notes_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnresolvedNotesCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("already_resolved_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("already_resolved_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlreadyResolvedCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("need_resolved_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("need_resolved_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedResolvedCount(refVal);
        }
    }
    return ok;
}


int32_t NotesCountDto::getNotesCount() const
{
    return notesCount_;
}

void NotesCountDto::setNotesCount(int32_t value)
{
    notesCount_ = value;
    notesCountIsSet_ = true;
}

bool NotesCountDto::notesCountIsSet() const
{
    return notesCountIsSet_;
}

void NotesCountDto::unsetnotesCount()
{
    notesCountIsSet_ = false;
}

int32_t NotesCountDto::getUnresolvedNotesCount() const
{
    return unresolvedNotesCount_;
}

void NotesCountDto::setUnresolvedNotesCount(int32_t value)
{
    unresolvedNotesCount_ = value;
    unresolvedNotesCountIsSet_ = true;
}

bool NotesCountDto::unresolvedNotesCountIsSet() const
{
    return unresolvedNotesCountIsSet_;
}

void NotesCountDto::unsetunresolvedNotesCount()
{
    unresolvedNotesCountIsSet_ = false;
}

int32_t NotesCountDto::getAlreadyResolvedCount() const
{
    return alreadyResolvedCount_;
}

void NotesCountDto::setAlreadyResolvedCount(int32_t value)
{
    alreadyResolvedCount_ = value;
    alreadyResolvedCountIsSet_ = true;
}

bool NotesCountDto::alreadyResolvedCountIsSet() const
{
    return alreadyResolvedCountIsSet_;
}

void NotesCountDto::unsetalreadyResolvedCount()
{
    alreadyResolvedCountIsSet_ = false;
}

int32_t NotesCountDto::getNeedResolvedCount() const
{
    return needResolvedCount_;
}

void NotesCountDto::setNeedResolvedCount(int32_t value)
{
    needResolvedCount_ = value;
    needResolvedCountIsSet_ = true;
}

bool NotesCountDto::needResolvedCountIsSet() const
{
    return needResolvedCountIsSet_;
}

void NotesCountDto::unsetneedResolvedCount()
{
    needResolvedCountIsSet_ = false;
}

}
}
}
}
}


