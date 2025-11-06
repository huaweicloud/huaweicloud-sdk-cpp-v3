

#include "huaweicloud/codeartsrepo/v4/model/MergeRequestStatisticDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




MergeRequestStatisticDto::MergeRequestStatisticDto()
{
    id_ = 0;
    idIsSet_ = false;
    iid_ = 0;
    iidIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    commitsCount_ = 0;
    commitsCountIsSet_ = false;
    changedFilesCount_ = "";
    changedFilesCountIsSet_ = false;
    notesCountIsSet_ = false;
    changedLinesCountIsSet_ = false;
    mergeError_ = "";
    mergeErrorIsSet_ = false;
    jsonMergeErrorIsSet_ = false;
    votes_ = 0;
    votesIsSet_ = false;
}

MergeRequestStatisticDto::~MergeRequestStatisticDto() = default;

void MergeRequestStatisticDto::validate()
{
}

web::json::value MergeRequestStatisticDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(iidIsSet_) {
        val[utility::conversions::to_string_t("iid")] = ModelBase::toJson(iid_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(commitsCountIsSet_) {
        val[utility::conversions::to_string_t("commits_count")] = ModelBase::toJson(commitsCount_);
    }
    if(changedFilesCountIsSet_) {
        val[utility::conversions::to_string_t("changed_files_count")] = ModelBase::toJson(changedFilesCount_);
    }
    if(notesCountIsSet_) {
        val[utility::conversions::to_string_t("notes_count")] = ModelBase::toJson(notesCount_);
    }
    if(changedLinesCountIsSet_) {
        val[utility::conversions::to_string_t("changed_lines_count")] = ModelBase::toJson(changedLinesCount_);
    }
    if(mergeErrorIsSet_) {
        val[utility::conversions::to_string_t("merge_error")] = ModelBase::toJson(mergeError_);
    }
    if(jsonMergeErrorIsSet_) {
        val[utility::conversions::to_string_t("json_merge_error")] = ModelBase::toJson(jsonMergeError_);
    }
    if(votesIsSet_) {
        val[utility::conversions::to_string_t("votes")] = ModelBase::toJson(votes_);
    }

    return val;
}
bool MergeRequestStatisticDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iid"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commits_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commits_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitsCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("changed_files_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("changed_files_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChangedFilesCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notes_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notes_count"));
        if(!fieldValue.is_null())
        {
            NotesCountDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotesCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("changed_lines_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("changed_lines_count"));
        if(!fieldValue.is_null())
        {
            MergeRequestLineChange refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChangedLinesCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_error"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("json_merge_error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("json_merge_error"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJsonMergeError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("votes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("votes"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVotes(refVal);
        }
    }
    return ok;
}


int32_t MergeRequestStatisticDto::getId() const
{
    return id_;
}

void MergeRequestStatisticDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MergeRequestStatisticDto::idIsSet() const
{
    return idIsSet_;
}

void MergeRequestStatisticDto::unsetid()
{
    idIsSet_ = false;
}

int32_t MergeRequestStatisticDto::getIid() const
{
    return iid_;
}

void MergeRequestStatisticDto::setIid(int32_t value)
{
    iid_ = value;
    iidIsSet_ = true;
}

bool MergeRequestStatisticDto::iidIsSet() const
{
    return iidIsSet_;
}

void MergeRequestStatisticDto::unsetiid()
{
    iidIsSet_ = false;
}

std::string MergeRequestStatisticDto::getTitle() const
{
    return title_;
}

void MergeRequestStatisticDto::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool MergeRequestStatisticDto::titleIsSet() const
{
    return titleIsSet_;
}

void MergeRequestStatisticDto::unsettitle()
{
    titleIsSet_ = false;
}

std::string MergeRequestStatisticDto::getState() const
{
    return state_;
}

void MergeRequestStatisticDto::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool MergeRequestStatisticDto::stateIsSet() const
{
    return stateIsSet_;
}

void MergeRequestStatisticDto::unsetstate()
{
    stateIsSet_ = false;
}

int32_t MergeRequestStatisticDto::getCommitsCount() const
{
    return commitsCount_;
}

void MergeRequestStatisticDto::setCommitsCount(int32_t value)
{
    commitsCount_ = value;
    commitsCountIsSet_ = true;
}

bool MergeRequestStatisticDto::commitsCountIsSet() const
{
    return commitsCountIsSet_;
}

void MergeRequestStatisticDto::unsetcommitsCount()
{
    commitsCountIsSet_ = false;
}

std::string MergeRequestStatisticDto::getChangedFilesCount() const
{
    return changedFilesCount_;
}

void MergeRequestStatisticDto::setChangedFilesCount(const std::string& value)
{
    changedFilesCount_ = value;
    changedFilesCountIsSet_ = true;
}

bool MergeRequestStatisticDto::changedFilesCountIsSet() const
{
    return changedFilesCountIsSet_;
}

void MergeRequestStatisticDto::unsetchangedFilesCount()
{
    changedFilesCountIsSet_ = false;
}

NotesCountDto MergeRequestStatisticDto::getNotesCount() const
{
    return notesCount_;
}

void MergeRequestStatisticDto::setNotesCount(const NotesCountDto& value)
{
    notesCount_ = value;
    notesCountIsSet_ = true;
}

bool MergeRequestStatisticDto::notesCountIsSet() const
{
    return notesCountIsSet_;
}

void MergeRequestStatisticDto::unsetnotesCount()
{
    notesCountIsSet_ = false;
}

MergeRequestLineChange MergeRequestStatisticDto::getChangedLinesCount() const
{
    return changedLinesCount_;
}

void MergeRequestStatisticDto::setChangedLinesCount(const MergeRequestLineChange& value)
{
    changedLinesCount_ = value;
    changedLinesCountIsSet_ = true;
}

bool MergeRequestStatisticDto::changedLinesCountIsSet() const
{
    return changedLinesCountIsSet_;
}

void MergeRequestStatisticDto::unsetchangedLinesCount()
{
    changedLinesCountIsSet_ = false;
}

std::string MergeRequestStatisticDto::getMergeError() const
{
    return mergeError_;
}

void MergeRequestStatisticDto::setMergeError(const std::string& value)
{
    mergeError_ = value;
    mergeErrorIsSet_ = true;
}

bool MergeRequestStatisticDto::mergeErrorIsSet() const
{
    return mergeErrorIsSet_;
}

void MergeRequestStatisticDto::unsetmergeError()
{
    mergeErrorIsSet_ = false;
}

Object MergeRequestStatisticDto::getJsonMergeError() const
{
    return jsonMergeError_;
}

void MergeRequestStatisticDto::setJsonMergeError(const Object& value)
{
    jsonMergeError_ = value;
    jsonMergeErrorIsSet_ = true;
}

bool MergeRequestStatisticDto::jsonMergeErrorIsSet() const
{
    return jsonMergeErrorIsSet_;
}

void MergeRequestStatisticDto::unsetjsonMergeError()
{
    jsonMergeErrorIsSet_ = false;
}

int32_t MergeRequestStatisticDto::getVotes() const
{
    return votes_;
}

void MergeRequestStatisticDto::setVotes(int32_t value)
{
    votes_ = value;
    votesIsSet_ = true;
}

bool MergeRequestStatisticDto::votesIsSet() const
{
    return votesIsSet_;
}

void MergeRequestStatisticDto::unsetvotes()
{
    votesIsSet_ = false;
}

}
}
}
}
}


