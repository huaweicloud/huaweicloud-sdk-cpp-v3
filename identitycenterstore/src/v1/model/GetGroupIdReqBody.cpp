

#include "huaweicloud/identitycenterstore/v1/model/GetGroupIdReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




GetGroupIdReqBody::GetGroupIdReqBody()
{
    alternateIdentifierIsSet_ = false;
}

GetGroupIdReqBody::~GetGroupIdReqBody() = default;

void GetGroupIdReqBody::validate()
{
}

web::json::value GetGroupIdReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(alternateIdentifierIsSet_) {
        val[utility::conversions::to_string_t("alternate_identifier")] = ModelBase::toJson(alternateIdentifier_);
    }

    return val;
}
bool GetGroupIdReqBody::fromJson(const web::json::value& val)
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


AlternateIdentifierDto GetGroupIdReqBody::getAlternateIdentifier() const
{
    return alternateIdentifier_;
}

void GetGroupIdReqBody::setAlternateIdentifier(const AlternateIdentifierDto& value)
{
    alternateIdentifier_ = value;
    alternateIdentifierIsSet_ = true;
}

bool GetGroupIdReqBody::alternateIdentifierIsSet() const
{
    return alternateIdentifierIsSet_;
}

void GetGroupIdReqBody::unsetalternateIdentifier()
{
    alternateIdentifierIsSet_ = false;
}

}
}
}
}
}


