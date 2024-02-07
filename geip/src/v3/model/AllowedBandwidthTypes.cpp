

#include "huaweicloud/geip/v3/model/AllowedBandwidthTypes.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




AllowedBandwidthTypes::AllowedBandwidthTypes()
{
    type_ = "";
    typeIsSet_ = false;
    cnName_ = "";
    cnNameIsSet_ = false;
    enName_ = "";
    enNameIsSet_ = false;
}

AllowedBandwidthTypes::~AllowedBandwidthTypes() = default;

void AllowedBandwidthTypes::validate()
{
}

web::json::value AllowedBandwidthTypes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(cnNameIsSet_) {
        val[utility::conversions::to_string_t("cn_name")] = ModelBase::toJson(cnName_);
    }
    if(enNameIsSet_) {
        val[utility::conversions::to_string_t("en_name")] = ModelBase::toJson(enName_);
    }

    return val;
}
bool AllowedBandwidthTypes::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("cn_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cn_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCnName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("en_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("en_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnName(refVal);
        }
    }
    return ok;
}


std::string AllowedBandwidthTypes::getType() const
{
    return type_;
}

void AllowedBandwidthTypes::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AllowedBandwidthTypes::typeIsSet() const
{
    return typeIsSet_;
}

void AllowedBandwidthTypes::unsettype()
{
    typeIsSet_ = false;
}

std::string AllowedBandwidthTypes::getCnName() const
{
    return cnName_;
}

void AllowedBandwidthTypes::setCnName(const std::string& value)
{
    cnName_ = value;
    cnNameIsSet_ = true;
}

bool AllowedBandwidthTypes::cnNameIsSet() const
{
    return cnNameIsSet_;
}

void AllowedBandwidthTypes::unsetcnName()
{
    cnNameIsSet_ = false;
}

std::string AllowedBandwidthTypes::getEnName() const
{
    return enName_;
}

void AllowedBandwidthTypes::setEnName(const std::string& value)
{
    enName_ = value;
    enNameIsSet_ = true;
}

bool AllowedBandwidthTypes::enNameIsSet() const
{
    return enNameIsSet_;
}

void AllowedBandwidthTypes::unsetenName()
{
    enNameIsSet_ = false;
}

}
}
}
}
}


