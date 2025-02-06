

#include "huaweicloud/identitycenterstore/v1/model/GetUserIdReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




GetUserIdReqBody::GetUserIdReqBody()
{
    alternateIdentifierIsSet_ = false;
}

GetUserIdReqBody::~GetUserIdReqBody() = default;

void GetUserIdReqBody::validate()
{
}

web::json::value GetUserIdReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(alternateIdentifierIsSet_) {
        val[utility::conversions::to_string_t("alternate_identifier")] = ModelBase::toJson(alternateIdentifier_);
    }

    return val;
}
bool GetUserIdReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alternate_identifier"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alternate_identifier"));
        if(!fieldValue.is_null())
        {
            AlternateIdentifierDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlternateIdentifier(refVal);
        }
    }
    return ok;
}


AlternateIdentifierDto GetUserIdReqBody::getAlternateIdentifier() const
{
    return alternateIdentifier_;
}

void GetUserIdReqBody::setAlternateIdentifier(const AlternateIdentifierDto& value)
{
    alternateIdentifier_ = value;
    alternateIdentifierIsSet_ = true;
}

bool GetUserIdReqBody::alternateIdentifierIsSet() const
{
    return alternateIdentifierIsSet_;
}

void GetUserIdReqBody::unsetalternateIdentifier()
{
    alternateIdentifierIsSet_ = false;
}

}
}
}
}
}


