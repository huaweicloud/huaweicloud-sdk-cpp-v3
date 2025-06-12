

#include "huaweicloud/metastudio/v1/model/VoiceProperties.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




VoiceProperties::VoiceProperties()
{
    jobTag_ = "";
    jobTagIsSet_ = false;
    sex_ = "";
    sexIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
}

VoiceProperties::~VoiceProperties() = default;

void VoiceProperties::validate()
{
}

web::json::value VoiceProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobTagIsSet_) {
        val[utility::conversions::to_string_t("job_tag")] = ModelBase::toJson(jobTag_);
    }
    if(sexIsSet_) {
        val[utility::conversions::to_string_t("sex")] = ModelBase::toJson(sex_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }

    return val;
}
bool VoiceProperties::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobTag(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    return ok;
}


std::string VoiceProperties::getJobTag() const
{
    return jobTag_;
}

void VoiceProperties::setJobTag(const std::string& value)
{
    jobTag_ = value;
    jobTagIsSet_ = true;
}

bool VoiceProperties::jobTagIsSet() const
{
    return jobTagIsSet_;
}

void VoiceProperties::unsetjobTag()
{
    jobTagIsSet_ = false;
}

std::string VoiceProperties::getSex() const
{
    return sex_;
}

void VoiceProperties::setSex(const std::string& value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool VoiceProperties::sexIsSet() const
{
    return sexIsSet_;
}

void VoiceProperties::unsetsex()
{
    sexIsSet_ = false;
}

std::string VoiceProperties::getLanguage() const
{
    return language_;
}

void VoiceProperties::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool VoiceProperties::languageIsSet() const
{
    return languageIsSet_;
}

void VoiceProperties::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}


