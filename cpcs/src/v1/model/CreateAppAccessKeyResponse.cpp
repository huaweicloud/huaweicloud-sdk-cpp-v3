

#include "huaweicloud/cpcs/v1/model/CreateAppAccessKeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




CreateAppAccessKeyResponse::CreateAppAccessKeyResponse()
{
    accessKeyId_ = "";
    accessKeyIdIsSet_ = false;
}

CreateAppAccessKeyResponse::~CreateAppAccessKeyResponse() = default;

void CreateAppAccessKeyResponse::validate()
{
}

web::json::value CreateAppAccessKeyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessKeyIdIsSet_) {
        val[utility::conversions::to_string_t("access_key_id")] = ModelBase::toJson(accessKeyId_);
    }

    return val;
}
bool CreateAppAccessKeyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("access_key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessKeyId(refVal);
        }
    }
    return ok;
}


std::string CreateAppAccessKeyResponse::getAccessKeyId() const
{
    return accessKeyId_;
}

void CreateAppAccessKeyResponse::setAccessKeyId(const std::string& value)
{
    accessKeyId_ = value;
    accessKeyIdIsSet_ = true;
}

bool CreateAppAccessKeyResponse::accessKeyIdIsSet() const
{
    return accessKeyIdIsSet_;
}

void CreateAppAccessKeyResponse::unsetaccessKeyId()
{
    accessKeyIdIsSet_ = false;
}

}
}
}
}
}


