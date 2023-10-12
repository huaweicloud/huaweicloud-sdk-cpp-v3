

#include "huaweicloud/gaussdbforopengauss/v3/model/GaussDBforOpenDatabaseForCreation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




GaussDBforOpenDatabaseForCreation::GaussDBforOpenDatabaseForCreation()
{
    name_ = "";
    nameIsSet_ = false;
    characterSet_ = "";
    characterSetIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    template_ = "";
    templateIsSet_ = false;
    lcCollate_ = "";
    lcCollateIsSet_ = false;
    lcCtype_ = "";
    lcCtypeIsSet_ = false;
}

GaussDBforOpenDatabaseForCreation::~GaussDBforOpenDatabaseForCreation() = default;

void GaussDBforOpenDatabaseForCreation::validate()
{
}

web::json::value GaussDBforOpenDatabaseForCreation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(characterSetIsSet_) {
        val[utility::conversions::to_string_t("character_set")] = ModelBase::toJson(characterSet_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(templateIsSet_) {
        val[utility::conversions::to_string_t("template")] = ModelBase::toJson(template_);
    }
    if(lcCollateIsSet_) {
        val[utility::conversions::to_string_t("lc_collate")] = ModelBase::toJson(lcCollate_);
    }
    if(lcCtypeIsSet_) {
        val[utility::conversions::to_string_t("lc_ctype")] = ModelBase::toJson(lcCtype_);
    }

    return val;
}
bool GaussDBforOpenDatabaseForCreation::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("character_set"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("character_set"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCharacterSet(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("template"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lc_collate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lc_collate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLcCollate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lc_ctype"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lc_ctype"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLcCtype(refVal);
        }
    }
    return ok;
}


std::string GaussDBforOpenDatabaseForCreation::getName() const
{
    return name_;
}

void GaussDBforOpenDatabaseForCreation::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GaussDBforOpenDatabaseForCreation::nameIsSet() const
{
    return nameIsSet_;
}

void GaussDBforOpenDatabaseForCreation::unsetname()
{
    nameIsSet_ = false;
}

std::string GaussDBforOpenDatabaseForCreation::getCharacterSet() const
{
    return characterSet_;
}

void GaussDBforOpenDatabaseForCreation::setCharacterSet(const std::string& value)
{
    characterSet_ = value;
    characterSetIsSet_ = true;
}

bool GaussDBforOpenDatabaseForCreation::characterSetIsSet() const
{
    return characterSetIsSet_;
}

void GaussDBforOpenDatabaseForCreation::unsetcharacterSet()
{
    characterSetIsSet_ = false;
}

std::string GaussDBforOpenDatabaseForCreation::getOwner() const
{
    return owner_;
}

void GaussDBforOpenDatabaseForCreation::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool GaussDBforOpenDatabaseForCreation::ownerIsSet() const
{
    return ownerIsSet_;
}

void GaussDBforOpenDatabaseForCreation::unsetowner()
{
    ownerIsSet_ = false;
}

std::string GaussDBforOpenDatabaseForCreation::getTemplate() const
{
    return template_;
}

void GaussDBforOpenDatabaseForCreation::setTemplate(const std::string& value)
{
    template_ = value;
    templateIsSet_ = true;
}

bool GaussDBforOpenDatabaseForCreation::templateIsSet() const
{
    return templateIsSet_;
}

void GaussDBforOpenDatabaseForCreation::unsettemplate()
{
    templateIsSet_ = false;
}

std::string GaussDBforOpenDatabaseForCreation::getLcCollate() const
{
    return lcCollate_;
}

void GaussDBforOpenDatabaseForCreation::setLcCollate(const std::string& value)
{
    lcCollate_ = value;
    lcCollateIsSet_ = true;
}

bool GaussDBforOpenDatabaseForCreation::lcCollateIsSet() const
{
    return lcCollateIsSet_;
}

void GaussDBforOpenDatabaseForCreation::unsetlcCollate()
{
    lcCollateIsSet_ = false;
}

std::string GaussDBforOpenDatabaseForCreation::getLcCtype() const
{
    return lcCtype_;
}

void GaussDBforOpenDatabaseForCreation::setLcCtype(const std::string& value)
{
    lcCtype_ = value;
    lcCtypeIsSet_ = true;
}

bool GaussDBforOpenDatabaseForCreation::lcCtypeIsSet() const
{
    return lcCtypeIsSet_;
}

void GaussDBforOpenDatabaseForCreation::unsetlcCtype()
{
    lcCtypeIsSet_ = false;
}

}
}
}
}
}


