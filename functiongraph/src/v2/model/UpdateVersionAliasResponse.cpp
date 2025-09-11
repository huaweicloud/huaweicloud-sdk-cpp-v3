

#include "huaweicloud/functiongraph/v2/model/UpdateVersionAliasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateVersionAliasResponse::UpdateVersionAliasResponse()
{
    name_ = "";
    nameIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    lastModified_ = utility::datetime();
    lastModifiedIsSet_ = false;
    aliasUrn_ = "";
    aliasUrnIsSet_ = false;
    additionalVersionWeightsIsSet_ = false;
}

UpdateVersionAliasResponse::~UpdateVersionAliasResponse() = default;

void UpdateVersionAliasResponse::validate()
{
}

web::json::value UpdateVersionAliasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(lastModifiedIsSet_) {
        val[utility::conversions::to_string_t("last_modified")] = ModelBase::toJson(lastModified_);
    }
    if(aliasUrnIsSet_) {
        val[utility::conversions::to_string_t("alias_urn")] = ModelBase::toJson(aliasUrn_);
    }
    if(additionalVersionWeightsIsSet_) {
        val[utility::conversions::to_string_t("additional_version_weights")] = ModelBase::toJson(additionalVersionWeights_);
    }

    return val;
}
bool UpdateVersionAliasResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("last_modified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModified(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alias_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAliasUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("additional_version_weights"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("additional_version_weights"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdditionalVersionWeights(refVal);
        }
    }
    return ok;
}


std::string UpdateVersionAliasResponse::getName() const
{
    return name_;
}

void UpdateVersionAliasResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateVersionAliasResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateVersionAliasResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateVersionAliasResponse::getVersion() const
{
    return version_;
}

void UpdateVersionAliasResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool UpdateVersionAliasResponse::versionIsSet() const
{
    return versionIsSet_;
}

void UpdateVersionAliasResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::string UpdateVersionAliasResponse::getDescription() const
{
    return description_;
}

void UpdateVersionAliasResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateVersionAliasResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateVersionAliasResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

utility::datetime UpdateVersionAliasResponse::getLastModified() const
{
    return lastModified_;
}

void UpdateVersionAliasResponse::setLastModified(const utility::datetime& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool UpdateVersionAliasResponse::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void UpdateVersionAliasResponse::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

std::string UpdateVersionAliasResponse::getAliasUrn() const
{
    return aliasUrn_;
}

void UpdateVersionAliasResponse::setAliasUrn(const std::string& value)
{
    aliasUrn_ = value;
    aliasUrnIsSet_ = true;
}

bool UpdateVersionAliasResponse::aliasUrnIsSet() const
{
    return aliasUrnIsSet_;
}

void UpdateVersionAliasResponse::unsetaliasUrn()
{
    aliasUrnIsSet_ = false;
}

std::map<std::string, int32_t>& UpdateVersionAliasResponse::getAdditionalVersionWeights()
{
    return additionalVersionWeights_;
}

void UpdateVersionAliasResponse::setAdditionalVersionWeights(std::map<std::string, int32_t> value)
{
    additionalVersionWeights_ = value;
    additionalVersionWeightsIsSet_ = true;
}

bool UpdateVersionAliasResponse::additionalVersionWeightsIsSet() const
{
    return additionalVersionWeightsIsSet_;
}

void UpdateVersionAliasResponse::unsetadditionalVersionWeights()
{
    additionalVersionWeightsIsSet_ = false;
}

}
}
}
}
}


