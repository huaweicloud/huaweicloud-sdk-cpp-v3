

#include "huaweicloud/functiongraph/v2/model/ListDependenciesResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListDependenciesResult::ListDependenciesResult()
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
}

ListDependenciesResult::~ListDependenciesResult() = default;

void ListDependenciesResult::validate()
{
}

web::json::value ListDependenciesResult::toJson() const
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

    return val;
}
bool ListDependenciesResult::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListDependenciesResult::getId() const
{
    return id_;
}

void ListDependenciesResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListDependenciesResult::idIsSet() const
{
    return idIsSet_;
}

void ListDependenciesResult::unsetid()
{
    idIsSet_ = false;
}

std::string ListDependenciesResult::getOwner() const
{
    return owner_;
}

void ListDependenciesResult::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool ListDependenciesResult::ownerIsSet() const
{
    return ownerIsSet_;
}

void ListDependenciesResult::unsetowner()
{
    ownerIsSet_ = false;
}

std::string ListDependenciesResult::getLink() const
{
    return link_;
}

void ListDependenciesResult::setLink(const std::string& value)
{
    link_ = value;
    linkIsSet_ = true;
}

bool ListDependenciesResult::linkIsSet() const
{
    return linkIsSet_;
}

void ListDependenciesResult::unsetlink()
{
    linkIsSet_ = false;
}

std::string ListDependenciesResult::getRuntime() const
{
    return runtime_;
}

void ListDependenciesResult::setRuntime(const std::string& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool ListDependenciesResult::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void ListDependenciesResult::unsetruntime()
{
    runtimeIsSet_ = false;
}

std::string ListDependenciesResult::getEtag() const
{
    return etag_;
}

void ListDependenciesResult::setEtag(const std::string& value)
{
    etag_ = value;
    etagIsSet_ = true;
}

bool ListDependenciesResult::etagIsSet() const
{
    return etagIsSet_;
}

void ListDependenciesResult::unsetetag()
{
    etagIsSet_ = false;
}

int64_t ListDependenciesResult::getSize() const
{
    return size_;
}

void ListDependenciesResult::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListDependenciesResult::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListDependenciesResult::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ListDependenciesResult::getName() const
{
    return name_;
}

void ListDependenciesResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListDependenciesResult::nameIsSet() const
{
    return nameIsSet_;
}

void ListDependenciesResult::unsetname()
{
    nameIsSet_ = false;
}

std::string ListDependenciesResult::getFileName() const
{
    return fileName_;
}

void ListDependenciesResult::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool ListDependenciesResult::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void ListDependenciesResult::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string ListDependenciesResult::getDescription() const
{
    return description_;
}

void ListDependenciesResult::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ListDependenciesResult::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ListDependenciesResult::unsetdescription()
{
    descriptionIsSet_ = false;
}

int64_t ListDependenciesResult::getVersion() const
{
    return version_;
}

void ListDependenciesResult::setVersion(int64_t value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ListDependenciesResult::versionIsSet() const
{
    return versionIsSet_;
}

void ListDependenciesResult::unsetversion()
{
    versionIsSet_ = false;
}

int64_t ListDependenciesResult::getLastModified() const
{
    return lastModified_;
}

void ListDependenciesResult::setLastModified(int64_t value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool ListDependenciesResult::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void ListDependenciesResult::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

}
}
}
}
}


