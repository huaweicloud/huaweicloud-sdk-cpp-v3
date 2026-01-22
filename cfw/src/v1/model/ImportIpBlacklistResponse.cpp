

#include "huaweicloud/cfw/v1/model/ImportIpBlacklistResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ImportIpBlacklistResponse::ImportIpBlacklistResponse()
{
    bodyIsSet_ = false;
}

ImportIpBlacklistResponse::~ImportIpBlacklistResponse() = default;

void ImportIpBlacklistResponse::validate()
{
}

web::json::value ImportIpBlacklistResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ImportIpBlacklistResponse::fromJson(const web::json::value& val)
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


Object ImportIpBlacklistResponse::getBody() const
{
    return body_;
}

void ImportIpBlacklistResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ImportIpBlacklistResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ImportIpBlacklistResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


