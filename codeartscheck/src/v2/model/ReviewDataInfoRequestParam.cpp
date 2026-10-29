

#include "huaweicloud/codeartscheck/v2/model/ReviewDataInfoRequestParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ReviewDataInfoRequestParam::ReviewDataInfoRequestParam()
{
    compareType_ = "";
    compareTypeIsSet_ = false;
    isCheck_ = 0;
    isCheckIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    value_ = 0;
    valueIsSet_ = false;
}

ReviewDataInfoRequestParam::~ReviewDataInfoRequestParam() = default;

void ReviewDataInfoRequestParam::validate()
{
}

web::json::value ReviewDataInfoRequestParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(compareTypeIsSet_) {
        val[utility::conversions::to_string_t("compareType")] = ModelBase::toJson(compareType_);
    }
    if(isCheckIsSet_) {
        val[utility::conversions::to_string_t("isCheck")] = ModelBase::toJson(isCheck_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ReviewDataInfoRequestParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("compareType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compareType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isCheck"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isCheck"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCheck(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string ReviewDataInfoRequestParam::getCompareType() const
{
    return compareType_;
}

void ReviewDataInfoRequestParam::setCompareType(const std::string& value)
{
    compareType_ = value;
    compareTypeIsSet_ = true;
}

bool ReviewDataInfoRequestParam::compareTypeIsSet() const
{
    return compareTypeIsSet_;
}

void ReviewDataInfoRequestParam::unsetcompareType()
{
    compareTypeIsSet_ = false;
}

int32_t ReviewDataInfoRequestParam::getIsCheck() const
{
    return isCheck_;
}

void ReviewDataInfoRequestParam::setIsCheck(int32_t value)
{
    isCheck_ = value;
    isCheckIsSet_ = true;
}

bool ReviewDataInfoRequestParam::isCheckIsSet() const
{
    return isCheckIsSet_;
}

void ReviewDataInfoRequestParam::unsetisCheck()
{
    isCheckIsSet_ = false;
}

std::string ReviewDataInfoRequestParam::getName() const
{
    return name_;
}

void ReviewDataInfoRequestParam::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ReviewDataInfoRequestParam::nameIsSet() const
{
    return nameIsSet_;
}

void ReviewDataInfoRequestParam::unsetname()
{
    nameIsSet_ = false;
}

int32_t ReviewDataInfoRequestParam::getValue() const
{
    return value_;
}

void ReviewDataInfoRequestParam::setValue(int32_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ReviewDataInfoRequestParam::valueIsSet() const
{
    return valueIsSet_;
}

void ReviewDataInfoRequestParam::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


