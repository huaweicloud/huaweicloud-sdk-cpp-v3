

#include "huaweicloud/cpcs/v1/model/BatchAccessKeysRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




BatchAccessKeysRequestBody::BatchAccessKeysRequestBody()
{
    accessKeyIdsIsSet_ = false;
}

BatchAccessKeysRequestBody::~BatchAccessKeysRequestBody() = default;

void BatchAccessKeysRequestBody::validate()
{
}

web::json::value BatchAccessKeysRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessKeyIdsIsSet_) {
        val[utility::conversions::to_string_t("access_key_ids")] = ModelBase::toJson(accessKeyIds_);
    }

    return val;
}
bool BatchAccessKeysRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("access_key_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_key_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessKeyIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchAccessKeysRequestBody::getAccessKeyIds()
{
    return accessKeyIds_;
}

void BatchAccessKeysRequestBody::setAccessKeyIds(const std::vector<std::string>& value)
{
    accessKeyIds_ = value;
    accessKeyIdsIsSet_ = true;
}

bool BatchAccessKeysRequestBody::accessKeyIdsIsSet() const
{
    return accessKeyIdsIsSet_;
}

void BatchAccessKeysRequestBody::unsetaccessKeyIds()
{
    accessKeyIdsIsSet_ = false;
}

}
}
}
}
}


