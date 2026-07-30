

#include "huaweicloud/modelarts/v1/model/AssetModelResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AssetModelResp::AssetModelResp()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    location_ = "";
    locationIsSet_ = false;
    desc_ = "";
    descIsSet_ = false;
    series_ = "";
    seriesIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

AssetModelResp::~AssetModelResp() = default;

void AssetModelResp::validate()
{
}

web::json::value AssetModelResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }
    if(descIsSet_) {
        val[utility::conversions::to_string_t("desc")] = ModelBase::toJson(desc_);
    }
    if(seriesIsSet_) {
        val[utility::conversions::to_string_t("series")] = ModelBase::toJson(series_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool AssetModelResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDesc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("series"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("series"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeries(refVal);
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
    return ok;
}


std::string AssetModelResp::getId() const
{
    return id_;
}

void AssetModelResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AssetModelResp::idIsSet() const
{
    return idIsSet_;
}

void AssetModelResp::unsetid()
{
    idIsSet_ = false;
}

std::string AssetModelResp::getName() const
{
    return name_;
}

void AssetModelResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AssetModelResp::nameIsSet() const
{
    return nameIsSet_;
}

void AssetModelResp::unsetname()
{
    nameIsSet_ = false;
}

std::string AssetModelResp::getCode() const
{
    return code_;
}

void AssetModelResp::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool AssetModelResp::codeIsSet() const
{
    return codeIsSet_;
}

void AssetModelResp::unsetcode()
{
    codeIsSet_ = false;
}

std::string AssetModelResp::getVersion() const
{
    return version_;
}

void AssetModelResp::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool AssetModelResp::versionIsSet() const
{
    return versionIsSet_;
}

void AssetModelResp::unsetversion()
{
    versionIsSet_ = false;
}

std::string AssetModelResp::getLocation() const
{
    return location_;
}

void AssetModelResp::setLocation(const std::string& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool AssetModelResp::locationIsSet() const
{
    return locationIsSet_;
}

void AssetModelResp::unsetlocation()
{
    locationIsSet_ = false;
}

std::string AssetModelResp::getDesc() const
{
    return desc_;
}

void AssetModelResp::setDesc(const std::string& value)
{
    desc_ = value;
    descIsSet_ = true;
}

bool AssetModelResp::descIsSet() const
{
    return descIsSet_;
}

void AssetModelResp::unsetdesc()
{
    descIsSet_ = false;
}

std::string AssetModelResp::getSeries() const
{
    return series_;
}

void AssetModelResp::setSeries(const std::string& value)
{
    series_ = value;
    seriesIsSet_ = true;
}

bool AssetModelResp::seriesIsSet() const
{
    return seriesIsSet_;
}

void AssetModelResp::unsetseries()
{
    seriesIsSet_ = false;
}

std::string AssetModelResp::getType() const
{
    return type_;
}

void AssetModelResp::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AssetModelResp::typeIsSet() const
{
    return typeIsSet_;
}

void AssetModelResp::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


