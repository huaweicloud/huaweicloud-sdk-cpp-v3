

#include "huaweicloud/functiongraph/v2/model/CreateVersionAliasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CreateVersionAliasResponse::CreateVersionAliasResponse()
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
    additionalVersionStrategyIsSet_ = false;
}

CreateVersionAliasResponse::~CreateVersionAliasResponse() = default;

void CreateVersionAliasResponse::validate()
{
}

web::json::value CreateVersionAliasResponse::toJson() const
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
    if(additionalVersionStrategyIsSet_) {
        val[utility::conversions::to_string_t("additional_version_strategy")] = ModelBase::toJson(additionalVersionStrategy_);
    }

    return val;
}
bool CreateVersionAliasResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("additional_version_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("additional_version_strategy"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, VersionStrategy> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdditionalVersionStrategy(refVal);
        }
    }
    return ok;
}


std::string CreateVersionAliasResponse::getName() const
{
    return name_;
}

void CreateVersionAliasResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateVersionAliasResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateVersionAliasResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateVersionAliasResponse::getVersion() const
{
    return version_;
}

void CreateVersionAliasResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool CreateVersionAliasResponse::versionIsSet() const
{
    return versionIsSet_;
}

void CreateVersionAliasResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::string CreateVersionAliasResponse::getDescription() const
{
    return description_;
}

void CreateVersionAliasResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateVersionAliasResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateVersionAliasResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

utility::datetime CreateVersionAliasResponse::getLastModified() const
{
    return lastModified_;
}

void CreateVersionAliasResponse::setLastModified(const utility::datetime& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool CreateVersionAliasResponse::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void CreateVersionAliasResponse::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

std::string CreateVersionAliasResponse::getAliasUrn() const
{
    return aliasUrn_;
}

void CreateVersionAliasResponse::setAliasUrn(const std::string& value)
{
    aliasUrn_ = value;
    aliasUrnIsSet_ = true;
}

bool CreateVersionAliasResponse::aliasUrnIsSet() const
{
    return aliasUrnIsSet_;
}

void CreateVersionAliasResponse::unsetaliasUrn()
{
    aliasUrnIsSet_ = false;
}

std::map<std::string, int32_t>& CreateVersionAliasResponse::getAdditionalVersionWeights()
{
    return additionalVersionWeights_;
}

void CreateVersionAliasResponse::setAdditionalVersionWeights(std::map<std::string, int32_t> value)
{
    additionalVersionWeights_ = value;
    additionalVersionWeightsIsSet_ = true;
}

bool CreateVersionAliasResponse::additionalVersionWeightsIsSet() const
{
    return additionalVersionWeightsIsSet_;
}

void CreateVersionAliasResponse::unsetadditionalVersionWeights()
{
    additionalVersionWeightsIsSet_ = false;
}

std::map<std::string, VersionStrategy>& CreateVersionAliasResponse::getAdditionalVersionStrategy()
{
    return additionalVersionStrategy_;
}

void CreateVersionAliasResponse::setAdditionalVersionStrategy(const std::map<std::string, VersionStrategy>& value)
{
    additionalVersionStrategy_ = value;
    additionalVersionStrategyIsSet_ = true;
}

bool CreateVersionAliasResponse::additionalVersionStrategyIsSet() const
{
    return additionalVersionStrategyIsSet_;
}

void CreateVersionAliasResponse::unsetadditionalVersionStrategy()
{
    additionalVersionStrategyIsSet_ = false;
}

}
}
}
}
}


