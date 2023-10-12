

#include "huaweicloud/gaussdbforopengauss/v3/model/GaussDBforOpenGaussListDatabase.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




GaussDBforOpenGaussListDatabase::GaussDBforOpenGaussListDatabase()
{
    name_ = "";
    nameIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    characterSet_ = "";
    characterSetIsSet_ = false;
    collateSet_ = "";
    collateSetIsSet_ = false;
    size_ = "";
    sizeIsSet_ = false;
}

GaussDBforOpenGaussListDatabase::~GaussDBforOpenGaussListDatabase() = default;

void GaussDBforOpenGaussListDatabase::validate()
{
}

web::json::value GaussDBforOpenGaussListDatabase::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(characterSetIsSet_) {
        val[utility::conversions::to_string_t("character_set")] = ModelBase::toJson(characterSet_);
    }
    if(collateSetIsSet_) {
        val[utility::conversions::to_string_t("collate_set")] = ModelBase::toJson(collateSet_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool GaussDBforOpenGaussListDatabase::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("character_set"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("character_set"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCharacterSet(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("collate_set"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("collate_set"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCollateSet(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}


std::string GaussDBforOpenGaussListDatabase::getName() const
{
    return name_;
}

void GaussDBforOpenGaussListDatabase::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GaussDBforOpenGaussListDatabase::nameIsSet() const
{
    return nameIsSet_;
}

void GaussDBforOpenGaussListDatabase::unsetname()
{
    nameIsSet_ = false;
}

std::string GaussDBforOpenGaussListDatabase::getOwner() const
{
    return owner_;
}

void GaussDBforOpenGaussListDatabase::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool GaussDBforOpenGaussListDatabase::ownerIsSet() const
{
    return ownerIsSet_;
}

void GaussDBforOpenGaussListDatabase::unsetowner()
{
    ownerIsSet_ = false;
}

std::string GaussDBforOpenGaussListDatabase::getCharacterSet() const
{
    return characterSet_;
}

void GaussDBforOpenGaussListDatabase::setCharacterSet(const std::string& value)
{
    characterSet_ = value;
    characterSetIsSet_ = true;
}

bool GaussDBforOpenGaussListDatabase::characterSetIsSet() const
{
    return characterSetIsSet_;
}

void GaussDBforOpenGaussListDatabase::unsetcharacterSet()
{
    characterSetIsSet_ = false;
}

std::string GaussDBforOpenGaussListDatabase::getCollateSet() const
{
    return collateSet_;
}

void GaussDBforOpenGaussListDatabase::setCollateSet(const std::string& value)
{
    collateSet_ = value;
    collateSetIsSet_ = true;
}

bool GaussDBforOpenGaussListDatabase::collateSetIsSet() const
{
    return collateSetIsSet_;
}

void GaussDBforOpenGaussListDatabase::unsetcollateSet()
{
    collateSetIsSet_ = false;
}

std::string GaussDBforOpenGaussListDatabase::getSize() const
{
    return size_;
}

void GaussDBforOpenGaussListDatabase::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool GaussDBforOpenGaussListDatabase::sizeIsSet() const
{
    return sizeIsSet_;
}

void GaussDBforOpenGaussListDatabase::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


