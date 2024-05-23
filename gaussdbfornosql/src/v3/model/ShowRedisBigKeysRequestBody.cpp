

#include "huaweicloud/gaussdbfornosql/v3/model/ShowRedisBigKeysRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowRedisBigKeysRequestBody::ShowRedisBigKeysRequestBody()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    keyTypesIsSet_ = false;
}

ShowRedisBigKeysRequestBody::~ShowRedisBigKeysRequestBody() = default;

void ShowRedisBigKeysRequestBody::validate()
{
}

web::json::value ShowRedisBigKeysRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(keyTypesIsSet_) {
        val[utility::conversions::to_string_t("key_types")] = ModelBase::toJson(keyTypes_);
    }

    return val;
}
bool ShowRedisBigKeysRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_types"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyTypes(refVal);
        }
    }
    return ok;
}


int32_t ShowRedisBigKeysRequestBody::getOffset() const
{
    return offset_;
}

void ShowRedisBigKeysRequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowRedisBigKeysRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowRedisBigKeysRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowRedisBigKeysRequestBody::getLimit() const
{
    return limit_;
}

void ShowRedisBigKeysRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowRedisBigKeysRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ShowRedisBigKeysRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::vector<std::string>& ShowRedisBigKeysRequestBody::getKeyTypes()
{
    return keyTypes_;
}

void ShowRedisBigKeysRequestBody::setKeyTypes(const std::vector<std::string>& value)
{
    keyTypes_ = value;
    keyTypesIsSet_ = true;
}

bool ShowRedisBigKeysRequestBody::keyTypesIsSet() const
{
    return keyTypesIsSet_;
}

void ShowRedisBigKeysRequestBody::unsetkeyTypes()
{
    keyTypesIsSet_ = false;
}

}
}
}
}
}


