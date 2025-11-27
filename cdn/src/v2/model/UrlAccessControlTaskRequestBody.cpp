

#include "huaweicloud/cdn/v2/model/UrlAccessControlTaskRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




UrlAccessControlTaskRequestBody::UrlAccessControlTaskRequestBody()
{
    accessControlUrlsIsSet_ = false;
}

UrlAccessControlTaskRequestBody::~UrlAccessControlTaskRequestBody() = default;

void UrlAccessControlTaskRequestBody::validate()
{
}

web::json::value UrlAccessControlTaskRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessControlUrlsIsSet_) {
        val[utility::conversions::to_string_t("access_control_urls")] = ModelBase::toJson(accessControlUrls_);
    }

    return val;
}
bool UrlAccessControlTaskRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("access_control_urls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_control_urls"));
        if(!fieldValue.is_null())
        {
            AccessControlUrls refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessControlUrls(refVal);
        }
    }
    return ok;
}


AccessControlUrls UrlAccessControlTaskRequestBody::getAccessControlUrls() const
{
    return accessControlUrls_;
}

void UrlAccessControlTaskRequestBody::setAccessControlUrls(const AccessControlUrls& value)
{
    accessControlUrls_ = value;
    accessControlUrlsIsSet_ = true;
}

bool UrlAccessControlTaskRequestBody::accessControlUrlsIsSet() const
{
    return accessControlUrlsIsSet_;
}

void UrlAccessControlTaskRequestBody::unsetaccessControlUrls()
{
    accessControlUrlsIsSet_ = false;
}

}
}
}
}
}


