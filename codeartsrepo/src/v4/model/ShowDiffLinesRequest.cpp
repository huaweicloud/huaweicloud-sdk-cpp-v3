

#include "huaweicloud/codeartsrepo/v4/model/ShowDiffLinesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowDiffLinesRequest::ShowDiffLinesRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    commitId_ = "";
    commitIdIsSet_ = false;
    start_ = 0;
    startIsSet_ = false;
    end_ = 0;
    endIsSet_ = false;
}

ShowDiffLinesRequest::~ShowDiffLinesRequest() = default;

void ShowDiffLinesRequest::validate()
{
}

web::json::value ShowDiffLinesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(commitIdIsSet_) {
        val[utility::conversions::to_string_t("commit_id")] = ModelBase::toJson(commitId_);
    }
    if(startIsSet_) {
        val[utility::conversions::to_string_t("start")] = ModelBase::toJson(start_);
    }
    if(endIsSet_) {
        val[utility::conversions::to_string_t("end")] = ModelBase::toJson(end_);
    }

    return val;
}
bool ShowDiffLinesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnd(refVal);
        }
    }
    return ok;
}


int32_t ShowDiffLinesRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowDiffLinesRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowDiffLinesRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowDiffLinesRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ShowDiffLinesRequest::getFilePath() const
{
    return filePath_;
}

void ShowDiffLinesRequest::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool ShowDiffLinesRequest::filePathIsSet() const
{
    return filePathIsSet_;
}

void ShowDiffLinesRequest::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string ShowDiffLinesRequest::getCommitId() const
{
    return commitId_;
}

void ShowDiffLinesRequest::setCommitId(const std::string& value)
{
    commitId_ = value;
    commitIdIsSet_ = true;
}

bool ShowDiffLinesRequest::commitIdIsSet() const
{
    return commitIdIsSet_;
}

void ShowDiffLinesRequest::unsetcommitId()
{
    commitIdIsSet_ = false;
}

int32_t ShowDiffLinesRequest::getStart() const
{
    return start_;
}

void ShowDiffLinesRequest::setStart(int32_t value)
{
    start_ = value;
    startIsSet_ = true;
}

bool ShowDiffLinesRequest::startIsSet() const
{
    return startIsSet_;
}

void ShowDiffLinesRequest::unsetstart()
{
    startIsSet_ = false;
}

int32_t ShowDiffLinesRequest::getEnd() const
{
    return end_;
}

void ShowDiffLinesRequest::setEnd(int32_t value)
{
    end_ = value;
    endIsSet_ = true;
}

bool ShowDiffLinesRequest::endIsSet() const
{
    return endIsSet_;
}

void ShowDiffLinesRequest::unsetend()
{
    endIsSet_ = false;
}

}
}
}
}
}


