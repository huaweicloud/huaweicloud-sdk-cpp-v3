

#include "huaweicloud/gaussdb/v3/model/MysqlProxyInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlProxyInfo::MysqlProxyInfo()
{
    poolId_ = "";
    poolIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
}

MysqlProxyInfo::~MysqlProxyInfo() = default;

void MysqlProxyInfo::validate()
{
}

web::json::value MysqlProxyInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(poolIdIsSet_) {
        val[utility::conversions::to_string_t("pool_id")] = ModelBase::toJson(poolId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }

    return val;
}
bool MysqlProxyInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
        }
    }
    return ok;
}


std::string MysqlProxyInfo::getPoolId() const
{
    return poolId_;
}

void MysqlProxyInfo::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool MysqlProxyInfo::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void MysqlProxyInfo::unsetpoolId()
{
    poolIdIsSet_ = false;
}

std::string MysqlProxyInfo::getName() const
{
    return name_;
}

void MysqlProxyInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MysqlProxyInfo::nameIsSet() const
{
    return nameIsSet_;
}

void MysqlProxyInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string MysqlProxyInfo::getAddress() const
{
    return address_;
}

void MysqlProxyInfo::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool MysqlProxyInfo::addressIsSet() const
{
    return addressIsSet_;
}

void MysqlProxyInfo::unsetaddress()
{
    addressIsSet_ = false;
}

}
}
}
}
}


