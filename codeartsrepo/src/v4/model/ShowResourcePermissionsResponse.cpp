

#include "huaweicloud/codeartsrepo/v4/model/ShowResourcePermissionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowResourcePermissionsResponse::ShowResourcePermissionsResponse()
{
    bodyIsSet_ = false;
}

ShowResourcePermissionsResponse::~ShowResourcePermissionsResponse() = default;

void ShowResourcePermissionsResponse::validate()
{
}

web::json::value ShowResourcePermissionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowResourcePermissionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<PermissionDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<PermissionDto>& ShowResourcePermissionsResponse::getBody()
{
    return body_;
}

void ShowResourcePermissionsResponse::setBody(const std::vector<PermissionDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowResourcePermissionsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowResourcePermissionsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


