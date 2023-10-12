

#include "huaweicloud/rds/v3/model/VolumeFlavor.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




VolumeFlavor::VolumeFlavor()
{
    engineVersion_ = "";
    engineVersionIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    size_ = "";
    sizeIsSet_ = false;
    periodIsSet_ = false;
}

VolumeFlavor::~VolumeFlavor() = default;

void VolumeFlavor::validate()
{
}

web::json::value VolumeFlavor::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineVersionIsSet_) {
        val[utility::conversions::to_string_t("engine_version")] = ModelBase::toJson(engineVersion_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }

    return val;
}
bool VolumeFlavor::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("engine_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    return ok;
}


std::string VolumeFlavor::getEngineVersion() const
{
    return engineVersion_;
}

void VolumeFlavor::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool VolumeFlavor::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void VolumeFlavor::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

std::string VolumeFlavor::getCode() const
{
    return code_;
}

void VolumeFlavor::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool VolumeFlavor::codeIsSet() const
{
    return codeIsSet_;
}

void VolumeFlavor::unsetcode()
{
    codeIsSet_ = false;
}

std::string VolumeFlavor::getType() const
{
    return type_;
}

void VolumeFlavor::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool VolumeFlavor::typeIsSet() const
{
    return typeIsSet_;
}

void VolumeFlavor::unsettype()
{
    typeIsSet_ = false;
}

std::string VolumeFlavor::getSize() const
{
    return size_;
}

void VolumeFlavor::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool VolumeFlavor::sizeIsSet() const
{
    return sizeIsSet_;
}

void VolumeFlavor::unsetsize()
{
    sizeIsSet_ = false;
}

std::vector<std::string>& VolumeFlavor::getPeriod()
{
    return period_;
}

void VolumeFlavor::setPeriod(const std::vector<std::string>& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool VolumeFlavor::periodIsSet() const
{
    return periodIsSet_;
}

void VolumeFlavor::unsetperiod()
{
    periodIsSet_ = false;
}

}
}
}
}
}


