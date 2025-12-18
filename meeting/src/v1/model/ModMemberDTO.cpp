

#include "huaweicloud/meeting/v1/model/ModMemberDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ModMemberDTO::ModMemberDTO()
{
    name_ = "";
    nameIsSet_ = false;
    englishName_ = "";
    englishNameIsSet_ = false;
    signature_ = "";
    signatureIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    desc_ = "";
    descIsSet_ = false;
}

ModMemberDTO::~ModMemberDTO() = default;

void ModMemberDTO::validate()
{
}

web::json::value ModMemberDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(englishNameIsSet_) {
        val[utility::conversions::to_string_t("englishName")] = ModelBase::toJson(englishName_);
    }
    if(signatureIsSet_) {
        val[utility::conversions::to_string_t("signature")] = ModelBase::toJson(signature_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(descIsSet_) {
        val[utility::conversions::to_string_t("desc")] = ModelBase::toJson(desc_);
    }

    return val;
}
bool ModMemberDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("englishName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("englishName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnglishName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("signature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("signature"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSignature(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDesc(refVal);
        }
    }
    return ok;
}


std::string ModMemberDTO::getName() const
{
    return name_;
}

void ModMemberDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ModMemberDTO::nameIsSet() const
{
    return nameIsSet_;
}

void ModMemberDTO::unsetname()
{
    nameIsSet_ = false;
}

std::string ModMemberDTO::getEnglishName() const
{
    return englishName_;
}

void ModMemberDTO::setEnglishName(const std::string& value)
{
    englishName_ = value;
    englishNameIsSet_ = true;
}

bool ModMemberDTO::englishNameIsSet() const
{
    return englishNameIsSet_;
}

void ModMemberDTO::unsetenglishName()
{
    englishNameIsSet_ = false;
}

std::string ModMemberDTO::getSignature() const
{
    return signature_;
}

void ModMemberDTO::setSignature(const std::string& value)
{
    signature_ = value;
    signatureIsSet_ = true;
}

bool ModMemberDTO::signatureIsSet() const
{
    return signatureIsSet_;
}

void ModMemberDTO::unsetsignature()
{
    signatureIsSet_ = false;
}

std::string ModMemberDTO::getTitle() const
{
    return title_;
}

void ModMemberDTO::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool ModMemberDTO::titleIsSet() const
{
    return titleIsSet_;
}

void ModMemberDTO::unsettitle()
{
    titleIsSet_ = false;
}

std::string ModMemberDTO::getDesc() const
{
    return desc_;
}

void ModMemberDTO::setDesc(const std::string& value)
{
    desc_ = value;
    descIsSet_ = true;
}

bool ModMemberDTO::descIsSet() const
{
    return descIsSet_;
}

void ModMemberDTO::unsetdesc()
{
    descIsSet_ = false;
}

}
}
}
}
}


