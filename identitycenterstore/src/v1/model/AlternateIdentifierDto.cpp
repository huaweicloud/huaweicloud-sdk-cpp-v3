

#include "huaweicloud/identitycenterstore/v1/model/AlternateIdentifierDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




AlternateIdentifierDto::AlternateIdentifierDto()
{
    externalIdIsSet_ = false;
    uniqueAttributeIsSet_ = false;
}

AlternateIdentifierDto::~AlternateIdentifierDto() = default;

void AlternateIdentifierDto::validate()
{
}

web::json::value AlternateIdentifierDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(externalIdIsSet_) {
        val[utility::conversions::to_string_t("external_id")] = ModelBase::toJson(externalId_);
    }
    if(uniqueAttributeIsSet_) {
        val[utility::conversions::to_string_t("unique_attribute")] = ModelBase::toJson(uniqueAttribute_);
    }

    return val;
}
bool AlternateIdentifierDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("external_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("external_id"));
        if(!fieldValue.is_null())
        {
            ExternalIdDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExternalId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unique_attribute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unique_attribute"));
        if(!fieldValue.is_null())
        {
            UniqueAttributeDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUniqueAttribute(refVal);
        }
    }
    return ok;
}


ExternalIdDto AlternateIdentifierDto::getExternalId() const
{
    return externalId_;
}

void AlternateIdentifierDto::setExternalId(const ExternalIdDto& value)
{
    externalId_ = value;
    externalIdIsSet_ = true;
}

bool AlternateIdentifierDto::externalIdIsSet() const
{
    return externalIdIsSet_;
}

void AlternateIdentifierDto::unsetexternalId()
{
    externalIdIsSet_ = false;
}

UniqueAttributeDto AlternateIdentifierDto::getUniqueAttribute() const
{
    return uniqueAttribute_;
}

void AlternateIdentifierDto::setUniqueAttribute(const UniqueAttributeDto& value)
{
    uniqueAttribute_ = value;
    uniqueAttributeIsSet_ = true;
}

bool AlternateIdentifierDto::uniqueAttributeIsSet() const
{
    return uniqueAttributeIsSet_;
}

void AlternateIdentifierDto::unsetuniqueAttribute()
{
    uniqueAttributeIsSet_ = false;
}

}
}
}
}
}


