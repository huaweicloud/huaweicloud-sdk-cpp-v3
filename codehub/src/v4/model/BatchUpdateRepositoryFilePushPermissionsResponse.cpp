

#include "huaweicloud/codehub/v4/model/BatchUpdateRepositoryFilePushPermissionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




BatchUpdateRepositoryFilePushPermissionsResponse::BatchUpdateRepositoryFilePushPermissionsResponse()
{
    bodyIsSet_ = false;
}

BatchUpdateRepositoryFilePushPermissionsResponse::~BatchUpdateRepositoryFilePushPermissionsResponse() = default;

void BatchUpdateRepositoryFilePushPermissionsResponse::validate()
{
}

web::json::value BatchUpdateRepositoryFilePushPermissionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchUpdateRepositoryFilePushPermissionsResponse::fromJson(const web::json::value& val)
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


std::vector<RepositoryFilePushPermissionDto>& BatchUpdateRepositoryFilePushPermissionsResponse::getBody()
{
    return body_;
}

void BatchUpdateRepositoryFilePushPermissionsResponse::setBody(const std::vector<RepositoryFilePushPermissionDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateRepositoryFilePushPermissionsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateRepositoryFilePushPermissionsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


