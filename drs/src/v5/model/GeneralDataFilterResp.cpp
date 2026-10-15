

#include "huaweicloud/drs/v5/model/GeneralDataFilterResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




GeneralDataFilterResp::GeneralDataFilterResp()
{
    sourceFilterCondition_ = "";
    sourceFilterConditionIsSet_ = false;
    targetFilterCondition_ = "";
    targetFilterConditionIsSet_ = false;
    conditionSeparated_ = "";
    conditionSeparatedIsSet_ = false;
}

GeneralDataFilterResp::~GeneralDataFilterResp() = default;

void GeneralDataFilterResp::validate()
{
}

web::json::value GeneralDataFilterResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceFilterConditionIsSet_) {
        val[utility::conversions::to_string_t("source_filter_condition")] = ModelBase::toJson(sourceFilterCondition_);
    }
    if(targetFilterConditionIsSet_) {
        val[utility::conversions::to_string_t("target_filter_condition")] = ModelBase::toJson(targetFilterCondition_);
    }
    if(conditionSeparatedIsSet_) {
        val[utility::conversions::to_string_t("condition_separated")] = ModelBase::toJson(conditionSeparated_);
    }

    return val;
}
bool GeneralDataFilterResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_filter_condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_filter_condition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceFilterCondition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_filter_condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_filter_condition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetFilterCondition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("condition_separated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("condition_separated"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConditionSeparated(refVal);
        }
    }
    return ok;
}


std::string GeneralDataFilterResp::getSourceFilterCondition() const
{
    return sourceFilterCondition_;
}

void GeneralDataFilterResp::setSourceFilterCondition(const std::string& value)
{
    sourceFilterCondition_ = value;
    sourceFilterConditionIsSet_ = true;
}

bool GeneralDataFilterResp::sourceFilterConditionIsSet() const
{
    return sourceFilterConditionIsSet_;
}

void GeneralDataFilterResp::unsetsourceFilterCondition()
{
    sourceFilterConditionIsSet_ = false;
}

std::string GeneralDataFilterResp::getTargetFilterCondition() const
{
    return targetFilterCondition_;
}

void GeneralDataFilterResp::setTargetFilterCondition(const std::string& value)
{
    targetFilterCondition_ = value;
    targetFilterConditionIsSet_ = true;
}

bool GeneralDataFilterResp::targetFilterConditionIsSet() const
{
    return targetFilterConditionIsSet_;
}

void GeneralDataFilterResp::unsettargetFilterCondition()
{
    targetFilterConditionIsSet_ = false;
}

std::string GeneralDataFilterResp::getConditionSeparated() const
{
    return conditionSeparated_;
}

void GeneralDataFilterResp::setConditionSeparated(const std::string& value)
{
    conditionSeparated_ = value;
    conditionSeparatedIsSet_ = true;
}

bool GeneralDataFilterResp::conditionSeparatedIsSet() const
{
    return conditionSeparatedIsSet_;
}

void GeneralDataFilterResp::unsetconditionSeparated()
{
    conditionSeparatedIsSet_ = false;
}

}
}
}
}
}


