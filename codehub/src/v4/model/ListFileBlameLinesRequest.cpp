

#include "huaweicloud/codehub/v4/model/ListFileBlameLinesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListFileBlameLinesRequest::ListFileBlameLinesRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    sha_ = "";
    shaIsSet_ = false;
}

ListFileBlameLinesRequest::~ListFileBlameLinesRequest() = default;

void ListFileBlameLinesRequest::validate()
{
}

web::json::value ListFileBlameLinesRequest::toJson() const
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
bool ListFileBlameLinesRequest::fromJson(const web::json::value& val)
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


int32_t ListFileBlameLinesRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListFileBlameLinesRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListFileBlameLinesRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListFileBlameLinesRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListFileBlameLinesRequest::getFilePath() const
{
    return filePath_;
}

void ListFileBlameLinesRequest::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool ListFileBlameLinesRequest::filePathIsSet() const
{
    return filePathIsSet_;
}

void ListFileBlameLinesRequest::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string ListFileBlameLinesRequest::getSha() const
{
    return sha_;
}

void ListFileBlameLinesRequest::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool ListFileBlameLinesRequest::shaIsSet() const
{
    return shaIsSet_;
}

void ListFileBlameLinesRequest::unsetsha()
{
    shaIsSet_ = false;
}

}
}
}
}
}


