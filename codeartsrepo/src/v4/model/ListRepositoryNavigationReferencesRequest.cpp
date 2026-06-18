

#include "huaweicloud/codeartsrepo/v4/model/ListRepositoryNavigationReferencesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListRepositoryNavigationReferencesRequest::ListRepositoryNavigationReferencesRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    revision_ = "";
    revisionIsSet_ = false;
    ref_ = "";
    refIsSet_ = false;
    symbol_ = "";
    symbolIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    blob_ = "";
    blobIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
}

ListRepositoryNavigationReferencesRequest::~ListRepositoryNavigationReferencesRequest() = default;

void ListRepositoryNavigationReferencesRequest::validate()
{
}

web::json::value ListRepositoryNavigationReferencesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(revisionIsSet_) {
        val[utility::conversions::to_string_t("revision")] = ModelBase::toJson(revision_);
    }
    if(refIsSet_) {
        val[utility::conversions::to_string_t("ref")] = ModelBase::toJson(ref_);
    }
    if(symbolIsSet_) {
        val[utility::conversions::to_string_t("symbol")] = ModelBase::toJson(symbol_);
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
bool ListRepositoryNavigationReferencesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("symbol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("symbol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSymbol(refVal);
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


int32_t ListRepositoryNavigationReferencesRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListRepositoryNavigationReferencesRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListRepositoryNavigationReferencesRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListRepositoryNavigationReferencesRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListRepositoryNavigationReferencesRequest::getPath() const
{
    return path_;
}

void ListRepositoryNavigationReferencesRequest::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool ListRepositoryNavigationReferencesRequest::pathIsSet() const
{
    return pathIsSet_;
}

void ListRepositoryNavigationReferencesRequest::unsetpath()
{
    pathIsSet_ = false;
}

std::string ListRepositoryNavigationReferencesRequest::getRevision() const
{
    return revision_;
}

void ListRepositoryNavigationReferencesRequest::setRevision(const std::string& value)
{
    revision_ = value;
    revisionIsSet_ = true;
}

bool ListRepositoryNavigationReferencesRequest::revisionIsSet() const
{
    return revisionIsSet_;
}

void ListRepositoryNavigationReferencesRequest::unsetrevision()
{
    revisionIsSet_ = false;
}

std::string ListRepositoryNavigationReferencesRequest::getRef() const
{
    return ref_;
}

void ListRepositoryNavigationReferencesRequest::setRef(const std::string& value)
{
    ref_ = value;
    refIsSet_ = true;
}

bool ListRepositoryNavigationReferencesRequest::refIsSet() const
{
    return refIsSet_;
}

void ListRepositoryNavigationReferencesRequest::unsetref()
{
    refIsSet_ = false;
}

std::string ListRepositoryNavigationReferencesRequest::getSymbol() const
{
    return symbol_;
}

void ListRepositoryNavigationReferencesRequest::setSymbol(const std::string& value)
{
    symbol_ = value;
    symbolIsSet_ = true;
}

bool ListRepositoryNavigationReferencesRequest::symbolIsSet() const
{
    return symbolIsSet_;
}

void ListRepositoryNavigationReferencesRequest::unsetsymbol()
{
    symbolIsSet_ = false;
}

std::string ListRepositoryNavigationReferencesRequest::getLanguage() const
{
    return language_;
}

void ListRepositoryNavigationReferencesRequest::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ListRepositoryNavigationReferencesRequest::languageIsSet() const
{
    return languageIsSet_;
}

void ListRepositoryNavigationReferencesRequest::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string ListRepositoryNavigationReferencesRequest::getBlob() const
{
    return blob_;
}

void ListRepositoryNavigationReferencesRequest::setBlob(const std::string& value)
{
    blob_ = value;
    blobIsSet_ = true;
}

bool ListRepositoryNavigationReferencesRequest::blobIsSet() const
{
    return blobIsSet_;
}

void ListRepositoryNavigationReferencesRequest::unsetblob()
{
    blobIsSet_ = false;
}

std::string ListRepositoryNavigationReferencesRequest::getFilePath() const
{
    return filePath_;
}

void ListRepositoryNavigationReferencesRequest::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool ListRepositoryNavigationReferencesRequest::filePathIsSet() const
{
    return filePathIsSet_;
}

void ListRepositoryNavigationReferencesRequest::unsetfilePath()
{
    filePathIsSet_ = false;
}

}
}
}
}
}


