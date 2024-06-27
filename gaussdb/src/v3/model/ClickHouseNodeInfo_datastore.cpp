

#include "huaweicloud/gaussdb/v3/model/ClickHouseNodeInfo_datastore.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ClickHouseNodeInfo_datastore::ClickHouseNodeInfo_datastore()
{
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

ClickHouseNodeInfo_datastore::~ClickHouseNodeInfo_datastore() = default;

void ClickHouseNodeInfo_datastore::validate()
{
}

web::json::value ClickHouseNodeInfo_datastore::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool ClickHouseNodeInfo_datastore::fromJson(const web::json::value& val)
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


std::string ClickHouseNodeInfo_datastore::getId() const
{
    return id_;
}

void ClickHouseNodeInfo_datastore::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ClickHouseNodeInfo_datastore::idIsSet() const
{
    return idIsSet_;
}

void ClickHouseNodeInfo_datastore::unsetid()
{
    idIsSet_ = false;
}

std::string ClickHouseNodeInfo_datastore::getType() const
{
    return type_;
}

void ClickHouseNodeInfo_datastore::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ClickHouseNodeInfo_datastore::typeIsSet() const
{
    return typeIsSet_;
}

void ClickHouseNodeInfo_datastore::unsettype()
{
    typeIsSet_ = false;
}

std::string ClickHouseNodeInfo_datastore::getVersion() const
{
    return version_;
}

void ClickHouseNodeInfo_datastore::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ClickHouseNodeInfo_datastore::versionIsSet() const
{
    return versionIsSet_;
}

void ClickHouseNodeInfo_datastore::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


