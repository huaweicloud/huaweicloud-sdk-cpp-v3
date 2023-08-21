

#include "huaweicloud/kms/v2/model/ListKeyDetailResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListKeyDetailResponse::ListKeyDetailResponse()
{
    keyInfoIsSet_ = false;
}

ListKeyDetailResponse::~ListKeyDetailResponse() = default;

void ListKeyDetailResponse::validate()
{
}

web::json::value ListKeyDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyInfoIsSet_) {
        val[utility::conversions::to_string_t("key_info")] = ModelBase::toJson(keyInfo_);
    }

    return val;
}

bool ListKeyDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_info"));
        if(!fieldValue.is_null())
        {
            KeyDetails refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyInfo(refVal);
        }
    }
    return ok;
}

KeyDetails ListKeyDetailResponse::getKeyInfo() const
{
    return keyInfo_;
}

void ListKeyDetailResponse::setKeyInfo(const KeyDetails& value)
{
    keyInfo_ = value;
    keyInfoIsSet_ = true;
}

bool ListKeyDetailResponse::keyInfoIsSet() const
{
    return keyInfoIsSet_;
}

void ListKeyDetailResponse::unsetkeyInfo()
{
    keyInfoIsSet_ = false;
}

}
}
}
}
}


