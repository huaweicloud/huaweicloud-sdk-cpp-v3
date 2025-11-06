

#include "huaweicloud/codeartsrepo/v4/model/ResolveConflictDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ResolveConflictDto::ResolveConflictDto()
{
    commitMessage_ = "";
    commitMessageIsSet_ = false;
    filesIsSet_ = false;
}

ResolveConflictDto::~ResolveConflictDto() = default;

void ResolveConflictDto::validate()
{
}

web::json::value ResolveConflictDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commitMessageIsSet_) {
        val[utility::conversions::to_string_t("commit_message")] = ModelBase::toJson(commitMessage_);
    }
    if(filesIsSet_) {
        val[utility::conversions::to_string_t("files")] = ModelBase::toJson(files_);
    }

    return val;
}
bool ResolveConflictDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("commit_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("files"));
        if(!fieldValue.is_null())
        {
            std::vector<ResolveConflictFileDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFiles(refVal);
        }
    }
    return ok;
}


std::string ResolveConflictDto::getCommitMessage() const
{
    return commitMessage_;
}

void ResolveConflictDto::setCommitMessage(const std::string& value)
{
    commitMessage_ = value;
    commitMessageIsSet_ = true;
}

bool ResolveConflictDto::commitMessageIsSet() const
{
    return commitMessageIsSet_;
}

void ResolveConflictDto::unsetcommitMessage()
{
    commitMessageIsSet_ = false;
}

std::vector<ResolveConflictFileDto>& ResolveConflictDto::getFiles()
{
    return files_;
}

void ResolveConflictDto::setFiles(const std::vector<ResolveConflictFileDto>& value)
{
    files_ = value;
    filesIsSet_ = true;
}

bool ResolveConflictDto::filesIsSet() const
{
    return filesIsSet_;
}

void ResolveConflictDto::unsetfiles()
{
    filesIsSet_ = false;
}

}
}
}
}
}


