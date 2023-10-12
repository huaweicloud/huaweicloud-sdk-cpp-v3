

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDiffDetailsResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDiffDetailsResult::ListDiffDetailsResult()
{
    name_ = "";
    nameIsSet_ = false;
    sourceValue_ = "";
    sourceValueIsSet_ = false;
    targetValue_ = "";
    targetValueIsSet_ = false;
}

ListDiffDetailsResult::~ListDiffDetailsResult() = default;

void ListDiffDetailsResult::validate()
{
}

web::json::value ListDiffDetailsResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sourceValueIsSet_) {
        val[utility::conversions::to_string_t("source_value")] = ModelBase::toJson(sourceValue_);
    }
    if(targetValueIsSet_) {
        val[utility::conversions::to_string_t("target_value")] = ModelBase::toJson(targetValue_);
    }

    return val;
}
bool ListDiffDetailsResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("source_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetValue(refVal);
        }
    }
    return ok;
}


std::string ListDiffDetailsResult::getName() const
{
    return name_;
}

void ListDiffDetailsResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListDiffDetailsResult::nameIsSet() const
{
    return nameIsSet_;
}

void ListDiffDetailsResult::unsetname()
{
    nameIsSet_ = false;
}

std::string ListDiffDetailsResult::getSourceValue() const
{
    return sourceValue_;
}

void ListDiffDetailsResult::setSourceValue(const std::string& value)
{
    sourceValue_ = value;
    sourceValueIsSet_ = true;
}

bool ListDiffDetailsResult::sourceValueIsSet() const
{
    return sourceValueIsSet_;
}

void ListDiffDetailsResult::unsetsourceValue()
{
    sourceValueIsSet_ = false;
}

std::string ListDiffDetailsResult::getTargetValue() const
{
    return targetValue_;
}

void ListDiffDetailsResult::setTargetValue(const std::string& value)
{
    targetValue_ = value;
    targetValueIsSet_ = true;
}

bool ListDiffDetailsResult::targetValueIsSet() const
{
    return targetValueIsSet_;
}

void ListDiffDetailsResult::unsettargetValue()
{
    targetValueIsSet_ = false;
}

}
}
}
}
}


