

#include "huaweicloud/identitycenterstore/v1/model/UniqueAttributeDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




UniqueAttributeDto::UniqueAttributeDto()
{
    attributePath_ = "";
    attributePathIsSet_ = false;
    attributeValue_ = "";
    attributeValueIsSet_ = false;
}

UniqueAttributeDto::~UniqueAttributeDto() = default;

void UniqueAttributeDto::validate()
{
}

web::json::value UniqueAttributeDto::toJson() const
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
bool UniqueAttributeDto::fromJson(const web::json::value& val)
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


std::string UniqueAttributeDto::getAttributePath() const
{
    return attributePath_;
}

void UniqueAttributeDto::setAttributePath(const std::string& value)
{
    attributePath_ = value;
    attributePathIsSet_ = true;
}

bool UniqueAttributeDto::attributePathIsSet() const
{
    return attributePathIsSet_;
}

void UniqueAttributeDto::unsetattributePath()
{
    attributePathIsSet_ = false;
}

std::string UniqueAttributeDto::getAttributeValue() const
{
    return attributeValue_;
}

void UniqueAttributeDto::setAttributeValue(const std::string& value)
{
    attributeValue_ = value;
    attributeValueIsSet_ = true;
}

bool UniqueAttributeDto::attributeValueIsSet() const
{
    return attributeValueIsSet_;
}

void UniqueAttributeDto::unsetattributeValue()
{
    attributeValueIsSet_ = false;
}

}
}
}
}
}


