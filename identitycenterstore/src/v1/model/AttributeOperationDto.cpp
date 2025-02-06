

#include "huaweicloud/identitycenterstore/v1/model/AttributeOperationDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




AttributeOperationDto::AttributeOperationDto()
{
    attributePath_ = "";
    attributePathIsSet_ = false;
    attributeValue_ = "";
    attributeValueIsSet_ = false;
}

AttributeOperationDto::~AttributeOperationDto() = default;

void AttributeOperationDto::validate()
{
}

web::json::value AttributeOperationDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(attributePathIsSet_) {
        val[utility::conversions::to_string_t("attribute_path")] = ModelBase::toJson(attributePath_);
    }
    if(attributeValueIsSet_) {
        val[utility::conversions::to_string_t("attribute_value")] = ModelBase::toJson(attributeValue_);
    }

    return val;
}
bool AttributeOperationDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attribute_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attribute_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttributePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attribute_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attribute_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttributeValue(refVal);
        }
    }
    return ok;
}


std::string AttributeOperationDto::getAttributePath() const
{
    return attributePath_;
}

void AttributeOperationDto::setAttributePath(const std::string& value)
{
    attributePath_ = value;
    attributePathIsSet_ = true;
}

bool AttributeOperationDto::attributePathIsSet() const
{
    return attributePathIsSet_;
}

void AttributeOperationDto::unsetattributePath()
{
    attributePathIsSet_ = false;
}

std::string AttributeOperationDto::getAttributeValue() const
{
    return attributeValue_;
}

void AttributeOperationDto::setAttributeValue(const std::string& value)
{
    attributeValue_ = value;
    attributeValueIsSet_ = true;
}

bool AttributeOperationDto::attributeValueIsSet() const
{
    return attributeValueIsSet_;
}

void AttributeOperationDto::unsetattributeValue()
{
    attributeValueIsSet_ = false;
}

}
}
}
}
}


