

#include "huaweicloud/dds/v3/model/ResizeInstanceOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ResizeInstanceOption::ResizeInstanceOption()
{
    targetType_ = "";
    targetTypeIsSet_ = false;
    targetId_ = "";
    targetIdIsSet_ = false;
    targetSpecCode_ = "";
    targetSpecCodeIsSet_ = false;
}

ResizeInstanceOption::~ResizeInstanceOption() = default;

void ResizeInstanceOption::validate()
{
}

web::json::value ResizeInstanceOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetTypeIsSet_) {
        val[utility::conversions::to_string_t("target_type")] = ModelBase::toJson(targetType_);
    }
    if(targetIdIsSet_) {
        val[utility::conversions::to_string_t("target_id")] = ModelBase::toJson(targetId_);
    }
    if(targetSpecCodeIsSet_) {
        val[utility::conversions::to_string_t("target_spec_code")] = ModelBase::toJson(targetSpecCode_);
    }

    return val;
}
bool ResizeInstanceOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetSpecCode(refVal);
        }
    }
    return ok;
}


std::string ResizeInstanceOption::getTargetType() const
{
    return targetType_;
}

void ResizeInstanceOption::setTargetType(const std::string& value)
{
    targetType_ = value;
    targetTypeIsSet_ = true;
}

bool ResizeInstanceOption::targetTypeIsSet() const
{
    return targetTypeIsSet_;
}

void ResizeInstanceOption::unsettargetType()
{
    targetTypeIsSet_ = false;
}

std::string ResizeInstanceOption::getTargetId() const
{
    return targetId_;
}

void ResizeInstanceOption::setTargetId(const std::string& value)
{
    targetId_ = value;
    targetIdIsSet_ = true;
}

bool ResizeInstanceOption::targetIdIsSet() const
{
    return targetIdIsSet_;
}

void ResizeInstanceOption::unsettargetId()
{
    targetIdIsSet_ = false;
}

std::string ResizeInstanceOption::getTargetSpecCode() const
{
    return targetSpecCode_;
}

void ResizeInstanceOption::setTargetSpecCode(const std::string& value)
{
    targetSpecCode_ = value;
    targetSpecCodeIsSet_ = true;
}

bool ResizeInstanceOption::targetSpecCodeIsSet() const
{
    return targetSpecCodeIsSet_;
}

void ResizeInstanceOption::unsettargetSpecCode()
{
    targetSpecCodeIsSet_ = false;
}

}
}
}
}
}


