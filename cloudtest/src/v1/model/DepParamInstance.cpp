

#include "huaweicloud/cloudtest/v1/model/DepParamInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DepParamInstance::DepParamInstance()
{
    compareValue_ = "";
    compareValueIsSet_ = false;
    comparison_ = "";
    comparisonIsSet_ = false;
    condition_ = false;
    conditionIsSet_ = false;
    inValidValuesIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nullInfo_ = "";
    nullInfoIsSet_ = false;
    relationMapIsSet_ = false;
    relationNum_ = 0;
    relationNumIsSet_ = false;
    valuesIsSet_ = false;
}

DepParamInstance::~DepParamInstance() = default;

void DepParamInstance::validate()
{
}

web::json::value DepParamInstance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(compareValueIsSet_) {
        val[utility::conversions::to_string_t("compareValue")] = ModelBase::toJson(compareValue_);
    }
    if(comparisonIsSet_) {
        val[utility::conversions::to_string_t("comparison")] = ModelBase::toJson(comparison_);
    }
    if(conditionIsSet_) {
        val[utility::conversions::to_string_t("condition")] = ModelBase::toJson(condition_);
    }
    if(inValidValuesIsSet_) {
        val[utility::conversions::to_string_t("inValidValues")] = ModelBase::toJson(inValidValues_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nullInfoIsSet_) {
        val[utility::conversions::to_string_t("nullInfo")] = ModelBase::toJson(nullInfo_);
    }
    if(relationMapIsSet_) {
        val[utility::conversions::to_string_t("relationMap")] = ModelBase::toJson(relationMap_);
    }
    if(relationNumIsSet_) {
        val[utility::conversions::to_string_t("relationNum")] = ModelBase::toJson(relationNum_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}
bool DepParamInstance::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("compareValue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compareValue"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comparison"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comparison"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComparison(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("condition"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inValidValues"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inValidValues"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInValidValues(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nullInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nullInfo"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNullInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relationMap"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relationMap"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelationMap(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relationNum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relationNum"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelationNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    return ok;
}


std::string DepParamInstance::getCompareValue() const
{
    return compareValue_;
}

void DepParamInstance::setCompareValue(const std::string& value)
{
    compareValue_ = value;
    compareValueIsSet_ = true;
}

bool DepParamInstance::compareValueIsSet() const
{
    return compareValueIsSet_;
}

void DepParamInstance::unsetcompareValue()
{
    compareValueIsSet_ = false;
}

std::string DepParamInstance::getComparison() const
{
    return comparison_;
}

void DepParamInstance::setComparison(const std::string& value)
{
    comparison_ = value;
    comparisonIsSet_ = true;
}

bool DepParamInstance::comparisonIsSet() const
{
    return comparisonIsSet_;
}

void DepParamInstance::unsetcomparison()
{
    comparisonIsSet_ = false;
}

bool DepParamInstance::isCondition() const
{
    return condition_;
}

void DepParamInstance::setCondition(bool value)
{
    condition_ = value;
    conditionIsSet_ = true;
}

bool DepParamInstance::conditionIsSet() const
{
    return conditionIsSet_;
}

void DepParamInstance::unsetcondition()
{
    conditionIsSet_ = false;
}

std::vector<std::string>& DepParamInstance::getInValidValues()
{
    return inValidValues_;
}

void DepParamInstance::setInValidValues(const std::vector<std::string>& value)
{
    inValidValues_ = value;
    inValidValuesIsSet_ = true;
}

bool DepParamInstance::inValidValuesIsSet() const
{
    return inValidValuesIsSet_;
}

void DepParamInstance::unsetinValidValues()
{
    inValidValuesIsSet_ = false;
}

std::string DepParamInstance::getName() const
{
    return name_;
}

void DepParamInstance::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DepParamInstance::nameIsSet() const
{
    return nameIsSet_;
}

void DepParamInstance::unsetname()
{
    nameIsSet_ = false;
}

std::string DepParamInstance::getNullInfo() const
{
    return nullInfo_;
}

void DepParamInstance::setNullInfo(const std::string& value)
{
    nullInfo_ = value;
    nullInfoIsSet_ = true;
}

bool DepParamInstance::nullInfoIsSet() const
{
    return nullInfoIsSet_;
}

void DepParamInstance::unsetnullInfo()
{
    nullInfoIsSet_ = false;
}

std::map<std::string, std::string>& DepParamInstance::getRelationMap()
{
    return relationMap_;
}

void DepParamInstance::setRelationMap(const std::map<std::string, std::string>& value)
{
    relationMap_ = value;
    relationMapIsSet_ = true;
}

bool DepParamInstance::relationMapIsSet() const
{
    return relationMapIsSet_;
}

void DepParamInstance::unsetrelationMap()
{
    relationMapIsSet_ = false;
}

int32_t DepParamInstance::getRelationNum() const
{
    return relationNum_;
}

void DepParamInstance::setRelationNum(int32_t value)
{
    relationNum_ = value;
    relationNumIsSet_ = true;
}

bool DepParamInstance::relationNumIsSet() const
{
    return relationNumIsSet_;
}

void DepParamInstance::unsetrelationNum()
{
    relationNumIsSet_ = false;
}

std::vector<std::string>& DepParamInstance::getValues()
{
    return values_;
}

void DepParamInstance::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool DepParamInstance::valuesIsSet() const
{
    return valuesIsSet_;
}

void DepParamInstance::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


