

#include "huaweicloud/gaussdbforopengauss/v3/model/DatastoreResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DatastoreResult::DatastoreResult()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

DatastoreResult::~DatastoreResult() = default;

void DatastoreResult::validate()
{
}

web::json::value DatastoreResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool DatastoreResult::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DatastoreResult::getType() const
{
    return type_;
}

void DatastoreResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DatastoreResult::typeIsSet() const
{
    return typeIsSet_;
}

void DatastoreResult::unsettype()
{
    typeIsSet_ = false;
}

std::string DatastoreResult::getVersion() const
{
    return version_;
}

void DatastoreResult::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool DatastoreResult::versionIsSet() const
{
    return versionIsSet_;
}

void DatastoreResult::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


