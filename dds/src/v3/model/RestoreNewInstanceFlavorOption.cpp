

#include "huaweicloud/dds/v3/model/RestoreNewInstanceFlavorOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




RestoreNewInstanceFlavorOption::RestoreNewInstanceFlavorOption()
{
    type_ = "";
    typeIsSet_ = false;
    num_ = "";
    numIsSet_ = false;
    size_ = "";
    sizeIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
}

RestoreNewInstanceFlavorOption::~RestoreNewInstanceFlavorOption() = default;

void RestoreNewInstanceFlavorOption::validate()
{
}

web::json::value RestoreNewInstanceFlavorOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(numIsSet_) {
        val[utility::conversions::to_string_t("num")] = ModelBase::toJson(num_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }

    return val;
}

bool RestoreNewInstanceFlavorOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCode(refVal);
        }
    }
    return ok;
}

std::string RestoreNewInstanceFlavorOption::getType() const
{
    return type_;
}

void RestoreNewInstanceFlavorOption::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RestoreNewInstanceFlavorOption::typeIsSet() const
{
    return typeIsSet_;
}

void RestoreNewInstanceFlavorOption::unsettype()
{
    typeIsSet_ = false;
}

std::string RestoreNewInstanceFlavorOption::getNum() const
{
    return num_;
}

void RestoreNewInstanceFlavorOption::setNum(const std::string& value)
{
    num_ = value;
    numIsSet_ = true;
}

bool RestoreNewInstanceFlavorOption::numIsSet() const
{
    return numIsSet_;
}

void RestoreNewInstanceFlavorOption::unsetnum()
{
    numIsSet_ = false;
}

std::string RestoreNewInstanceFlavorOption::getSize() const
{
    return size_;
}

void RestoreNewInstanceFlavorOption::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool RestoreNewInstanceFlavorOption::sizeIsSet() const
{
    return sizeIsSet_;
}

void RestoreNewInstanceFlavorOption::unsetsize()
{
    sizeIsSet_ = false;
}

std::string RestoreNewInstanceFlavorOption::getSpecCode() const
{
    return specCode_;
}

void RestoreNewInstanceFlavorOption::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool RestoreNewInstanceFlavorOption::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void RestoreNewInstanceFlavorOption::unsetspecCode()
{
    specCodeIsSet_ = false;
}

}
}
}
}
}


