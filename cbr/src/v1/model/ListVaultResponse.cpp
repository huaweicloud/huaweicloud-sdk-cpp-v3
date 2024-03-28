

#include "huaweicloud/cbr/v1/model/ListVaultResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ListVaultResponse::ListVaultResponse()
{
    vaultsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListVaultResponse::~ListVaultResponse() = default;

void ListVaultResponse::validate()
{
}

web::json::value ListVaultResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vaultsIsSet_) {
        val[utility::conversions::to_string_t("vaults")] = ModelBase::toJson(vaults_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListVaultResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vaults"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vaults"));
        if(!fieldValue.is_null())
        {
            std::vector<Vault> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVaults(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::vector<Vault>& ListVaultResponse::getVaults()
{
    return vaults_;
}

void ListVaultResponse::setVaults(const std::vector<Vault>& value)
{
    vaults_ = value;
    vaultsIsSet_ = true;
}

bool ListVaultResponse::vaultsIsSet() const
{
    return vaultsIsSet_;
}

void ListVaultResponse::unsetvaults()
{
    vaultsIsSet_ = false;
}

int32_t ListVaultResponse::getCount() const
{
    return count_;
}

void ListVaultResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListVaultResponse::countIsSet() const
{
    return countIsSet_;
}

void ListVaultResponse::unsetcount()
{
    countIsSet_ = false;
}

int32_t ListVaultResponse::getLimit() const
{
    return limit_;
}

void ListVaultResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListVaultResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListVaultResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListVaultResponse::getOffset() const
{
    return offset_;
}

void ListVaultResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListVaultResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListVaultResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


