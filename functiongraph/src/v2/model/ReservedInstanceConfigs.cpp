

#include "huaweicloud/functiongraph/v2/model/ReservedInstanceConfigs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ReservedInstanceConfigs::ReservedInstanceConfigs()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    qualifierType_ = "";
    qualifierTypeIsSet_ = false;
    qualifierName_ = "";
    qualifierNameIsSet_ = false;
    minCount_ = 0;
    minCountIsSet_ = false;
    idleMode_ = false;
    idleModeIsSet_ = false;
    tacticsConfigIsSet_ = false;
}

ReservedInstanceConfigs::~ReservedInstanceConfigs() = default;

void ReservedInstanceConfigs::validate()
{
}

web::json::value ReservedInstanceConfigs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(functionUrnIsSet_) {
        val[utility::conversions::to_string_t("function_urn")] = ModelBase::toJson(functionUrn_);
    }
    if(qualifierTypeIsSet_) {
        val[utility::conversions::to_string_t("qualifier_type")] = ModelBase::toJson(qualifierType_);
    }
    if(qualifierNameIsSet_) {
        val[utility::conversions::to_string_t("qualifier_name")] = ModelBase::toJson(qualifierName_);
    }
    if(minCountIsSet_) {
        val[utility::conversions::to_string_t("min_count")] = ModelBase::toJson(minCount_);
    }
    if(idleModeIsSet_) {
        val[utility::conversions::to_string_t("idle_mode")] = ModelBase::toJson(idleMode_);
    }
    if(tacticsConfigIsSet_) {
        val[utility::conversions::to_string_t("tactics_config")] = ModelBase::toJson(tacticsConfig_);
    }

    return val;
}
bool ReservedInstanceConfigs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("function_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("function_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFunctionUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qualifier_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("qualifier_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQualifierType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qualifier_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("qualifier_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQualifierName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("idle_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("idle_mode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdleMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tactics_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tactics_config"));
        if(!fieldValue.is_null())
        {
            TacticsConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTacticsConfig(refVal);
        }
    }
    return ok;
}


std::string ReservedInstanceConfigs::getFunctionUrn() const
{
    return functionUrn_;
}

void ReservedInstanceConfigs::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool ReservedInstanceConfigs::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void ReservedInstanceConfigs::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string ReservedInstanceConfigs::getQualifierType() const
{
    return qualifierType_;
}

void ReservedInstanceConfigs::setQualifierType(const std::string& value)
{
    qualifierType_ = value;
    qualifierTypeIsSet_ = true;
}

bool ReservedInstanceConfigs::qualifierTypeIsSet() const
{
    return qualifierTypeIsSet_;
}

void ReservedInstanceConfigs::unsetqualifierType()
{
    qualifierTypeIsSet_ = false;
}

std::string ReservedInstanceConfigs::getQualifierName() const
{
    return qualifierName_;
}

void ReservedInstanceConfigs::setQualifierName(const std::string& value)
{
    qualifierName_ = value;
    qualifierNameIsSet_ = true;
}

bool ReservedInstanceConfigs::qualifierNameIsSet() const
{
    return qualifierNameIsSet_;
}

void ReservedInstanceConfigs::unsetqualifierName()
{
    qualifierNameIsSet_ = false;
}

int32_t ReservedInstanceConfigs::getMinCount() const
{
    return minCount_;
}

void ReservedInstanceConfigs::setMinCount(int32_t value)
{
    minCount_ = value;
    minCountIsSet_ = true;
}

bool ReservedInstanceConfigs::minCountIsSet() const
{
    return minCountIsSet_;
}

void ReservedInstanceConfigs::unsetminCount()
{
    minCountIsSet_ = false;
}

bool ReservedInstanceConfigs::isIdleMode() const
{
    return idleMode_;
}

void ReservedInstanceConfigs::setIdleMode(bool value)
{
    idleMode_ = value;
    idleModeIsSet_ = true;
}

bool ReservedInstanceConfigs::idleModeIsSet() const
{
    return idleModeIsSet_;
}

void ReservedInstanceConfigs::unsetidleMode()
{
    idleModeIsSet_ = false;
}

TacticsConfig ReservedInstanceConfigs::getTacticsConfig() const
{
    return tacticsConfig_;
}

void ReservedInstanceConfigs::setTacticsConfig(const TacticsConfig& value)
{
    tacticsConfig_ = value;
    tacticsConfigIsSet_ = true;
}

bool ReservedInstanceConfigs::tacticsConfigIsSet() const
{
    return tacticsConfigIsSet_;
}

void ReservedInstanceConfigs::unsettacticsConfig()
{
    tacticsConfigIsSet_ = false;
}

}
}
}
}
}


