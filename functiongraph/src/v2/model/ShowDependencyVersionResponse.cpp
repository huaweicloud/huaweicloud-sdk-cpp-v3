

#include "huaweicloud/functiongraph/v2/model/ShowDependencyVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowDependencyVersionResponse::ShowDependencyVersionResponse()
{
    id_ = "";
    idIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    link_ = "";
    linkIsSet_ = false;
    runtime_ = "";
    runtimeIsSet_ = false;
    etag_ = "";
    etagIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    version_ = 0L;
    versionIsSet_ = false;
    lastModified_ = 0L;
    lastModifiedIsSet_ = false;
    depId_ = "";
    depIdIsSet_ = false;
    downloadLink_ = "";
    downloadLinkIsSet_ = false;
    isShared_ = false;
    isSharedIsSet_ = false;
}

ShowDependencyVersionResponse::~ShowDependencyVersionResponse() = default;

void ShowDependencyVersionResponse::validate()
{
}

web::json::value ShowDependencyVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(linkIsSet_) {
        val[utility::conversions::to_string_t("link")] = ModelBase::toJson(link_);
    }
    if(runtimeIsSet_) {
        val[utility::conversions::to_string_t("runtime")] = ModelBase::toJson(runtime_);
    }
    if(etagIsSet_) {
        val[utility::conversions::to_string_t("etag")] = ModelBase::toJson(etag_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(lastModifiedIsSet_) {
        val[utility::conversions::to_string_t("last_modified")] = ModelBase::toJson(lastModified_);
    }
    if(depIdIsSet_) {
        val[utility::conversions::to_string_t("dep_id")] = ModelBase::toJson(depId_);
    }
    if(downloadLinkIsSet_) {
        val[utility::conversions::to_string_t("download_link")] = ModelBase::toJson(downloadLink_);
    }
    if(isSharedIsSet_) {
        val[utility::conversions::to_string_t("is_shared")] = ModelBase::toJson(isShared_);
    }

    return val;
}
bool ShowDependencyVersionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLink(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("runtime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("etag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("etag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEtag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModified(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dep_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dep_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDepId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("download_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("download_link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDownloadLink(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_shared"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_shared"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsShared(refVal);
        }
    }
    return ok;
}


std::string ShowDependencyVersionResponse::getId() const
{
    return id_;
}

void ShowDependencyVersionResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowDependencyVersionResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowDependencyVersionResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowDependencyVersionResponse::getOwner() const
{
    return owner_;
}

void ShowDependencyVersionResponse::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool ShowDependencyVersionResponse::ownerIsSet() const
{
    return ownerIsSet_;
}

void ShowDependencyVersionResponse::unsetowner()
{
    ownerIsSet_ = false;
}

std::string ShowDependencyVersionResponse::getLink() const
{
    return link_;
}

void ShowDependencyVersionResponse::setLink(const std::string& value)
{
    link_ = value;
    linkIsSet_ = true;
}

bool ShowDependencyVersionResponse::linkIsSet() const
{
    return linkIsSet_;
}

void ShowDependencyVersionResponse::unsetlink()
{
    linkIsSet_ = false;
}

std::string ShowDependencyVersionResponse::getRuntime() const
{
    return runtime_;
}

void ShowDependencyVersionResponse::setRuntime(const std::string& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool ShowDependencyVersionResponse::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void ShowDependencyVersionResponse::unsetruntime()
{
    runtimeIsSet_ = false;
}

std::string ShowDependencyVersionResponse::getEtag() const
{
    return etag_;
}

void ShowDependencyVersionResponse::setEtag(const std::string& value)
{
    etag_ = value;
    etagIsSet_ = true;
}

bool ShowDependencyVersionResponse::etagIsSet() const
{
    return etagIsSet_;
}

void ShowDependencyVersionResponse::unsetetag()
{
    etagIsSet_ = false;
}

int64_t ShowDependencyVersionResponse::getSize() const
{
    return size_;
}

void ShowDependencyVersionResponse::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ShowDependencyVersionResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void ShowDependencyVersionResponse::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ShowDependencyVersionResponse::getName() const
{
    return name_;
}

void ShowDependencyVersionResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowDependencyVersionResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowDependencyVersionResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowDependencyVersionResponse::getDescription() const
{
    return description_;
}

void ShowDependencyVersionResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowDependencyVersionResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowDependencyVersionResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowDependencyVersionResponse::getFileName() const
{
    return fileName_;
}

void ShowDependencyVersionResponse::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool ShowDependencyVersionResponse::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void ShowDependencyVersionResponse::unsetfileName()
{
    fileNameIsSet_ = false;
}

int64_t ShowDependencyVersionResponse::getVersion() const
{
    return version_;
}

void ShowDependencyVersionResponse::setVersion(int64_t value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowDependencyVersionResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ShowDependencyVersionResponse::unsetversion()
{
    versionIsSet_ = false;
}

int64_t ShowDependencyVersionResponse::getLastModified() const
{
    return lastModified_;
}

void ShowDependencyVersionResponse::setLastModified(int64_t value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool ShowDependencyVersionResponse::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void ShowDependencyVersionResponse::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

std::string ShowDependencyVersionResponse::getDepId() const
{
    return depId_;
}

void ShowDependencyVersionResponse::setDepId(const std::string& value)
{
    depId_ = value;
    depIdIsSet_ = true;
}

bool ShowDependencyVersionResponse::depIdIsSet() const
{
    return depIdIsSet_;
}

void ShowDependencyVersionResponse::unsetdepId()
{
    depIdIsSet_ = false;
}

std::string ShowDependencyVersionResponse::getDownloadLink() const
{
    return downloadLink_;
}

void ShowDependencyVersionResponse::setDownloadLink(const std::string& value)
{
    downloadLink_ = value;
    downloadLinkIsSet_ = true;
}

bool ShowDependencyVersionResponse::downloadLinkIsSet() const
{
    return downloadLinkIsSet_;
}

void ShowDependencyVersionResponse::unsetdownloadLink()
{
    downloadLinkIsSet_ = false;
}

bool ShowDependencyVersionResponse::isIsShared() const
{
    return isShared_;
}

void ShowDependencyVersionResponse::setIsShared(bool value)
{
    isShared_ = value;
    isSharedIsSet_ = true;
}

bool ShowDependencyVersionResponse::isSharedIsSet() const
{
    return isSharedIsSet_;
}

void ShowDependencyVersionResponse::unsetisShared()
{
    isSharedIsSet_ = false;
}

}
}
}
}
}


