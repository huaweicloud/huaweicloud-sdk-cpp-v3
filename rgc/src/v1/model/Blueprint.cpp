

#include "huaweicloud/rgc/v1/model/Blueprint.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




Blueprint::Blueprint()
{
    blueprintProductId_ = "";
    blueprintProductIdIsSet_ = false;
    blueprintProductVersion_ = "";
    blueprintProductVersionIsSet_ = false;
    variables_ = "";
    variablesIsSet_ = false;
    isBlueprintHasMultiAccountResource_ = false;
    isBlueprintHasMultiAccountResourceIsSet_ = false;
}

Blueprint::~Blueprint() = default;

void Blueprint::validate()
{
}

web::json::value Blueprint::toJson() const
{
    web::json::value val = web::json::value::object();

    if(blueprintProductIdIsSet_) {
        val[utility::conversions::to_string_t("blueprint_product_id")] = ModelBase::toJson(blueprintProductId_);
    }
    if(blueprintProductVersionIsSet_) {
        val[utility::conversions::to_string_t("blueprint_product_version")] = ModelBase::toJson(blueprintProductVersion_);
    }
    if(variablesIsSet_) {
        val[utility::conversions::to_string_t("variables")] = ModelBase::toJson(variables_);
    }
    if(isBlueprintHasMultiAccountResourceIsSet_) {
        val[utility::conversions::to_string_t("is_blueprint_has_multi_account_resource")] = ModelBase::toJson(isBlueprintHasMultiAccountResource_);
    }

    return val;
}
bool Blueprint::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("blueprint_product_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blueprint_product_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlueprintProductId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blueprint_product_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blueprint_product_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlueprintProductVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("variables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("variables"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVariables(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_blueprint_has_multi_account_resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_blueprint_has_multi_account_resource"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsBlueprintHasMultiAccountResource(refVal);
        }
    }
    return ok;
}


std::string Blueprint::getBlueprintProductId() const
{
    return blueprintProductId_;
}

void Blueprint::setBlueprintProductId(const std::string& value)
{
    blueprintProductId_ = value;
    blueprintProductIdIsSet_ = true;
}

bool Blueprint::blueprintProductIdIsSet() const
{
    return blueprintProductIdIsSet_;
}

void Blueprint::unsetblueprintProductId()
{
    blueprintProductIdIsSet_ = false;
}

std::string Blueprint::getBlueprintProductVersion() const
{
    return blueprintProductVersion_;
}

void Blueprint::setBlueprintProductVersion(const std::string& value)
{
    blueprintProductVersion_ = value;
    blueprintProductVersionIsSet_ = true;
}

bool Blueprint::blueprintProductVersionIsSet() const
{
    return blueprintProductVersionIsSet_;
}

void Blueprint::unsetblueprintProductVersion()
{
    blueprintProductVersionIsSet_ = false;
}

std::string Blueprint::getVariables() const
{
    return variables_;
}

void Blueprint::setVariables(const std::string& value)
{
    variables_ = value;
    variablesIsSet_ = true;
}

bool Blueprint::variablesIsSet() const
{
    return variablesIsSet_;
}

void Blueprint::unsetvariables()
{
    variablesIsSet_ = false;
}

bool Blueprint::isIsBlueprintHasMultiAccountResource() const
{
    return isBlueprintHasMultiAccountResource_;
}

void Blueprint::setIsBlueprintHasMultiAccountResource(bool value)
{
    isBlueprintHasMultiAccountResource_ = value;
    isBlueprintHasMultiAccountResourceIsSet_ = true;
}

bool Blueprint::isBlueprintHasMultiAccountResourceIsSet() const
{
    return isBlueprintHasMultiAccountResourceIsSet_;
}

void Blueprint::unsetisBlueprintHasMultiAccountResource()
{
    isBlueprintHasMultiAccountResourceIsSet_ = false;
}

}
}
}
}
}


