

#include "huaweicloud/cfw/v1/model/DeleteIpBlacklistResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteIpBlacklistResponse::DeleteIpBlacklistResponse()
{
    bodyIsSet_ = false;
}

DeleteIpBlacklistResponse::~DeleteIpBlacklistResponse() = default;

void DeleteIpBlacklistResponse::validate()
{
}

web::json::value DeleteIpBlacklistResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteIpBlacklistResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


Object DeleteIpBlacklistResponse::getBody() const
{
    return body_;
}

void DeleteIpBlacklistResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteIpBlacklistResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteIpBlacklistResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


