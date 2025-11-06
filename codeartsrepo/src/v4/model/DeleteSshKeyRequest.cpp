

#include "huaweicloud/codeartsrepo/v4/model/DeleteSshKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




DeleteSshKeyRequest::DeleteSshKeyRequest()
{
    keyId_ = 0;
    keyIdIsSet_ = false;
}

DeleteSshKeyRequest::~DeleteSshKeyRequest() = default;

void DeleteSshKeyRequest::validate()
{
}

web::json::value DeleteSshKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }

    return val;
}
bool DeleteSshKeyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
        }
    }
    return ok;
}


int32_t DeleteSshKeyRequest::getKeyId() const
{
    return keyId_;
}

void DeleteSshKeyRequest::setKeyId(int32_t value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool DeleteSshKeyRequest::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void DeleteSshKeyRequest::unsetkeyId()
{
    keyIdIsSet_ = false;
}

}
}
}
}
}


