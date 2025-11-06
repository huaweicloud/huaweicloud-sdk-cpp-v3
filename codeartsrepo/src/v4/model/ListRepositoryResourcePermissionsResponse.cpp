

#include "huaweicloud/codeartsrepo/v4/model/ListRepositoryResourcePermissionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListRepositoryResourcePermissionsResponse::ListRepositoryResourcePermissionsResponse()
{
    bodyIsSet_ = false;
}

ListRepositoryResourcePermissionsResponse::~ListRepositoryResourcePermissionsResponse() = default;

void ListRepositoryResourcePermissionsResponse::validate()
{
}

web::json::value ListRepositoryResourcePermissionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListRepositoryResourcePermissionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ResponsePermissionInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<ResponsePermissionInfo>& ListRepositoryResourcePermissionsResponse::getBody()
{
    return body_;
}

void ListRepositoryResourcePermissionsResponse::setBody(const std::vector<ResponsePermissionInfo>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListRepositoryResourcePermissionsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListRepositoryResourcePermissionsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


