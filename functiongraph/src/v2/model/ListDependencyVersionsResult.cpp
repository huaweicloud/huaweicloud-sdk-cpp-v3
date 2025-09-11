

#include "huaweicloud/functiongraph/v2/model/ListDependencyVersionsResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListDependencyVersionsResult::ListDependencyVersionsResult()
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
    fileName_ = "";
    fileNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    version_ = 0L;
    versionIsSet_ = false;
    lastModified_ = 0L;
    lastModifiedIsSet_ = false;
    depId_ = "";
    depIdIsSet_ = false;
    isShared_ = false;
    isSharedIsSet_ = false;
}

ListDependencyVersionsResult::~ListDependencyVersionsResult() = default;

void ListDependencyVersionsResult::validate()
{
}

web::json::value ListDependencyVersionsResult::toJson() const
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
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
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
    if(isSharedIsSet_) {
        val[utility::conversions::to_string_t("is_shared")] = ModelBase::toJson(isShared_);
    }

    return val;
}
bool ListDependencyVersionsResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
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


std::string ListDependencyVersionsResult::getId() const
{
    return id_;
}

void ListDependencyVersionsResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListDependencyVersionsResult::idIsSet() const
{
    return idIsSet_;
}

void ListDependencyVersionsResult::unsetid()
{
    idIsSet_ = false;
}

std::string ListDependencyVersionsResult::getOwner() const
{
    return owner_;
}

void ListDependencyVersionsResult::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool ListDependencyVersionsResult::ownerIsSet() const
{
    return ownerIsSet_;
}

void ListDependencyVersionsResult::unsetowner()
{
    ownerIsSet_ = false;
}

std::string ListDependencyVersionsResult::getLink() const
{
    return link_;
}

void ListDependencyVersionsResult::setLink(const std::string& value)
{
    link_ = value;
    linkIsSet_ = true;
}

bool ListDependencyVersionsResult::linkIsSet() const
{
    return linkIsSet_;
}

void ListDependencyVersionsResult::unsetlink()
{
    linkIsSet_ = false;
}

std::string ListDependencyVersionsResult::getRuntime() const
{
    return runtime_;
}

void ListDependencyVersionsResult::setRuntime(const std::string& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool ListDependencyVersionsResult::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void ListDependencyVersionsResult::unsetruntime()
{
    runtimeIsSet_ = false;
}

std::string ListDependencyVersionsResult::getEtag() const
{
    return etag_;
}

void ListDependencyVersionsResult::setEtag(const std::string& value)
{
    etag_ = value;
    etagIsSet_ = true;
}

bool ListDependencyVersionsResult::etagIsSet() const
{
    return etagIsSet_;
}

void ListDependencyVersionsResult::unsetetag()
{
    etagIsSet_ = false;
}

int64_t ListDependencyVersionsResult::getSize() const
{
    return size_;
}

void ListDependencyVersionsResult::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListDependencyVersionsResult::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListDependencyVersionsResult::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ListDependencyVersionsResult::getName() const
{
    return name_;
}

void ListDependencyVersionsResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListDependencyVersionsResult::nameIsSet() const
{
    return nameIsSet_;
}

void ListDependencyVersionsResult::unsetname()
{
    nameIsSet_ = false;
}

std::string ListDependencyVersionsResult::getFileName() const
{
    return fileName_;
}

void ListDependencyVersionsResult::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool ListDependencyVersionsResult::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void ListDependencyVersionsResult::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string ListDependencyVersionsResult::getDescription() const
{
    return description_;
}

void ListDependencyVersionsResult::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ListDependencyVersionsResult::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ListDependencyVersionsResult::unsetdescription()
{
    descriptionIsSet_ = false;
}

int64_t ListDependencyVersionsResult::getVersion() const
{
    return version_;
}

void ListDependencyVersionsResult::setVersion(int64_t value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ListDependencyVersionsResult::versionIsSet() const
{
    return versionIsSet_;
}

void ListDependencyVersionsResult::unsetversion()
{
    versionIsSet_ = false;
}

int64_t ListDependencyVersionsResult::getLastModified() const
{
    return lastModified_;
}

void ListDependencyVersionsResult::setLastModified(int64_t value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool ListDependencyVersionsResult::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void ListDependencyVersionsResult::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

std::string ListDependencyVersionsResult::getDepId() const
{
    return depId_;
}

void ListDependencyVersionsResult::setDepId(const std::string& value)
{
    depId_ = value;
    depIdIsSet_ = true;
}

bool ListDependencyVersionsResult::depIdIsSet() const
{
    return depIdIsSet_;
}

void ListDependencyVersionsResult::unsetdepId()
{
    depIdIsSet_ = false;
}

bool ListDependencyVersionsResult::isIsShared() const
{
    return isShared_;
}

void ListDependencyVersionsResult::setIsShared(bool value)
{
    isShared_ = value;
    isSharedIsSet_ = true;
}

bool ListDependencyVersionsResult::isSharedIsSet() const
{
    return isSharedIsSet_;
}

void ListDependencyVersionsResult::unsetisShared()
{
    isSharedIsSet_ = false;
}

}
}
}
}
}


