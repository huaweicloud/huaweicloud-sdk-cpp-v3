

#include "huaweicloud/functiongraph/v2/model/UpdateVersionAliasRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateVersionAliasRequestBody::UpdateVersionAliasRequestBody()
{
    version_ = "";
    versionIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    additionalVersionWeightsIsSet_ = false;
    additionalVersionStrategyIsSet_ = false;
}

UpdateVersionAliasRequestBody::~UpdateVersionAliasRequestBody() = default;

void UpdateVersionAliasRequestBody::validate()
{
}

web::json::value UpdateVersionAliasRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool UpdateVersionAliasRequestBody::fromJson(const web::json::value& val)
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


std::string UpdateVersionAliasRequestBody::getVersion() const
{
    return version_;
}

void UpdateVersionAliasRequestBody::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool UpdateVersionAliasRequestBody::versionIsSet() const
{
    return versionIsSet_;
}

void UpdateVersionAliasRequestBody::unsetversion()
{
    versionIsSet_ = false;
}

std::string UpdateVersionAliasRequestBody::getDescription() const
{
    return description_;
}

void UpdateVersionAliasRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateVersionAliasRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateVersionAliasRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::map<std::string, int32_t>& UpdateVersionAliasRequestBody::getAdditionalVersionWeights()
{
    return additionalVersionWeights_;
}

void UpdateVersionAliasRequestBody::setAdditionalVersionWeights(std::map<std::string, int32_t> value)
{
    additionalVersionWeights_ = value;
    additionalVersionWeightsIsSet_ = true;
}

bool UpdateVersionAliasRequestBody::additionalVersionWeightsIsSet() const
{
    return additionalVersionWeightsIsSet_;
}

void UpdateVersionAliasRequestBody::unsetadditionalVersionWeights()
{
    additionalVersionWeightsIsSet_ = false;
}

std::map<std::string, VersionStrategy>& UpdateVersionAliasRequestBody::getAdditionalVersionStrategy()
{
    return additionalVersionStrategy_;
}

void UpdateVersionAliasRequestBody::setAdditionalVersionStrategy(const std::map<std::string, VersionStrategy>& value)
{
    additionalVersionStrategy_ = value;
    additionalVersionStrategyIsSet_ = true;
}

bool UpdateVersionAliasRequestBody::additionalVersionStrategyIsSet() const
{
    return additionalVersionStrategyIsSet_;
}

void UpdateVersionAliasRequestBody::unsetadditionalVersionStrategy()
{
    additionalVersionStrategyIsSet_ = false;
}

}
}
}
}
}


