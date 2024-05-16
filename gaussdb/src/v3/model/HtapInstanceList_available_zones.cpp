

#include "huaweicloud/gaussdb/v3/model/HtapInstanceList_available_zones.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




HtapInstanceList_available_zones::HtapInstanceList_available_zones()
{
    code_ = "";
    codeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    azType_ = "";
    azTypeIsSet_ = false;
}

HtapInstanceList_available_zones::~HtapInstanceList_available_zones() = default;

void HtapInstanceList_available_zones::validate()
{
}

web::json::value HtapInstanceList_available_zones::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(azTypeIsSet_) {
        val[utility::conversions::to_string_t("az_type")] = ModelBase::toJson(azType_);
    }

    return val;
}
bool HtapInstanceList_available_zones::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzType(refVal);
        }
    }
    return ok;
}


std::string HtapInstanceList_available_zones::getCode() const
{
    return code_;
}

void HtapInstanceList_available_zones::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool HtapInstanceList_available_zones::codeIsSet() const
{
    return codeIsSet_;
}

void HtapInstanceList_available_zones::unsetcode()
{
    codeIsSet_ = false;
}

std::string HtapInstanceList_available_zones::getDescription() const
{
    return description_;
}

void HtapInstanceList_available_zones::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool HtapInstanceList_available_zones::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void HtapInstanceList_available_zones::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string HtapInstanceList_available_zones::getAzType() const
{
    return azType_;
}

void HtapInstanceList_available_zones::setAzType(const std::string& value)
{
    azType_ = value;
    azTypeIsSet_ = true;
}

bool HtapInstanceList_available_zones::azTypeIsSet() const
{
    return azTypeIsSet_;
}

void HtapInstanceList_available_zones::unsetazType()
{
    azTypeIsSet_ = false;
}

}
}
}
}
}


