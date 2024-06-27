

#include "huaweicloud/gaussdb/v3/model/ClickHouseEngineInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ClickHouseEngineInfo::ClickHouseEngineInfo()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

ClickHouseEngineInfo::~ClickHouseEngineInfo() = default;

void ClickHouseEngineInfo::validate()
{
}

web::json::value ClickHouseEngineInfo::toJson() const
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
bool ClickHouseEngineInfo::fromJson(const web::json::value& val)
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


std::string ClickHouseEngineInfo::getType() const
{
    return type_;
}

void ClickHouseEngineInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ClickHouseEngineInfo::typeIsSet() const
{
    return typeIsSet_;
}

void ClickHouseEngineInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string ClickHouseEngineInfo::getVersion() const
{
    return version_;
}

void ClickHouseEngineInfo::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ClickHouseEngineInfo::versionIsSet() const
{
    return versionIsSet_;
}

void ClickHouseEngineInfo::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


