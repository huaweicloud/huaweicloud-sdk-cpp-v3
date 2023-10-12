

#include "huaweicloud/gaussdb/v3/model/MysqlProxyComputeFlavor.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlProxyComputeFlavor::MysqlProxyComputeFlavor()
{
    vcpus_ = "";
    vcpusIsSet_ = false;
    ram_ = "";
    ramIsSet_ = false;
    dbType_ = "";
    dbTypeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
    azStatusIsSet_ = false;
}

MysqlProxyComputeFlavor::~MysqlProxyComputeFlavor() = default;

void MysqlProxyComputeFlavor::validate()
{
}

web::json::value MysqlProxyComputeFlavor::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vcpusIsSet_) {
        val[utility::conversions::to_string_t("vcpus")] = ModelBase::toJson(vcpus_);
    }
    if(ramIsSet_) {
        val[utility::conversions::to_string_t("ram")] = ModelBase::toJson(ram_);
    }
    if(dbTypeIsSet_) {
        val[utility::conversions::to_string_t("db_type")] = ModelBase::toJson(dbType_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(azStatusIsSet_) {
        val[utility::conversions::to_string_t("az_status")] = ModelBase::toJson(azStatus_);
    }

    return val;
}
bool MysqlProxyComputeFlavor::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vcpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vcpus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVcpus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ram"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ram"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_status"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzStatus(refVal);
        }
    }
    return ok;
}


std::string MysqlProxyComputeFlavor::getVcpus() const
{
    return vcpus_;
}

void MysqlProxyComputeFlavor::setVcpus(const std::string& value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool MysqlProxyComputeFlavor::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void MysqlProxyComputeFlavor::unsetvcpus()
{
    vcpusIsSet_ = false;
}

std::string MysqlProxyComputeFlavor::getRam() const
{
    return ram_;
}

void MysqlProxyComputeFlavor::setRam(const std::string& value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool MysqlProxyComputeFlavor::ramIsSet() const
{
    return ramIsSet_;
}

void MysqlProxyComputeFlavor::unsetram()
{
    ramIsSet_ = false;
}

std::string MysqlProxyComputeFlavor::getDbType() const
{
    return dbType_;
}

void MysqlProxyComputeFlavor::setDbType(const std::string& value)
{
    dbType_ = value;
    dbTypeIsSet_ = true;
}

bool MysqlProxyComputeFlavor::dbTypeIsSet() const
{
    return dbTypeIsSet_;
}

void MysqlProxyComputeFlavor::unsetdbType()
{
    dbTypeIsSet_ = false;
}

std::string MysqlProxyComputeFlavor::getId() const
{
    return id_;
}

void MysqlProxyComputeFlavor::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MysqlProxyComputeFlavor::idIsSet() const
{
    return idIsSet_;
}

void MysqlProxyComputeFlavor::unsetid()
{
    idIsSet_ = false;
}

std::string MysqlProxyComputeFlavor::getSpecCode() const
{
    return specCode_;
}

void MysqlProxyComputeFlavor::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool MysqlProxyComputeFlavor::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void MysqlProxyComputeFlavor::unsetspecCode()
{
    specCodeIsSet_ = false;
}

Object MysqlProxyComputeFlavor::getAzStatus() const
{
    return azStatus_;
}

void MysqlProxyComputeFlavor::setAzStatus(const Object& value)
{
    azStatus_ = value;
    azStatusIsSet_ = true;
}

bool MysqlProxyComputeFlavor::azStatusIsSet() const
{
    return azStatusIsSet_;
}

void MysqlProxyComputeFlavor::unsetazStatus()
{
    azStatusIsSet_ = false;
}

}
}
}
}
}


