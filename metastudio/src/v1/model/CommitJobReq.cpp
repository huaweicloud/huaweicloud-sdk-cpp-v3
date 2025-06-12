

#include "huaweicloud/metastudio/v1/model/CommitJobReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CommitJobReq::CommitJobReq()
{
    tagIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    sex_ = "";
    sexIsSet_ = false;
    voiceName_ = "";
    voiceNameIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    phone_ = "";
    phoneIsSet_ = false;
    appUserId_ = "";
    appUserIdIsSet_ = false;
    outputLanguage_ = "";
    outputLanguageIsSet_ = false;
    customText_ = "";
    customTextIsSet_ = false;
}

CommitJobReq::~CommitJobReq() = default;

void CommitJobReq::validate()
{
}

web::json::value CommitJobReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(sexIsSet_) {
        val[utility::conversions::to_string_t("sex")] = ModelBase::toJson(sex_);
    }
    if(voiceNameIsSet_) {
        val[utility::conversions::to_string_t("voice_name")] = ModelBase::toJson(voiceName_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(phoneIsSet_) {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(phone_);
    }
    if(appUserIdIsSet_) {
        val[utility::conversions::to_string_t("app_user_id")] = ModelBase::toJson(appUserId_);
    }
    if(outputLanguageIsSet_) {
        val[utility::conversions::to_string_t("output_language")] = ModelBase::toJson(outputLanguage_);
    }
    if(customTextIsSet_) {
        val[utility::conversions::to_string_t("custom_text")] = ModelBase::toJson(customText_);
    }

    return val;
}
bool CommitJobReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            JobTag refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("voice_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("phone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomText(refVal);
        }
    }
    return ok;
}


JobTag CommitJobReq::getTag() const
{
    return tag_;
}

void CommitJobReq::setTag(const JobTag& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool CommitJobReq::tagIsSet() const
{
    return tagIsSet_;
}

void CommitJobReq::unsettag()
{
    tagIsSet_ = false;
}

std::string CommitJobReq::getDescription() const
{
    return description_;
}

void CommitJobReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CommitJobReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CommitJobReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CommitJobReq::getSex() const
{
    return sex_;
}

void CommitJobReq::setSex(const std::string& value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool CommitJobReq::sexIsSet() const
{
    return sexIsSet_;
}

void CommitJobReq::unsetsex()
{
    sexIsSet_ = false;
}

std::string CommitJobReq::getVoiceName() const
{
    return voiceName_;
}

void CommitJobReq::setVoiceName(const std::string& value)
{
    voiceName_ = value;
    voiceNameIsSet_ = true;
}

bool CommitJobReq::voiceNameIsSet() const
{
    return voiceNameIsSet_;
}

void CommitJobReq::unsetvoiceName()
{
    voiceNameIsSet_ = false;
}

std::string CommitJobReq::getLanguage() const
{
    return language_;
}

void CommitJobReq::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool CommitJobReq::languageIsSet() const
{
    return languageIsSet_;
}

void CommitJobReq::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string CommitJobReq::getPhone() const
{
    return phone_;
}

void CommitJobReq::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool CommitJobReq::phoneIsSet() const
{
    return phoneIsSet_;
}

void CommitJobReq::unsetphone()
{
    phoneIsSet_ = false;
}

std::string CommitJobReq::getAppUserId() const
{
    return appUserId_;
}

void CommitJobReq::setAppUserId(const std::string& value)
{
    appUserId_ = value;
    appUserIdIsSet_ = true;
}

bool CommitJobReq::appUserIdIsSet() const
{
    return appUserIdIsSet_;
}

void CommitJobReq::unsetappUserId()
{
    appUserIdIsSet_ = false;
}

std::string CommitJobReq::getOutputLanguage() const
{
    return outputLanguage_;
}

void CommitJobReq::setOutputLanguage(const std::string& value)
{
    outputLanguage_ = value;
    outputLanguageIsSet_ = true;
}

bool CommitJobReq::outputLanguageIsSet() const
{
    return outputLanguageIsSet_;
}

void CommitJobReq::unsetoutputLanguage()
{
    outputLanguageIsSet_ = false;
}

std::string CommitJobReq::getCustomText() const
{
    return customText_;
}

void CommitJobReq::setCustomText(const std::string& value)
{
    customText_ = value;
    customTextIsSet_ = true;
}

bool CommitJobReq::customTextIsSet() const
{
    return customTextIsSet_;
}

void CommitJobReq::unsetcustomText()
{
    customTextIsSet_ = false;
}

}
}
}
}
}


