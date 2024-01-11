

#include "huaweicloud/cbr/v1/model/ListExternalVaultResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ListExternalVaultResponse::ListExternalVaultResponse()
{
    vaultsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    sysLockSourceService_ = "";
    sysLockSourceServiceIsSet_ = false;
}

ListExternalVaultResponse::~ListExternalVaultResponse() = default;

void ListExternalVaultResponse::validate()
{
}

web::json::value ListExternalVaultResponse::toJson() const
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
    if(sysLockSourceServiceIsSet_) {
        val[utility::conversions::to_string_t("sys_lock_source_service")] = ModelBase::toJson(sysLockSourceService_);
    }

    return val;
}
bool ListExternalVaultResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sys_lock_source_service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_lock_source_service"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysLockSourceService(refVal);
        }
    }
    return ok;
}


std::vector<Vault>& ListExternalVaultResponse::getVaults()
{
    return vaults_;
}

void ListExternalVaultResponse::setVaults(const std::vector<Vault>& value)
{
    vaults_ = value;
    vaultsIsSet_ = true;
}

bool ListExternalVaultResponse::vaultsIsSet() const
{
    return vaultsIsSet_;
}

void ListExternalVaultResponse::unsetvaults()
{
    vaultsIsSet_ = false;
}

int32_t ListExternalVaultResponse::getCount() const
{
    return count_;
}

void ListExternalVaultResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListExternalVaultResponse::countIsSet() const
{
    return countIsSet_;
}

void ListExternalVaultResponse::unsetcount()
{
    countIsSet_ = false;
}

int32_t ListExternalVaultResponse::getLimit() const
{
    return limit_;
}

void ListExternalVaultResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListExternalVaultResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListExternalVaultResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListExternalVaultResponse::getOffset() const
{
    return offset_;
}

void ListExternalVaultResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListExternalVaultResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListExternalVaultResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListExternalVaultResponse::getSysLockSourceService() const
{
    return sysLockSourceService_;
}

void ListExternalVaultResponse::setSysLockSourceService(const std::string& value)
{
    sysLockSourceService_ = value;
    sysLockSourceServiceIsSet_ = true;
}

bool ListExternalVaultResponse::sysLockSourceServiceIsSet() const
{
    return sysLockSourceServiceIsSet_;
}

void ListExternalVaultResponse::unsetsysLockSourceService()
{
    sysLockSourceServiceIsSet_ = false;
}

}
}
}
}
}


