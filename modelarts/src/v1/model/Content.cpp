

#include "huaweicloud/modelarts/v1/model/Content.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Content::Content()
{
    ownerIsSet_ = false;
    etag_ = "";
    etagIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
    lastModified_ = "";
    lastModifiedIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
    storageClass_ = "";
    storageClassIsSet_ = false;
}

Content::~Content() = default;

void Content::validate()
{
}

web::json::value Content::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(etagIsSet_) {
        val[utility::conversions::to_string_t("etag")] = ModelBase::toJson(etag_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(lastModifiedIsSet_) {
        val[utility::conversions::to_string_t("last_modified")] = ModelBase::toJson(lastModified_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(storageClassIsSet_) {
        val[utility::conversions::to_string_t("storage_class")] = ModelBase::toJson(storageClass_);
    }

    return val;
}
bool Content::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            Owner refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModified(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("storage_class"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage_class"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageClass(refVal);
        }
    }
    return ok;
}


Owner Content::getOwner() const
{
    return owner_;
}

void Content::setOwner(const Owner& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool Content::ownerIsSet() const
{
    return ownerIsSet_;
}

void Content::unsetowner()
{
    ownerIsSet_ = false;
}

std::string Content::getEtag() const
{
    return etag_;
}

void Content::setEtag(const std::string& value)
{
    etag_ = value;
    etagIsSet_ = true;
}

bool Content::etagIsSet() const
{
    return etagIsSet_;
}

void Content::unsetetag()
{
    etagIsSet_ = false;
}

std::string Content::getType() const
{
    return type_;
}

void Content::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Content::typeIsSet() const
{
    return typeIsSet_;
}

void Content::unsettype()
{
    typeIsSet_ = false;
}

std::string Content::getKey() const
{
    return key_;
}

void Content::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool Content::keyIsSet() const
{
    return keyIsSet_;
}

void Content::unsetkey()
{
    keyIsSet_ = false;
}

std::string Content::getLastModified() const
{
    return lastModified_;
}

void Content::setLastModified(const std::string& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool Content::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void Content::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

int64_t Content::getSize() const
{
    return size_;
}

void Content::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool Content::sizeIsSet() const
{
    return sizeIsSet_;
}

void Content::unsetsize()
{
    sizeIsSet_ = false;
}

std::string Content::getStorageClass() const
{
    return storageClass_;
}

void Content::setStorageClass(const std::string& value)
{
    storageClass_ = value;
    storageClassIsSet_ = true;
}

bool Content::storageClassIsSet() const
{
    return storageClassIsSet_;
}

void Content::unsetstorageClass()
{
    storageClassIsSet_ = false;
}

}
}
}
}
}


