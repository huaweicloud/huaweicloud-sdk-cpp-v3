

#include "huaweicloud/codeartsrepo/v4/model/ShowFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowFileRequest::ShowFileRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    ref_ = "";
    refIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
}

ShowFileRequest::~ShowFileRequest() = default;

void ShowFileRequest::validate()
{
}

web::json::value ShowFileRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(refIsSet_) {
        val[utility::conversions::to_string_t("ref")] = ModelBase::toJson(ref_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }

    return val;
}
bool ShowFileRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRef(refVal);
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
    return ok;
}


int32_t ShowFileRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowFileRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowFileRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowFileRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ShowFileRequest::getRef() const
{
    return ref_;
}

void ShowFileRequest::setRef(const std::string& value)
{
    ref_ = value;
    refIsSet_ = true;
}

bool ShowFileRequest::refIsSet() const
{
    return refIsSet_;
}

void ShowFileRequest::unsetref()
{
    refIsSet_ = false;
}

std::string ShowFileRequest::getFilePath() const
{
    return filePath_;
}

void ShowFileRequest::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool ShowFileRequest::filePathIsSet() const
{
    return filePathIsSet_;
}

void ShowFileRequest::unsetfilePath()
{
    filePathIsSet_ = false;
}

}
}
}
}
}


