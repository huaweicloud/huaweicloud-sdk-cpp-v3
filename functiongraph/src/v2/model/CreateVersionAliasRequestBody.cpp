

#include "huaweicloud/functiongraph/v2/model/CreateVersionAliasRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CreateVersionAliasRequestBody::CreateVersionAliasRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    additionalVersionWeightsIsSet_ = false;
    additionalVersionStrategyIsSet_ = false;
}

CreateVersionAliasRequestBody::~CreateVersionAliasRequestBody() = default;

void CreateVersionAliasRequestBody::validate()
{
}

web::json::value CreateVersionAliasRequestBody::toJson() const
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
    if(additionalVersionWeightsIsSet_) {
        val[utility::conversions::to_string_t("additional_version_weights")] = ModelBase::toJson(additionalVersionWeights_);
    }
    if(additionalVersionStrategyIsSet_) {
        val[utility::conversions::to_string_t("additional_version_strategy")] = ModelBase::toJson(additionalVersionStrategy_);
    }

    return val;
}
bool CreateVersionAliasRequestBody::fromJson(const web::json::value& val)
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


std::string CreateVersionAliasRequestBody::getName() const
{
    return name_;
}

void CreateVersionAliasRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateVersionAliasRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateVersionAliasRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateVersionAliasRequestBody::getVersion() const
{
    return version_;
}

void CreateVersionAliasRequestBody::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool CreateVersionAliasRequestBody::versionIsSet() const
{
    return versionIsSet_;
}

void CreateVersionAliasRequestBody::unsetversion()
{
    versionIsSet_ = false;
}

std::string CreateVersionAliasRequestBody::getDescription() const
{
    return description_;
}

void CreateVersionAliasRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateVersionAliasRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateVersionAliasRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::map<std::string, int32_t>& CreateVersionAliasRequestBody::getAdditionalVersionWeights()
{
    return additionalVersionWeights_;
}

void CreateVersionAliasRequestBody::setAdditionalVersionWeights(std::map<std::string, int32_t> value)
{
    additionalVersionWeights_ = value;
    additionalVersionWeightsIsSet_ = true;
}

bool CreateVersionAliasRequestBody::additionalVersionWeightsIsSet() const
{
    return additionalVersionWeightsIsSet_;
}

void CreateVersionAliasRequestBody::unsetadditionalVersionWeights()
{
    additionalVersionWeightsIsSet_ = false;
}

std::map<std::string, VersionStrategy>& CreateVersionAliasRequestBody::getAdditionalVersionStrategy()
{
    return additionalVersionStrategy_;
}

void CreateVersionAliasRequestBody::setAdditionalVersionStrategy(const std::map<std::string, VersionStrategy>& value)
{
    additionalVersionStrategy_ = value;
    additionalVersionStrategyIsSet_ = true;
}

bool CreateVersionAliasRequestBody::additionalVersionStrategyIsSet() const
{
    return additionalVersionStrategyIsSet_;
}

void CreateVersionAliasRequestBody::unsetadditionalVersionStrategy()
{
    additionalVersionStrategyIsSet_ = false;
}

}
}
}
}
}


