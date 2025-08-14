

#include "huaweicloud/iotda/v5/model/InfluxDBForwarding.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




InfluxDBForwarding::InfluxDBForwarding()
{
    addressIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    username_ = "";
    usernameIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    measurement_ = "";
    measurementIsSet_ = false;
    columnMappingsIsSet_ = false;
}

InfluxDBForwarding::~InfluxDBForwarding() = default;

void InfluxDBForwarding::validate()
{
}

web::json::value InfluxDBForwarding::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
    if(measurementIsSet_) {
        val[utility::conversions::to_string_t("measurement")] = ModelBase::toJson(measurement_);
    }
    if(columnMappingsIsSet_) {
        val[utility::conversions::to_string_t("column_mappings")] = ModelBase::toJson(columnMappings_);
    }

    return val;
}
bool InfluxDBForwarding::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            NetAddress refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("username"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("username"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsername(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("measurement"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("measurement"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMeasurement(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("column_mappings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("column_mappings"));
        if(!fieldValue.is_null())
        {
            std::vector<ColumnMapping> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColumnMappings(refVal);
        }
    }
    return ok;
}


NetAddress InfluxDBForwarding::getAddress() const
{
    return address_;
}

void InfluxDBForwarding::setAddress(const NetAddress& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool InfluxDBForwarding::addressIsSet() const
{
    return addressIsSet_;
}

void InfluxDBForwarding::unsetaddress()
{
    addressIsSet_ = false;
}

std::string InfluxDBForwarding::getDbName() const
{
    return dbName_;
}

void InfluxDBForwarding::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool InfluxDBForwarding::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void InfluxDBForwarding::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string InfluxDBForwarding::getUsername() const
{
    return username_;
}

void InfluxDBForwarding::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool InfluxDBForwarding::usernameIsSet() const
{
    return usernameIsSet_;
}

void InfluxDBForwarding::unsetusername()
{
    usernameIsSet_ = false;
}

std::string InfluxDBForwarding::getPassword() const
{
    return password_;
}

void InfluxDBForwarding::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool InfluxDBForwarding::passwordIsSet() const
{
    return passwordIsSet_;
}

void InfluxDBForwarding::unsetpassword()
{
    passwordIsSet_ = false;
}

std::string InfluxDBForwarding::getMeasurement() const
{
    return measurement_;
}

void InfluxDBForwarding::setMeasurement(const std::string& value)
{
    measurement_ = value;
    measurementIsSet_ = true;
}

bool InfluxDBForwarding::measurementIsSet() const
{
    return measurementIsSet_;
}

void InfluxDBForwarding::unsetmeasurement()
{
    measurementIsSet_ = false;
}

std::vector<ColumnMapping>& InfluxDBForwarding::getColumnMappings()
{
    return columnMappings_;
}

void InfluxDBForwarding::setColumnMappings(const std::vector<ColumnMapping>& value)
{
    columnMappings_ = value;
    columnMappingsIsSet_ = true;
}

bool InfluxDBForwarding::columnMappingsIsSet() const
{
    return columnMappingsIsSet_;
}

void InfluxDBForwarding::unsetcolumnMappings()
{
    columnMappingsIsSet_ = false;
}

}
}
}
}
}


