

#include "huaweicloud/gaussdbfornosql/v3/model/DatastoreOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DatastoreOption::DatastoreOption()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    storageEngine_ = "";
    storageEngineIsSet_ = false;
}

DatastoreOption::~DatastoreOption() = default;

void DatastoreOption::validate()
{
}

web::json::value DatastoreOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(storageEngineIsSet_) {
        val[utility::conversions::to_string_t("storage_engine")] = ModelBase::toJson(storageEngine_);
    }

    return val;
}

bool DatastoreOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storage_engine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage_engine"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageEngine(refVal);
        }
    }
    return ok;
}

std::string DatastoreOption::getType() const
{
    return type_;
}

void DatastoreOption::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DatastoreOption::typeIsSet() const
{
    return typeIsSet_;
}

void DatastoreOption::unsettype()
{
    typeIsSet_ = false;
}

std::string DatastoreOption::getVersion() const
{
    return version_;
}

void DatastoreOption::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool DatastoreOption::versionIsSet() const
{
    return versionIsSet_;
}

void DatastoreOption::unsetversion()
{
    versionIsSet_ = false;
}

std::string DatastoreOption::getStorageEngine() const
{
    return storageEngine_;
}

void DatastoreOption::setStorageEngine(const std::string& value)
{
    storageEngine_ = value;
    storageEngineIsSet_ = true;
}

bool DatastoreOption::storageEngineIsSet() const
{
    return storageEngineIsSet_;
}

void DatastoreOption::unsetstorageEngine()
{
    storageEngineIsSet_ = false;
}

}
}
}
}
}


