

#include "huaweicloud/modelarts/v1/model/AssetModel.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AssetModel::AssetModel()
{
    name_ = "";
    nameIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    desc_ = "";
    descIsSet_ = false;
    series_ = "";
    seriesIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    modelDesc_ = "";
    modelDescIsSet_ = false;
    parentAssetId_ = "";
    parentAssetIdIsSet_ = false;
}

AssetModel::~AssetModel() = default;

void AssetModel::validate()
{
}

web::json::value AssetModel::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
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
    if(modelDescIsSet_) {
        val[utility::conversions::to_string_t("model_desc")] = ModelBase::toJson(modelDesc_);
    }
    if(parentAssetIdIsSet_) {
        val[utility::conversions::to_string_t("parent_asset_id")] = ModelBase::toJson(parentAssetId_);
    }

    return val;
}
bool AssetModel::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("model_desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelDesc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentAssetId(refVal);
        }
    }
    return ok;
}


std::string AssetModel::getName() const
{
    return name_;
}

void AssetModel::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AssetModel::nameIsSet() const
{
    return nameIsSet_;
}

void AssetModel::unsetname()
{
    nameIsSet_ = false;
}

std::string AssetModel::getCode() const
{
    return code_;
}

void AssetModel::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool AssetModel::codeIsSet() const
{
    return codeIsSet_;
}

void AssetModel::unsetcode()
{
    codeIsSet_ = false;
}

std::string AssetModel::getVersion() const
{
    return version_;
}

void AssetModel::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool AssetModel::versionIsSet() const
{
    return versionIsSet_;
}

void AssetModel::unsetversion()
{
    versionIsSet_ = false;
}

std::string AssetModel::getDesc() const
{
    return desc_;
}

void AssetModel::setDesc(const std::string& value)
{
    desc_ = value;
    descIsSet_ = true;
}

bool AssetModel::descIsSet() const
{
    return descIsSet_;
}

void AssetModel::unsetdesc()
{
    descIsSet_ = false;
}

std::string AssetModel::getSeries() const
{
    return series_;
}

void AssetModel::setSeries(const std::string& value)
{
    series_ = value;
    seriesIsSet_ = true;
}

bool AssetModel::seriesIsSet() const
{
    return seriesIsSet_;
}

void AssetModel::unsetseries()
{
    seriesIsSet_ = false;
}

std::string AssetModel::getType() const
{
    return type_;
}

void AssetModel::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AssetModel::typeIsSet() const
{
    return typeIsSet_;
}

void AssetModel::unsettype()
{
    typeIsSet_ = false;
}

std::string AssetModel::getModelDesc() const
{
    return modelDesc_;
}

void AssetModel::setModelDesc(const std::string& value)
{
    modelDesc_ = value;
    modelDescIsSet_ = true;
}

bool AssetModel::modelDescIsSet() const
{
    return modelDescIsSet_;
}

void AssetModel::unsetmodelDesc()
{
    modelDescIsSet_ = false;
}

std::string AssetModel::getParentAssetId() const
{
    return parentAssetId_;
}

void AssetModel::setParentAssetId(const std::string& value)
{
    parentAssetId_ = value;
    parentAssetIdIsSet_ = true;
}

bool AssetModel::parentAssetIdIsSet() const
{
    return parentAssetIdIsSet_;
}

void AssetModel::unsetparentAssetId()
{
    parentAssetIdIsSet_ = false;
}

}
}
}
}
}


