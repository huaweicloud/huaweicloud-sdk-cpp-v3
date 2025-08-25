

#include "huaweicloud/cpcs/v1/model/BatchEnableAccessKeysResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




BatchEnableAccessKeysResponse::BatchEnableAccessKeysResponse()
{
    accessKeyIdsIsSet_ = false;
}

BatchEnableAccessKeysResponse::~BatchEnableAccessKeysResponse() = default;

void BatchEnableAccessKeysResponse::validate()
{
}

web::json::value BatchEnableAccessKeysResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessKeyIdsIsSet_) {
        val[utility::conversions::to_string_t("access_key_ids")] = ModelBase::toJson(accessKeyIds_);
    }

    return val;
}
bool BatchEnableAccessKeysResponse::fromJson(const web::json::value& val)
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


std::vector<std::string>& BatchEnableAccessKeysResponse::getAccessKeyIds()
{
    return accessKeyIds_;
}

void BatchEnableAccessKeysResponse::setAccessKeyIds(const std::vector<std::string>& value)
{
    accessKeyIds_ = value;
    accessKeyIdsIsSet_ = true;
}

bool BatchEnableAccessKeysResponse::accessKeyIdsIsSet() const
{
    return accessKeyIdsIsSet_;
}

void BatchEnableAccessKeysResponse::unsetaccessKeyIds()
{
    accessKeyIdsIsSet_ = false;
}

}
}
}
}
}


