

#include "huaweicloud/cpcs/v1/model/BatchDisableAccessKeysResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




BatchDisableAccessKeysResponse::BatchDisableAccessKeysResponse()
{
    accessKeyIdsIsSet_ = false;
}

BatchDisableAccessKeysResponse::~BatchDisableAccessKeysResponse() = default;

void BatchDisableAccessKeysResponse::validate()
{
}

web::json::value BatchDisableAccessKeysResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessKeyIdsIsSet_) {
        val[utility::conversions::to_string_t("access_key_ids")] = ModelBase::toJson(accessKeyIds_);
    }

    return val;
}
bool BatchDisableAccessKeysResponse::fromJson(const web::json::value& val)
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


std::vector<std::string>& BatchDisableAccessKeysResponse::getAccessKeyIds()
{
    return accessKeyIds_;
}

void BatchDisableAccessKeysResponse::setAccessKeyIds(const std::vector<std::string>& value)
{
    accessKeyIds_ = value;
    accessKeyIdsIsSet_ = true;
}

bool BatchDisableAccessKeysResponse::accessKeyIdsIsSet() const
{
    return accessKeyIdsIsSet_;
}

void BatchDisableAccessKeysResponse::unsetaccessKeyIds()
{
    accessKeyIdsIsSet_ = false;
}

}
}
}
}
}


