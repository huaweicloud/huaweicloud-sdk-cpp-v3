

#include "huaweicloud/meeting/v1/model/CreateAuthRandomResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CreateAuthRandomResponse::CreateAuthRandomResponse()
{
    random_ = "";
    randomIsSet_ = false;
    subject_ = "";
    subjectIsSet_ = false;
    confMode_ = "";
    confModeIsSet_ = false;
    webinar_ = false;
    webinarIsSet_ = false;
    needPassword_ = false;
    needPasswordIsSet_ = false;
    supportApplets_ = false;
    supportAppletsIsSet_ = false;
}

CreateAuthRandomResponse::~CreateAuthRandomResponse() = default;

void CreateAuthRandomResponse::validate()
{
}

web::json::value CreateAuthRandomResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(randomIsSet_) {
        val[utility::conversions::to_string_t("random")] = ModelBase::toJson(random_);
    }
    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }
    if(confModeIsSet_) {
        val[utility::conversions::to_string_t("conf_mode")] = ModelBase::toJson(confMode_);
    }
    if(webinarIsSet_) {
        val[utility::conversions::to_string_t("webinar")] = ModelBase::toJson(webinar_);
    }
    if(needPasswordIsSet_) {
        val[utility::conversions::to_string_t("need_password")] = ModelBase::toJson(needPassword_);
    }
    if(supportAppletsIsSet_) {
        val[utility::conversions::to_string_t("support_applets")] = ModelBase::toJson(supportApplets_);
    }

    return val;
}
bool CreateAuthRandomResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("random"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("random"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRandom(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subject"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subject"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conf_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conf_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("webinar"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("webinar"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebinar(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("need_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("need_password"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_applets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_applets"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportApplets(refVal);
        }
    }
    return ok;
}


std::string CreateAuthRandomResponse::getRandom() const
{
    return random_;
}

void CreateAuthRandomResponse::setRandom(const std::string& value)
{
    random_ = value;
    randomIsSet_ = true;
}

bool CreateAuthRandomResponse::randomIsSet() const
{
    return randomIsSet_;
}

void CreateAuthRandomResponse::unsetrandom()
{
    randomIsSet_ = false;
}

std::string CreateAuthRandomResponse::getSubject() const
{
    return subject_;
}

void CreateAuthRandomResponse::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool CreateAuthRandomResponse::subjectIsSet() const
{
    return subjectIsSet_;
}

void CreateAuthRandomResponse::unsetsubject()
{
    subjectIsSet_ = false;
}

std::string CreateAuthRandomResponse::getConfMode() const
{
    return confMode_;
}

void CreateAuthRandomResponse::setConfMode(const std::string& value)
{
    confMode_ = value;
    confModeIsSet_ = true;
}

bool CreateAuthRandomResponse::confModeIsSet() const
{
    return confModeIsSet_;
}

void CreateAuthRandomResponse::unsetconfMode()
{
    confModeIsSet_ = false;
}

bool CreateAuthRandomResponse::isWebinar() const
{
    return webinar_;
}

void CreateAuthRandomResponse::setWebinar(bool value)
{
    webinar_ = value;
    webinarIsSet_ = true;
}

bool CreateAuthRandomResponse::webinarIsSet() const
{
    return webinarIsSet_;
}

void CreateAuthRandomResponse::unsetwebinar()
{
    webinarIsSet_ = false;
}

bool CreateAuthRandomResponse::isNeedPassword() const
{
    return needPassword_;
}

void CreateAuthRandomResponse::setNeedPassword(bool value)
{
    needPassword_ = value;
    needPasswordIsSet_ = true;
}

bool CreateAuthRandomResponse::needPasswordIsSet() const
{
    return needPasswordIsSet_;
}

void CreateAuthRandomResponse::unsetneedPassword()
{
    needPasswordIsSet_ = false;
}

bool CreateAuthRandomResponse::isSupportApplets() const
{
    return supportApplets_;
}

void CreateAuthRandomResponse::setSupportApplets(bool value)
{
    supportApplets_ = value;
    supportAppletsIsSet_ = true;
}

bool CreateAuthRandomResponse::supportAppletsIsSet() const
{
    return supportAppletsIsSet_;
}

void CreateAuthRandomResponse::unsetsupportApplets()
{
    supportAppletsIsSet_ = false;
}

}
}
}
}
}


