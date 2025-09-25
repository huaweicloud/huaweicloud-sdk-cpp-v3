

#include "huaweicloud/codehub/v4/model/ListUserKeysResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListUserKeysResponse::ListUserKeysResponse()
{
    keysIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListUserKeysResponse::~ListUserKeysResponse() = default;

void ListUserKeysResponse::validate()
{
}

web::json::value ListUserKeysResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keysIsSet_) {
        val[utility::conversions::to_string_t("keys")] = ModelBase::toJson(keys_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListUserKeysResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keys"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keys"));
        if(!fieldValue.is_null())
        {
            std::vector<SSHKeyDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeys(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<SSHKeyDto>& ListUserKeysResponse::getKeys()
{
    return keys_;
}

void ListUserKeysResponse::setKeys(const std::vector<SSHKeyDto>& value)
{
    keys_ = value;
    keysIsSet_ = true;
}

bool ListUserKeysResponse::keysIsSet() const
{
    return keysIsSet_;
}

void ListUserKeysResponse::unsetkeys()
{
    keysIsSet_ = false;
}

int32_t ListUserKeysResponse::getTotal() const
{
    return total_;
}

void ListUserKeysResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListUserKeysResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListUserKeysResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


