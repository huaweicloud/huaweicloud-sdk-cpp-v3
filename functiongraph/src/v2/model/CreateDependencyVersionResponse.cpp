

#include "huaweicloud/functiongraph/v2/model/CreateDependencyVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CreateDependencyVersionResponse::CreateDependencyVersionResponse()
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

CreateDependencyVersionResponse::~CreateDependencyVersionResponse() = default;

void CreateDependencyVersionResponse::validate()
{
}

web::json::value CreateDependencyVersionResponse::toJson() const
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
bool CreateDependencyVersionResponse::fromJson(const web::json::value& val)
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


std::string CreateDependencyVersionResponse::getId() const
{
    return id_;
}

void CreateDependencyVersionResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateDependencyVersionResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateDependencyVersionResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CreateDependencyVersionResponse::getOwner() const
{
    return owner_;
}

void CreateDependencyVersionResponse::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool CreateDependencyVersionResponse::ownerIsSet() const
{
    return ownerIsSet_;
}

void CreateDependencyVersionResponse::unsetowner()
{
    ownerIsSet_ = false;
}

std::string CreateDependencyVersionResponse::getLink() const
{
    return link_;
}

void CreateDependencyVersionResponse::setLink(const std::string& value)
{
    link_ = value;
    linkIsSet_ = true;
}

bool CreateDependencyVersionResponse::linkIsSet() const
{
    return linkIsSet_;
}

void CreateDependencyVersionResponse::unsetlink()
{
    linkIsSet_ = false;
}

std::string CreateDependencyVersionResponse::getRuntime() const
{
    return runtime_;
}

void CreateDependencyVersionResponse::setRuntime(const std::string& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool CreateDependencyVersionResponse::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void CreateDependencyVersionResponse::unsetruntime()
{
    runtimeIsSet_ = false;
}

std::string CreateDependencyVersionResponse::getEtag() const
{
    return etag_;
}

void CreateDependencyVersionResponse::setEtag(const std::string& value)
{
    etag_ = value;
    etagIsSet_ = true;
}

bool CreateDependencyVersionResponse::etagIsSet() const
{
    return etagIsSet_;
}

void CreateDependencyVersionResponse::unsetetag()
{
    etagIsSet_ = false;
}

int64_t CreateDependencyVersionResponse::getSize() const
{
    return size_;
}

void CreateDependencyVersionResponse::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool CreateDependencyVersionResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void CreateDependencyVersionResponse::unsetsize()
{
    sizeIsSet_ = false;
}

std::string CreateDependencyVersionResponse::getName() const
{
    return name_;
}

void CreateDependencyVersionResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateDependencyVersionResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateDependencyVersionResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateDependencyVersionResponse::getDescription() const
{
    return description_;
}

void CreateDependencyVersionResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateDependencyVersionResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateDependencyVersionResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateDependencyVersionResponse::getFileName() const
{
    return fileName_;
}

void CreateDependencyVersionResponse::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool CreateDependencyVersionResponse::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void CreateDependencyVersionResponse::unsetfileName()
{
    fileNameIsSet_ = false;
}

int64_t CreateDependencyVersionResponse::getVersion() const
{
    return version_;
}

void CreateDependencyVersionResponse::setVersion(int64_t value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool CreateDependencyVersionResponse::versionIsSet() const
{
    return versionIsSet_;
}

void CreateDependencyVersionResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::string CreateDependencyVersionResponse::getDepId() const
{
    return depId_;
}

void CreateDependencyVersionResponse::setDepId(const std::string& value)
{
    depId_ = value;
    depIdIsSet_ = true;
}

bool CreateDependencyVersionResponse::depIdIsSet() const
{
    return depIdIsSet_;
}

void CreateDependencyVersionResponse::unsetdepId()
{
    depIdIsSet_ = false;
}

int64_t CreateDependencyVersionResponse::getLastModified() const
{
    return lastModified_;
}

void CreateDependencyVersionResponse::setLastModified(int64_t value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool CreateDependencyVersionResponse::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void CreateDependencyVersionResponse::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

}
}
}
}
}


