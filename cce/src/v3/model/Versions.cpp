

#include "huaweicloud/cce/v3/model/Versions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




Versions::Versions()
{
    version_ = "";
    versionIsSet_ = false;
    inputIsSet_ = false;
    stable_ = false;
    stableIsSet_ = false;
    translateIsSet_ = false;
    supportVersionsIsSet_ = false;
    creationTimestampIsSet_ = false;
    updateTimestampIsSet_ = false;
}

Versions::~Versions() = default;

void Versions::validate()
{
}

web::json::value Versions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(stableIsSet_) {
        val[utility::conversions::to_string_t("stable")] = ModelBase::toJson(stable_);
    }
    if(translateIsSet_) {
        val[utility::conversions::to_string_t("translate")] = ModelBase::toJson(translate_);
    }
    if(supportVersionsIsSet_) {
        val[utility::conversions::to_string_t("supportVersions")] = ModelBase::toJson(supportVersions_);
    }
    if(creationTimestampIsSet_) {
        val[utility::conversions::to_string_t("creationTimestamp")] = ModelBase::toJson(creationTimestamp_);
    }
    if(updateTimestampIsSet_) {
        val[utility::conversions::to_string_t("updateTimestamp")] = ModelBase::toJson(updateTimestamp_);
    }

    return val;
}
bool Versions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("translate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("translate"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTranslate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("supportVersions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("supportVersions"));
        if(!fieldValue.is_null())
        {
            std::vector<SupportVersions> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportVersions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creationTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creationTimestamp"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updateTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updateTimestamp"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimestamp(refVal);
        }
    }
    return ok;
}


std::string Versions::getVersion() const
{
    return version_;
}

void Versions::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool Versions::versionIsSet() const
{
    return versionIsSet_;
}

void Versions::unsetversion()
{
    versionIsSet_ = false;
}

Object Versions::getInput() const
{
    return input_;
}

void Versions::setInput(const Object& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool Versions::inputIsSet() const
{
    return inputIsSet_;
}

void Versions::unsetinput()
{
    inputIsSet_ = false;
}

bool Versions::isStable() const
{
    return stable_;
}

void Versions::setStable(bool value)
{
    stable_ = value;
    stableIsSet_ = true;
}

bool Versions::stableIsSet() const
{
    return stableIsSet_;
}

void Versions::unsetstable()
{
    stableIsSet_ = false;
}

Object Versions::getTranslate() const
{
    return translate_;
}

void Versions::setTranslate(const Object& value)
{
    translate_ = value;
    translateIsSet_ = true;
}

bool Versions::translateIsSet() const
{
    return translateIsSet_;
}

void Versions::unsettranslate()
{
    translateIsSet_ = false;
}

std::vector<SupportVersions>& Versions::getSupportVersions()
{
    return supportVersions_;
}

void Versions::setSupportVersions(const std::vector<SupportVersions>& value)
{
    supportVersions_ = value;
    supportVersionsIsSet_ = true;
}

bool Versions::supportVersionsIsSet() const
{
    return supportVersionsIsSet_;
}

void Versions::unsetsupportVersions()
{
    supportVersionsIsSet_ = false;
}

utility::datetime Versions::getCreationTimestamp() const
{
    return creationTimestamp_;
}

void Versions::setCreationTimestamp(const utility::datetime& value)
{
    creationTimestamp_ = value;
    creationTimestampIsSet_ = true;
}

bool Versions::creationTimestampIsSet() const
{
    return creationTimestampIsSet_;
}

void Versions::unsetcreationTimestamp()
{
    creationTimestampIsSet_ = false;
}

utility::datetime Versions::getUpdateTimestamp() const
{
    return updateTimestamp_;
}

void Versions::setUpdateTimestamp(const utility::datetime& value)
{
    updateTimestamp_ = value;
    updateTimestampIsSet_ = true;
}

bool Versions::updateTimestampIsSet() const
{
    return updateTimestampIsSet_;
}

void Versions::unsetupdateTimestamp()
{
    updateTimestampIsSet_ = false;
}

}
}
}
}
}


