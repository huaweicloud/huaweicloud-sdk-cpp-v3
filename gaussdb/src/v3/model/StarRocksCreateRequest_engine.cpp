

#include "huaweicloud/gaussdb/v3/model/StarRocksCreateRequest_engine.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




StarRocksCreateRequest_engine::StarRocksCreateRequest_engine()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

StarRocksCreateRequest_engine::~StarRocksCreateRequest_engine() = default;

void StarRocksCreateRequest_engine::validate()
{
}

web::json::value StarRocksCreateRequest_engine::toJson() const
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
bool StarRocksCreateRequest_engine::fromJson(const web::json::value& val)
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


std::string StarRocksCreateRequest_engine::getType() const
{
    return type_;
}

void StarRocksCreateRequest_engine::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool StarRocksCreateRequest_engine::typeIsSet() const
{
    return typeIsSet_;
}

void StarRocksCreateRequest_engine::unsettype()
{
    typeIsSet_ = false;
}

std::string StarRocksCreateRequest_engine::getVersion() const
{
    return version_;
}

void StarRocksCreateRequest_engine::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool StarRocksCreateRequest_engine::versionIsSet() const
{
    return versionIsSet_;
}

void StarRocksCreateRequest_engine::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


