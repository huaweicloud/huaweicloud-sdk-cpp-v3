

#include "huaweicloud/cce/v3/model/Templatespec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




Templatespec::Templatespec()
{
    type_ = "";
    typeIsSet_ = false;
    require_ = false;
    requireIsSet_ = false;
    labelsIsSet_ = false;
    logoURL_ = "";
    logoURLIsSet_ = false;
    readmeURL_ = "";
    readmeURLIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    versionsIsSet_ = false;
}

Templatespec::~Templatespec() = default;

void Templatespec::validate()
{
}

web::json::value Templatespec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(requireIsSet_) {
        val[utility::conversions::to_string_t("require")] = ModelBase::toJson(require_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }
    if(logoURLIsSet_) {
        val[utility::conversions::to_string_t("logoURL")] = ModelBase::toJson(logoURL_);
    }
    if(readmeURLIsSet_) {
        val[utility::conversions::to_string_t("readmeURL")] = ModelBase::toJson(readmeURL_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(versionsIsSet_) {
        val[utility::conversions::to_string_t("versions")] = ModelBase::toJson(versions_);
    }

    return val;
}
bool Templatespec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("require"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("require"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequire(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logoURL"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logoURL"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogoURL(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("readmeURL"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readmeURL"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadmeURL(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("versions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("versions"));
        if(!fieldValue.is_null())
        {
            std::vector<Versions> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersions(refVal);
        }
    }
    return ok;
}


std::string Templatespec::getType() const
{
    return type_;
}

void Templatespec::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Templatespec::typeIsSet() const
{
    return typeIsSet_;
}

void Templatespec::unsettype()
{
    typeIsSet_ = false;
}

bool Templatespec::isRequire() const
{
    return require_;
}

void Templatespec::setRequire(bool value)
{
    require_ = value;
    requireIsSet_ = true;
}

bool Templatespec::requireIsSet() const
{
    return requireIsSet_;
}

void Templatespec::unsetrequire()
{
    requireIsSet_ = false;
}

std::vector<std::string>& Templatespec::getLabels()
{
    return labels_;
}

void Templatespec::setLabels(const std::vector<std::string>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool Templatespec::labelsIsSet() const
{
    return labelsIsSet_;
}

void Templatespec::unsetlabels()
{
    labelsIsSet_ = false;
}

std::string Templatespec::getLogoURL() const
{
    return logoURL_;
}

void Templatespec::setLogoURL(const std::string& value)
{
    logoURL_ = value;
    logoURLIsSet_ = true;
}

bool Templatespec::logoURLIsSet() const
{
    return logoURLIsSet_;
}

void Templatespec::unsetlogoURL()
{
    logoURLIsSet_ = false;
}

std::string Templatespec::getReadmeURL() const
{
    return readmeURL_;
}

void Templatespec::setReadmeURL(const std::string& value)
{
    readmeURL_ = value;
    readmeURLIsSet_ = true;
}

bool Templatespec::readmeURLIsSet() const
{
    return readmeURLIsSet_;
}

void Templatespec::unsetreadmeURL()
{
    readmeURLIsSet_ = false;
}

std::string Templatespec::getDescription() const
{
    return description_;
}

void Templatespec::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool Templatespec::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void Templatespec::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<Versions>& Templatespec::getVersions()
{
    return versions_;
}

void Templatespec::setVersions(const std::vector<Versions>& value)
{
    versions_ = value;
    versionsIsSet_ = true;
}

bool Templatespec::versionsIsSet() const
{
    return versionsIsSet_;
}

void Templatespec::unsetversions()
{
    versionsIsSet_ = false;
}

}
}
}
}
}


