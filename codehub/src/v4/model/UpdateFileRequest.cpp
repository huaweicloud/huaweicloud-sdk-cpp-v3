

#include "huaweicloud/codehub/v4/model/UpdateFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateFileRequest::UpdateFileRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateFileRequest::~UpdateFileRequest() = default;

void UpdateFileRequest::validate()
{
}

web::json::value UpdateFileRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateFileRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateFileBodyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateFileRequest::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateFileRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateFileRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateFileRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string UpdateFileRequest::getFilePath() const
{
    return filePath_;
}

void UpdateFileRequest::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool UpdateFileRequest::filePathIsSet() const
{
    return filePathIsSet_;
}

void UpdateFileRequest::unsetfilePath()
{
    filePathIsSet_ = false;
}

UpdateFileBodyDto UpdateFileRequest::getBody() const
{
    return body_;
}

void UpdateFileRequest::setBody(const UpdateFileBodyDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateFileRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateFileRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


