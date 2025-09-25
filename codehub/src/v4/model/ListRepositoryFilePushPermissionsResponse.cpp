

#include "huaweicloud/codehub/v4/model/ListRepositoryFilePushPermissionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListRepositoryFilePushPermissionsResponse::ListRepositoryFilePushPermissionsResponse()
{
    bodyIsSet_ = false;
}

ListRepositoryFilePushPermissionsResponse::~ListRepositoryFilePushPermissionsResponse() = default;

void ListRepositoryFilePushPermissionsResponse::validate()
{
}

web::json::value ListRepositoryFilePushPermissionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListRepositoryFilePushPermissionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<RepositoryFilePushPermissionDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<RepositoryFilePushPermissionDto>& ListRepositoryFilePushPermissionsResponse::getBody()
{
    return body_;
}

void ListRepositoryFilePushPermissionsResponse::setBody(const std::vector<RepositoryFilePushPermissionDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListRepositoryFilePushPermissionsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListRepositoryFilePushPermissionsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


