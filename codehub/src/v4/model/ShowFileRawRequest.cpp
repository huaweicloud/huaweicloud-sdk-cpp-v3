

#include "huaweicloud/codehub/v4/model/ShowFileRawRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowFileRawRequest::ShowFileRawRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    ref_ = "";
    refIsSet_ = false;
}

ShowFileRawRequest::~ShowFileRawRequest() = default;

void ShowFileRawRequest::validate()
{
}

web::json::value ShowFileRawRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(refIsSet_) {
        val[utility::conversions::to_string_t("ref")] = ModelBase::toJson(ref_);
    }

    return val;
}
bool ShowFileRawRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRef(refVal);
        }
    }
    return ok;
}


int32_t ShowFileRawRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowFileRawRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowFileRawRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowFileRawRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ShowFileRawRequest::getFilePath() const
{
    return filePath_;
}

void ShowFileRawRequest::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool ShowFileRawRequest::filePathIsSet() const
{
    return filePathIsSet_;
}

void ShowFileRawRequest::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string ShowFileRawRequest::getRef() const
{
    return ref_;
}

void ShowFileRawRequest::setRef(const std::string& value)
{
    ref_ = value;
    refIsSet_ = true;
}

bool ShowFileRawRequest::refIsSet() const
{
    return refIsSet_;
}

void ShowFileRawRequest::unsetref()
{
    refIsSet_ = false;
}

}
}
}
}
}


