

#include "huaweicloud/rds/v3/model/MysqlProxyFlavorsResponse_compute_flavors.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




MysqlProxyFlavorsResponse_compute_flavors::MysqlProxyFlavorsResponse_compute_flavors()
{
    id_ = "";
    idIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    cpu_ = "";
    cpuIsSet_ = false;
    mem_ = "";
    memIsSet_ = false;
    dbType_ = "";
    dbTypeIsSet_ = false;
    azStatusIsSet_ = false;
}

MysqlProxyFlavorsResponse_compute_flavors::~MysqlProxyFlavorsResponse_compute_flavors() = default;

void MysqlProxyFlavorsResponse_compute_flavors::validate()
{
}

web::json::value MysqlProxyFlavorsResponse_compute_flavors::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(cpuIsSet_) {
        val[utility::conversions::to_string_t("cpu")] = ModelBase::toJson(cpu_);
    }
    if(memIsSet_) {
        val[utility::conversions::to_string_t("mem")] = ModelBase::toJson(mem_);
    }
    if(dbTypeIsSet_) {
        val[utility::conversions::to_string_t("db_type")] = ModelBase::toJson(dbType_);
    }
    if(azStatusIsSet_) {
        val[utility::conversions::to_string_t("az_status")] = ModelBase::toJson(azStatus_);
    }

    return val;
}
bool MysqlProxyFlavorsResponse_compute_flavors::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mem"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mem"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMem(refVal);
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


std::string MysqlProxyFlavorsResponse_compute_flavors::getId() const
{
    return id_;
}

void MysqlProxyFlavorsResponse_compute_flavors::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MysqlProxyFlavorsResponse_compute_flavors::idIsSet() const
{
    return idIsSet_;
}

void MysqlProxyFlavorsResponse_compute_flavors::unsetid()
{
    idIsSet_ = false;
}

std::string MysqlProxyFlavorsResponse_compute_flavors::getCode() const
{
    return code_;
}

void MysqlProxyFlavorsResponse_compute_flavors::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool MysqlProxyFlavorsResponse_compute_flavors::codeIsSet() const
{
    return codeIsSet_;
}

void MysqlProxyFlavorsResponse_compute_flavors::unsetcode()
{
    codeIsSet_ = false;
}

std::string MysqlProxyFlavorsResponse_compute_flavors::getCpu() const
{
    return cpu_;
}

void MysqlProxyFlavorsResponse_compute_flavors::setCpu(const std::string& value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool MysqlProxyFlavorsResponse_compute_flavors::cpuIsSet() const
{
    return cpuIsSet_;
}

void MysqlProxyFlavorsResponse_compute_flavors::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string MysqlProxyFlavorsResponse_compute_flavors::getMem() const
{
    return mem_;
}

void MysqlProxyFlavorsResponse_compute_flavors::setMem(const std::string& value)
{
    mem_ = value;
    memIsSet_ = true;
}

bool MysqlProxyFlavorsResponse_compute_flavors::memIsSet() const
{
    return memIsSet_;
}

void MysqlProxyFlavorsResponse_compute_flavors::unsetmem()
{
    memIsSet_ = false;
}

std::string MysqlProxyFlavorsResponse_compute_flavors::getDbType() const
{
    return dbType_;
}

void MysqlProxyFlavorsResponse_compute_flavors::setDbType(const std::string& value)
{
    dbType_ = value;
    dbTypeIsSet_ = true;
}

bool MysqlProxyFlavorsResponse_compute_flavors::dbTypeIsSet() const
{
    return dbTypeIsSet_;
}

void MysqlProxyFlavorsResponse_compute_flavors::unsetdbType()
{
    dbTypeIsSet_ = false;
}

Object MysqlProxyFlavorsResponse_compute_flavors::getAzStatus() const
{
    return azStatus_;
}

void MysqlProxyFlavorsResponse_compute_flavors::setAzStatus(const Object& value)
{
    azStatus_ = value;
    azStatusIsSet_ = true;
}

bool MysqlProxyFlavorsResponse_compute_flavors::azStatusIsSet() const
{
    return azStatusIsSet_;
}

void MysqlProxyFlavorsResponse_compute_flavors::unsetazStatus()
{
    azStatusIsSet_ = false;
}

}
}
}
}
}


