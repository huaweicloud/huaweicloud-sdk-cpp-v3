

#include "huaweicloud/gaussdbfornosql/v3/model/ShowRedisHotKeysResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowRedisHotKeysResponse::ShowRedisHotKeysResponse()
{
    keysIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

ShowRedisHotKeysResponse::~ShowRedisHotKeysResponse() = default;

void ShowRedisHotKeysResponse::validate()
{
}

web::json::value ShowRedisHotKeysResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keysIsSet_) {
        val[utility::conversions::to_string_t("keys")] = ModelBase::toJson(keys_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ShowRedisHotKeysResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keys"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keys"));
        if(!fieldValue.is_null())
        {
            std::vector<HotKeysInfoResponseBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeys(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::vector<HotKeysInfoResponseBody>& ShowRedisHotKeysResponse::getKeys()
{
    return keys_;
}

void ShowRedisHotKeysResponse::setKeys(const std::vector<HotKeysInfoResponseBody>& value)
{
    keys_ = value;
    keysIsSet_ = true;
}

bool ShowRedisHotKeysResponse::keysIsSet() const
{
    return keysIsSet_;
}

void ShowRedisHotKeysResponse::unsetkeys()
{
    keysIsSet_ = false;
}

int32_t ShowRedisHotKeysResponse::getCount() const
{
    return count_;
}

void ShowRedisHotKeysResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowRedisHotKeysResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowRedisHotKeysResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


