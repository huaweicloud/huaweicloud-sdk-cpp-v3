

#include "huaweicloud/codeartsrepo/v4/model/ShowRepositoryNavigationOutlineRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowRepositoryNavigationOutlineRequest::ShowRepositoryNavigationOutlineRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    revision_ = "";
    revisionIsSet_ = false;
    ref_ = "";
    refIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    blob_ = "";
    blobIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
}

ShowRepositoryNavigationOutlineRequest::~ShowRepositoryNavigationOutlineRequest() = default;

void ShowRepositoryNavigationOutlineRequest::validate()
{
}

web::json::value ShowRepositoryNavigationOutlineRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(revisionIsSet_) {
        val[utility::conversions::to_string_t("revision")] = ModelBase::toJson(revision_);
    }
    if(refIsSet_) {
        val[utility::conversions::to_string_t("ref")] = ModelBase::toJson(ref_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(blobIsSet_) {
        val[utility::conversions::to_string_t("blob")] = ModelBase::toJson(blob_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }

    return val;
}
bool ShowRepositoryNavigationOutlineRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("revision"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("revision"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRevision(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blob"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blob"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlob(refVal);
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


int32_t ShowRepositoryNavigationOutlineRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowRepositoryNavigationOutlineRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowRepositoryNavigationOutlineRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowRepositoryNavigationOutlineRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ShowRepositoryNavigationOutlineRequest::getRevision() const
{
    return revision_;
}

void ShowRepositoryNavigationOutlineRequest::setRevision(const std::string& value)
{
    revision_ = value;
    revisionIsSet_ = true;
}

bool ShowRepositoryNavigationOutlineRequest::revisionIsSet() const
{
    return revisionIsSet_;
}

void ShowRepositoryNavigationOutlineRequest::unsetrevision()
{
    revisionIsSet_ = false;
}

std::string ShowRepositoryNavigationOutlineRequest::getRef() const
{
    return ref_;
}

void ShowRepositoryNavigationOutlineRequest::setRef(const std::string& value)
{
    ref_ = value;
    refIsSet_ = true;
}

bool ShowRepositoryNavigationOutlineRequest::refIsSet() const
{
    return refIsSet_;
}

void ShowRepositoryNavigationOutlineRequest::unsetref()
{
    refIsSet_ = false;
}

std::string ShowRepositoryNavigationOutlineRequest::getLanguage() const
{
    return language_;
}

void ShowRepositoryNavigationOutlineRequest::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ShowRepositoryNavigationOutlineRequest::languageIsSet() const
{
    return languageIsSet_;
}

void ShowRepositoryNavigationOutlineRequest::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string ShowRepositoryNavigationOutlineRequest::getBlob() const
{
    return blob_;
}

void ShowRepositoryNavigationOutlineRequest::setBlob(const std::string& value)
{
    blob_ = value;
    blobIsSet_ = true;
}

bool ShowRepositoryNavigationOutlineRequest::blobIsSet() const
{
    return blobIsSet_;
}

void ShowRepositoryNavigationOutlineRequest::unsetblob()
{
    blobIsSet_ = false;
}

std::string ShowRepositoryNavigationOutlineRequest::getFilePath() const
{
    return filePath_;
}

void ShowRepositoryNavigationOutlineRequest::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool ShowRepositoryNavigationOutlineRequest::filePathIsSet() const
{
    return filePathIsSet_;
}

void ShowRepositoryNavigationOutlineRequest::unsetfilePath()
{
    filePathIsSet_ = false;
}

}
}
}
}
}


