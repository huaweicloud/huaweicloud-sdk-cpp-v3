

#include "huaweicloud/codehub/v4/model/ShowCommitFileDiffRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowCommitFileDiffRequest::ShowCommitFileDiffRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    sha_ = "";
    shaIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    oldPath_ = "";
    oldPathIsSet_ = false;
    ignoreWhitespaceChange_ = false;
    ignoreWhitespaceChangeIsSet_ = false;
}

ShowCommitFileDiffRequest::~ShowCommitFileDiffRequest() = default;

void ShowCommitFileDiffRequest::validate()
{
}

web::json::value ShowCommitFileDiffRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(shaIsSet_) {
        val[utility::conversions::to_string_t("sha")] = ModelBase::toJson(sha_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(oldPathIsSet_) {
        val[utility::conversions::to_string_t("old_path")] = ModelBase::toJson(oldPath_);
    }
    if(ignoreWhitespaceChangeIsSet_) {
        val[utility::conversions::to_string_t("ignore_whitespace_change")] = ModelBase::toJson(ignoreWhitespaceChange_);
    }

    return val;
}
bool ShowCommitFileDiffRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("old_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ignore_whitespace_change"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ignore_whitespace_change"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIgnoreWhitespaceChange(refVal);
        }
    }
    return ok;
}


int32_t ShowCommitFileDiffRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowCommitFileDiffRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowCommitFileDiffRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowCommitFileDiffRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ShowCommitFileDiffRequest::getSha() const
{
    return sha_;
}

void ShowCommitFileDiffRequest::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool ShowCommitFileDiffRequest::shaIsSet() const
{
    return shaIsSet_;
}

void ShowCommitFileDiffRequest::unsetsha()
{
    shaIsSet_ = false;
}

std::string ShowCommitFileDiffRequest::getPath() const
{
    return path_;
}

void ShowCommitFileDiffRequest::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool ShowCommitFileDiffRequest::pathIsSet() const
{
    return pathIsSet_;
}

void ShowCommitFileDiffRequest::unsetpath()
{
    pathIsSet_ = false;
}

std::string ShowCommitFileDiffRequest::getOldPath() const
{
    return oldPath_;
}

void ShowCommitFileDiffRequest::setOldPath(const std::string& value)
{
    oldPath_ = value;
    oldPathIsSet_ = true;
}

bool ShowCommitFileDiffRequest::oldPathIsSet() const
{
    return oldPathIsSet_;
}

void ShowCommitFileDiffRequest::unsetoldPath()
{
    oldPathIsSet_ = false;
}

bool ShowCommitFileDiffRequest::isIgnoreWhitespaceChange() const
{
    return ignoreWhitespaceChange_;
}

void ShowCommitFileDiffRequest::setIgnoreWhitespaceChange(bool value)
{
    ignoreWhitespaceChange_ = value;
    ignoreWhitespaceChangeIsSet_ = true;
}

bool ShowCommitFileDiffRequest::ignoreWhitespaceChangeIsSet() const
{
    return ignoreWhitespaceChangeIsSet_;
}

void ShowCommitFileDiffRequest::unsetignoreWhitespaceChange()
{
    ignoreWhitespaceChangeIsSet_ = false;
}

}
}
}
}
}


