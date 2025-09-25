

#include "huaweicloud/codehub/v4/model/RepositoryDirDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




RepositoryDirDto::RepositoryDirDto()
{
    filePath_ = "";
    filePathIsSet_ = false;
    branchName_ = "";
    branchNameIsSet_ = false;
    commitMessage_ = "";
    commitMessageIsSet_ = false;
}

RepositoryDirDto::~RepositoryDirDto() = default;

void RepositoryDirDto::validate()
{
}

web::json::value RepositoryDirDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(branchNameIsSet_) {
        val[utility::conversions::to_string_t("branch_name")] = ModelBase::toJson(branchName_);
    }
    if(commitMessageIsSet_) {
        val[utility::conversions::to_string_t("commit_message")] = ModelBase::toJson(commitMessage_);
    }

    return val;
}
bool RepositoryDirDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitMessage(refVal);
        }
    }
    return ok;
}


std::string RepositoryDirDto::getFilePath() const
{
    return filePath_;
}

void RepositoryDirDto::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool RepositoryDirDto::filePathIsSet() const
{
    return filePathIsSet_;
}

void RepositoryDirDto::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string RepositoryDirDto::getBranchName() const
{
    return branchName_;
}

void RepositoryDirDto::setBranchName(const std::string& value)
{
    branchName_ = value;
    branchNameIsSet_ = true;
}

bool RepositoryDirDto::branchNameIsSet() const
{
    return branchNameIsSet_;
}

void RepositoryDirDto::unsetbranchName()
{
    branchNameIsSet_ = false;
}

std::string RepositoryDirDto::getCommitMessage() const
{
    return commitMessage_;
}

void RepositoryDirDto::setCommitMessage(const std::string& value)
{
    commitMessage_ = value;
    commitMessageIsSet_ = true;
}

bool RepositoryDirDto::commitMessageIsSet() const
{
    return commitMessageIsSet_;
}

void RepositoryDirDto::unsetcommitMessage()
{
    commitMessageIsSet_ = false;
}

}
}
}
}
}


