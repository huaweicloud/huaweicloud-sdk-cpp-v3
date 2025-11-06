

#include "huaweicloud/codeartsrepo/v3/model/CreateMergeRequestDiscussionNoteResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




CreateMergeRequestDiscussionNoteResponse::CreateMergeRequestDiscussionNoteResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

CreateMergeRequestDiscussionNoteResponse::~CreateMergeRequestDiscussionNoteResponse() = default;

void CreateMergeRequestDiscussionNoteResponse::validate()
{
}

web::json::value CreateMergeRequestDiscussionNoteResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool CreateMergeRequestDiscussionNoteResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            Error refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            NoteDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


Error CreateMergeRequestDiscussionNoteResponse::getError() const
{
    return error_;
}

void CreateMergeRequestDiscussionNoteResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool CreateMergeRequestDiscussionNoteResponse::errorIsSet() const
{
    return errorIsSet_;
}

void CreateMergeRequestDiscussionNoteResponse::unseterror()
{
    errorIsSet_ = false;
}

NoteDto CreateMergeRequestDiscussionNoteResponse::getResult() const
{
    return result_;
}

void CreateMergeRequestDiscussionNoteResponse::setResult(const NoteDto& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateMergeRequestDiscussionNoteResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateMergeRequestDiscussionNoteResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string CreateMergeRequestDiscussionNoteResponse::getStatus() const
{
    return status_;
}

void CreateMergeRequestDiscussionNoteResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateMergeRequestDiscussionNoteResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateMergeRequestDiscussionNoteResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


