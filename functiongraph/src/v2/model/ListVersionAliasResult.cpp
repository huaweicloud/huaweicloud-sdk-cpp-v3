

#include "huaweicloud/functiongraph/v2/model/ListVersionAliasResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListVersionAliasResult::ListVersionAliasResult()
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

ListVersionAliasResult::~ListVersionAliasResult() = default;

void ListVersionAliasResult::validate()
{
}

web::json::value ListVersionAliasResult::toJson() const
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
bool ListVersionAliasResult::fromJson(const web::json::value& val)
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
            std::map<std::string, int64_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdditionalVersionWeights(refVal);
        }
    }
    return ok;
}


std::string ListVersionAliasResult::getName() const
{
    return name_;
}

void ListVersionAliasResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListVersionAliasResult::nameIsSet() const
{
    return nameIsSet_;
}

void ListVersionAliasResult::unsetname()
{
    nameIsSet_ = false;
}

std::string ListVersionAliasResult::getVersion() const
{
    return version_;
}

void ListVersionAliasResult::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ListVersionAliasResult::versionIsSet() const
{
    return versionIsSet_;
}

void ListVersionAliasResult::unsetversion()
{
    versionIsSet_ = false;
}

std::string ListVersionAliasResult::getDescription() const
{
    return description_;
}

void ListVersionAliasResult::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ListVersionAliasResult::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ListVersionAliasResult::unsetdescription()
{
    descriptionIsSet_ = false;
}

utility::datetime ListVersionAliasResult::getLastModified() const
{
    return lastModified_;
}

void ListVersionAliasResult::setLastModified(const utility::datetime& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool ListVersionAliasResult::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void ListVersionAliasResult::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

std::string ListVersionAliasResult::getAliasUrn() const
{
    return aliasUrn_;
}

void ListVersionAliasResult::setAliasUrn(const std::string& value)
{
    aliasUrn_ = value;
    aliasUrnIsSet_ = true;
}

bool ListVersionAliasResult::aliasUrnIsSet() const
{
    return aliasUrnIsSet_;
}

void ListVersionAliasResult::unsetaliasUrn()
{
    aliasUrnIsSet_ = false;
}

std::map<std::string, int64_t>& ListVersionAliasResult::getAdditionalVersionWeights()
{
    return additionalVersionWeights_;
}

void ListVersionAliasResult::setAdditionalVersionWeights(std::map<std::string, int64_t> value)
{
    additionalVersionWeights_ = value;
    additionalVersionWeightsIsSet_ = true;
}

bool ListVersionAliasResult::additionalVersionWeightsIsSet() const
{
    return additionalVersionWeightsIsSet_;
}

void ListVersionAliasResult::unsetadditionalVersionWeights()
{
    additionalVersionWeightsIsSet_ = false;
}

}
}
}
}
}


