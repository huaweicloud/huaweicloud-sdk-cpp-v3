

#include "huaweicloud/codeartsrepo/v4/model/SubmoduleReqDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




SubmoduleReqDto::SubmoduleReqDto()
{
    branchName_ = "";
    branchNameIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    subrepoId_ = "";
    subrepoIdIsSet_ = false;
    commitMessage_ = "";
    commitMessageIsSet_ = false;
    subrepoBranch_ = "";
    subrepoBranchIsSet_ = false;
}

SubmoduleReqDto::~SubmoduleReqDto() = default;

void SubmoduleReqDto::validate()
{
}

web::json::value SubmoduleReqDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(branchNameIsSet_) {
        val[utility::conversions::to_string_t("branch_name")] = ModelBase::toJson(branchName_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(subrepoIdIsSet_) {
        val[utility::conversions::to_string_t("subrepo_id")] = ModelBase::toJson(subrepoId_);
    }
    if(commitMessageIsSet_) {
        val[utility::conversions::to_string_t("commit_message")] = ModelBase::toJson(commitMessage_);
    }
    if(subrepoBranchIsSet_) {
        val[utility::conversions::to_string_t("subrepo_branch")] = ModelBase::toJson(subrepoBranch_);
    }

    return val;
}
bool SubmoduleReqDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("branch_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subrepo_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subrepo_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubrepoId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("subrepo_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subrepo_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubrepoBranch(refVal);
        }
    }
    return ok;
}


std::string SubmoduleReqDto::getBranchName() const
{
    return branchName_;
}

void SubmoduleReqDto::setBranchName(const std::string& value)
{
    branchName_ = value;
    branchNameIsSet_ = true;
}

bool SubmoduleReqDto::branchNameIsSet() const
{
    return branchNameIsSet_;
}

void SubmoduleReqDto::unsetbranchName()
{
    branchNameIsSet_ = false;
}

std::string SubmoduleReqDto::getFilePath() const
{
    return filePath_;
}

void SubmoduleReqDto::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool SubmoduleReqDto::filePathIsSet() const
{
    return filePathIsSet_;
}

void SubmoduleReqDto::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string SubmoduleReqDto::getSubrepoId() const
{
    return subrepoId_;
}

void SubmoduleReqDto::setSubrepoId(const std::string& value)
{
    subrepoId_ = value;
    subrepoIdIsSet_ = true;
}

bool SubmoduleReqDto::subrepoIdIsSet() const
{
    return subrepoIdIsSet_;
}

void SubmoduleReqDto::unsetsubrepoId()
{
    subrepoIdIsSet_ = false;
}

std::string SubmoduleReqDto::getCommitMessage() const
{
    return commitMessage_;
}

void SubmoduleReqDto::setCommitMessage(const std::string& value)
{
    commitMessage_ = value;
    commitMessageIsSet_ = true;
}

bool SubmoduleReqDto::commitMessageIsSet() const
{
    return commitMessageIsSet_;
}

void SubmoduleReqDto::unsetcommitMessage()
{
    commitMessageIsSet_ = false;
}

std::string SubmoduleReqDto::getSubrepoBranch() const
{
    return subrepoBranch_;
}

void SubmoduleReqDto::setSubrepoBranch(const std::string& value)
{
    subrepoBranch_ = value;
    subrepoBranchIsSet_ = true;
}

bool SubmoduleReqDto::subrepoBranchIsSet() const
{
    return subrepoBranchIsSet_;
}

void SubmoduleReqDto::unsetsubrepoBranch()
{
    subrepoBranchIsSet_ = false;
}

}
}
}
}
}


