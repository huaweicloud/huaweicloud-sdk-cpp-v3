

#include "huaweicloud/codeartsrepo/v4/model/ShowFileContentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowFileContentRequest::ShowFileContentRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    sha_ = "";
    shaIsSet_ = false;
}

ShowFileContentRequest::~ShowFileContentRequest() = default;

void ShowFileContentRequest::validate()
{
}

web::json::value ShowFileContentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(shaIsSet_) {
        val[utility::conversions::to_string_t("sha")] = ModelBase::toJson(sha_);
    }

    return val;
}
bool ShowFileContentRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSha(refVal);
        }
    }
    return ok;
}


int32_t ShowFileContentRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowFileContentRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowFileContentRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowFileContentRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ShowFileContentRequest::getFilePath() const
{
    return filePath_;
}

void ShowFileContentRequest::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool ShowFileContentRequest::filePathIsSet() const
{
    return filePathIsSet_;
}

void ShowFileContentRequest::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string ShowFileContentRequest::getSha() const
{
    return sha_;
}

void ShowFileContentRequest::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool ShowFileContentRequest::shaIsSet() const
{
    return shaIsSet_;
}

void ShowFileContentRequest::unsetsha()
{
    shaIsSet_ = false;
}

}
}
}
}
}


