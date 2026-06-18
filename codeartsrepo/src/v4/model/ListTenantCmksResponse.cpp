

#include "huaweicloud/codeartsrepo/v4/model/ListTenantCmksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListTenantCmksResponse::ListTenantCmksResponse()
{
    bodyIsSet_ = false;
}

ListTenantCmksResponse::~ListTenantCmksResponse() = default;

void ListTenantCmksResponse::validate()
{
}

web::json::value ListTenantCmksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListTenantCmksResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<TenantCMKDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<TenantCMKDto>& ListTenantCmksResponse::getBody()
{
    return body_;
}

void ListTenantCmksResponse::setBody(const std::vector<TenantCMKDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTenantCmksResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTenantCmksResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


