

#include "huaweicloud/identitycenter/v1/model/ResponseSchemaPropertiesDetailsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ResponseSchemaPropertiesDetailsDto::ResponseSchemaPropertiesDetailsDto()
{
    attrNameFormat_ = "";
    attrNameFormatIsSet_ = false;
    include_ = "";
    includeIsSet_ = false;
}

ResponseSchemaPropertiesDetailsDto::~ResponseSchemaPropertiesDetailsDto() = default;

void ResponseSchemaPropertiesDetailsDto::validate()
{
}

web::json::value ResponseSchemaPropertiesDetailsDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(attrNameFormatIsSet_) {
        val[utility::conversions::to_string_t("attr_name_format")] = ModelBase::toJson(attrNameFormat_);
    }
    if(includeIsSet_) {
        val[utility::conversions::to_string_t("include")] = ModelBase::toJson(include_);
    }

    return val;
}
bool ResponseSchemaPropertiesDetailsDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attr_name_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attr_name_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttrNameFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("include"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("include"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInclude(refVal);
        }
    }
    return ok;
}


std::string ResponseSchemaPropertiesDetailsDto::getAttrNameFormat() const
{
    return attrNameFormat_;
}

void ResponseSchemaPropertiesDetailsDto::setAttrNameFormat(const std::string& value)
{
    attrNameFormat_ = value;
    attrNameFormatIsSet_ = true;
}

bool ResponseSchemaPropertiesDetailsDto::attrNameFormatIsSet() const
{
    return attrNameFormatIsSet_;
}

void ResponseSchemaPropertiesDetailsDto::unsetattrNameFormat()
{
    attrNameFormatIsSet_ = false;
}

std::string ResponseSchemaPropertiesDetailsDto::getInclude() const
{
    return include_;
}

void ResponseSchemaPropertiesDetailsDto::setInclude(const std::string& value)
{
    include_ = value;
    includeIsSet_ = true;
}

bool ResponseSchemaPropertiesDetailsDto::includeIsSet() const
{
    return includeIsSet_;
}

void ResponseSchemaPropertiesDetailsDto::unsetinclude()
{
    includeIsSet_ = false;
}

}
}
}
}
}


