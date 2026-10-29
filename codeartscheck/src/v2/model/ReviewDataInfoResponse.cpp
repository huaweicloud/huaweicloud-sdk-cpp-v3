

#include "huaweicloud/codeartscheck/v2/model/ReviewDataInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ReviewDataInfoResponse::ReviewDataInfoResponse()
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

ReviewDataInfoResponse::~ReviewDataInfoResponse() = default;

void ReviewDataInfoResponse::validate()
{
}

web::json::value ReviewDataInfoResponse::toJson() const
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
bool ReviewDataInfoResponse::fromJson(const web::json::value& val)
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


std::string ReviewDataInfoResponse::getCompareType() const
{
    return compareType_;
}

void ReviewDataInfoResponse::setCompareType(const std::string& value)
{
    compareType_ = value;
    compareTypeIsSet_ = true;
}

bool ReviewDataInfoResponse::compareTypeIsSet() const
{
    return compareTypeIsSet_;
}

void ReviewDataInfoResponse::unsetcompareType()
{
    compareTypeIsSet_ = false;
}

int32_t ReviewDataInfoResponse::getIsCheck() const
{
    return isCheck_;
}

void ReviewDataInfoResponse::setIsCheck(int32_t value)
{
    isCheck_ = value;
    isCheckIsSet_ = true;
}

bool ReviewDataInfoResponse::isCheckIsSet() const
{
    return isCheckIsSet_;
}

void ReviewDataInfoResponse::unsetisCheck()
{
    isCheckIsSet_ = false;
}

std::string ReviewDataInfoResponse::getName() const
{
    return name_;
}

void ReviewDataInfoResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ReviewDataInfoResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ReviewDataInfoResponse::unsetname()
{
    nameIsSet_ = false;
}

int32_t ReviewDataInfoResponse::getValue() const
{
    return value_;
}

void ReviewDataInfoResponse::setValue(int32_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ReviewDataInfoResponse::valueIsSet() const
{
    return valueIsSet_;
}

void ReviewDataInfoResponse::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


