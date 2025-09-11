

#include "huaweicloud/functiongraph/v2/model/Dependency.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




Dependency::Dependency()
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
    depId_ = "";
    depIdIsSet_ = false;
    lastModified_ = 0L;
    lastModifiedIsSet_ = false;
}

Dependency::~Dependency() = default;

void Dependency::validate()
{
}

web::json::value Dependency::toJson() const
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
    if(depIdIsSet_) {
        val[utility::conversions::to_string_t("dep_id")] = ModelBase::toJson(depId_);
    }
    if(lastModifiedIsSet_) {
        val[utility::conversions::to_string_t("last_modified")] = ModelBase::toJson(lastModified_);
    }

    return val;
}
bool Dependency::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("dep_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dep_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDepId(refVal);
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


std::string Dependency::getId() const
{
    return id_;
}

void Dependency::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Dependency::idIsSet() const
{
    return idIsSet_;
}

void Dependency::unsetid()
{
    idIsSet_ = false;
}

std::string Dependency::getOwner() const
{
    return owner_;
}

void Dependency::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool Dependency::ownerIsSet() const
{
    return ownerIsSet_;
}

void Dependency::unsetowner()
{
    ownerIsSet_ = false;
}

std::string Dependency::getLink() const
{
    return link_;
}

void Dependency::setLink(const std::string& value)
{
    link_ = value;
    linkIsSet_ = true;
}

bool Dependency::linkIsSet() const
{
    return linkIsSet_;
}

void Dependency::unsetlink()
{
    linkIsSet_ = false;
}

std::string Dependency::getRuntime() const
{
    return runtime_;
}

void Dependency::setRuntime(const std::string& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool Dependency::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void Dependency::unsetruntime()
{
    runtimeIsSet_ = false;
}

std::string Dependency::getEtag() const
{
    return etag_;
}

void Dependency::setEtag(const std::string& value)
{
    etag_ = value;
    etagIsSet_ = true;
}

bool Dependency::etagIsSet() const
{
    return etagIsSet_;
}

void Dependency::unsetetag()
{
    etagIsSet_ = false;
}

int64_t Dependency::getSize() const
{
    return size_;
}

void Dependency::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool Dependency::sizeIsSet() const
{
    return sizeIsSet_;
}

void Dependency::unsetsize()
{
    sizeIsSet_ = false;
}

std::string Dependency::getName() const
{
    return name_;
}

void Dependency::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Dependency::nameIsSet() const
{
    return nameIsSet_;
}

void Dependency::unsetname()
{
    nameIsSet_ = false;
}

std::string Dependency::getDescription() const
{
    return description_;
}

void Dependency::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool Dependency::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void Dependency::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string Dependency::getFileName() const
{
    return fileName_;
}

void Dependency::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool Dependency::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void Dependency::unsetfileName()
{
    fileNameIsSet_ = false;
}

int64_t Dependency::getVersion() const
{
    return version_;
}

void Dependency::setVersion(int64_t value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool Dependency::versionIsSet() const
{
    return versionIsSet_;
}

void Dependency::unsetversion()
{
    versionIsSet_ = false;
}

std::string Dependency::getDepId() const
{
    return depId_;
}

void Dependency::setDepId(const std::string& value)
{
    depId_ = value;
    depIdIsSet_ = true;
}

bool Dependency::depIdIsSet() const
{
    return depIdIsSet_;
}

void Dependency::unsetdepId()
{
    depIdIsSet_ = false;
}

int64_t Dependency::getLastModified() const
{
    return lastModified_;
}

void Dependency::setLastModified(int64_t value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool Dependency::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void Dependency::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

}
}
}
}
}


