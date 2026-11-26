

#include "huaweicloud/modelarts/v1/model/OperatorArgument.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




OperatorArgument::OperatorArgument()
{
    key_ = "";
    keyIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    typeIsSet_ = false;
    tips_ = "";
    tipsIsSet_ = false;
    min_ = 0.0f;
    minIsSet_ = false;
    max_ = 0.0f;
    maxIsSet_ = false;
    between_ = false;
    betweenIsSet_ = false;
    itemsIsSet_ = false;
    defaultValue_ = "";
    defaultValueIsSet_ = false;
    required_ = false;
    requiredIsSet_ = false;
    visible_ = false;
    visibleIsSet_ = false;
    argDisplayType_ = "";
    argDisplayTypeIsSet_ = false;
    taskCategoryIsSet_ = false;
    datasetCatalogIsSet_ = false;
    assetTypes_ = "";
    assetTypesIsSet_ = false;
    assetCodes_ = "";
    assetCodesIsSet_ = false;
    subAssetType_ = "";
    subAssetTypeIsSet_ = false;
    dependArgsIsSet_ = false;
}

OperatorArgument::~OperatorArgument() = default;

void OperatorArgument::validate()
{
}

web::json::value OperatorArgument::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(tipsIsSet_) {
        val[utility::conversions::to_string_t("tips")] = ModelBase::toJson(tips_);
    }
    if(minIsSet_) {
        val[utility::conversions::to_string_t("min")] = ModelBase::toJson(min_);
    }
    if(maxIsSet_) {
        val[utility::conversions::to_string_t("max")] = ModelBase::toJson(max_);
    }
    if(betweenIsSet_) {
        val[utility::conversions::to_string_t("between")] = ModelBase::toJson(between_);
    }
    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(items_);
    }
    if(defaultValueIsSet_) {
        val[utility::conversions::to_string_t("default_value")] = ModelBase::toJson(defaultValue_);
    }
    if(requiredIsSet_) {
        val[utility::conversions::to_string_t("required")] = ModelBase::toJson(required_);
    }
    if(visibleIsSet_) {
        val[utility::conversions::to_string_t("visible")] = ModelBase::toJson(visible_);
    }
    if(argDisplayTypeIsSet_) {
        val[utility::conversions::to_string_t("arg_display_type")] = ModelBase::toJson(argDisplayType_);
    }
    if(taskCategoryIsSet_) {
        val[utility::conversions::to_string_t("task_category")] = ModelBase::toJson(taskCategory_);
    }
    if(datasetCatalogIsSet_) {
        val[utility::conversions::to_string_t("dataset_catalog")] = ModelBase::toJson(datasetCatalog_);
    }
    if(assetTypesIsSet_) {
        val[utility::conversions::to_string_t("asset_types")] = ModelBase::toJson(assetTypes_);
    }
    if(assetCodesIsSet_) {
        val[utility::conversions::to_string_t("asset_codes")] = ModelBase::toJson(assetCodes_);
    }
    if(subAssetTypeIsSet_) {
        val[utility::conversions::to_string_t("sub_asset_type")] = ModelBase::toJson(subAssetType_);
    }
    if(dependArgsIsSet_) {
        val[utility::conversions::to_string_t("depend_args")] = ModelBase::toJson(dependArgs_);
    }

    return val;
}
bool OperatorArgument::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            OperatorArgTypeEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tips"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTips(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("between"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("between"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBetween(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<OperatorArgItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("required"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("required"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequired(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("visible"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visible"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVisible(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("arg_display_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("arg_display_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArgDisplayType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_category"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dataset_catalog"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataset_catalog"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatasetCatalog(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_types"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_codes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_codes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetCodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_asset_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_asset_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubAssetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("depend_args"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("depend_args"));
        if(!fieldValue.is_null())
        {
            std::vector<DependArg> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDependArgs(refVal);
        }
    }
    return ok;
}


std::string OperatorArgument::getKey() const
{
    return key_;
}

void OperatorArgument::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool OperatorArgument::keyIsSet() const
{
    return keyIsSet_;
}

void OperatorArgument::unsetkey()
{
    keyIsSet_ = false;
}

std::string OperatorArgument::getName() const
{
    return name_;
}

void OperatorArgument::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool OperatorArgument::nameIsSet() const
{
    return nameIsSet_;
}

void OperatorArgument::unsetname()
{
    nameIsSet_ = false;
}

OperatorArgTypeEnum OperatorArgument::getType() const
{
    return type_;
}

void OperatorArgument::setType(const OperatorArgTypeEnum& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool OperatorArgument::typeIsSet() const
{
    return typeIsSet_;
}

void OperatorArgument::unsettype()
{
    typeIsSet_ = false;
}

std::string OperatorArgument::getTips() const
{
    return tips_;
}

void OperatorArgument::setTips(const std::string& value)
{
    tips_ = value;
    tipsIsSet_ = true;
}

bool OperatorArgument::tipsIsSet() const
{
    return tipsIsSet_;
}

void OperatorArgument::unsettips()
{
    tipsIsSet_ = false;
}

float OperatorArgument::getMin() const
{
    return min_;
}

void OperatorArgument::setMin(float value)
{
    min_ = value;
    minIsSet_ = true;
}

bool OperatorArgument::minIsSet() const
{
    return minIsSet_;
}

void OperatorArgument::unsetmin()
{
    minIsSet_ = false;
}

float OperatorArgument::getMax() const
{
    return max_;
}

void OperatorArgument::setMax(float value)
{
    max_ = value;
    maxIsSet_ = true;
}

bool OperatorArgument::maxIsSet() const
{
    return maxIsSet_;
}

void OperatorArgument::unsetmax()
{
    maxIsSet_ = false;
}

bool OperatorArgument::isBetween() const
{
    return between_;
}

void OperatorArgument::setBetween(bool value)
{
    between_ = value;
    betweenIsSet_ = true;
}

bool OperatorArgument::betweenIsSet() const
{
    return betweenIsSet_;
}

void OperatorArgument::unsetbetween()
{
    betweenIsSet_ = false;
}

std::vector<OperatorArgItem>& OperatorArgument::getItems()
{
    return items_;
}

void OperatorArgument::setItems(const std::vector<OperatorArgItem>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool OperatorArgument::itemsIsSet() const
{
    return itemsIsSet_;
}

void OperatorArgument::unsetitems()
{
    itemsIsSet_ = false;
}

std::string OperatorArgument::getDefaultValue() const
{
    return defaultValue_;
}

void OperatorArgument::setDefaultValue(const std::string& value)
{
    defaultValue_ = value;
    defaultValueIsSet_ = true;
}

bool OperatorArgument::defaultValueIsSet() const
{
    return defaultValueIsSet_;
}

void OperatorArgument::unsetdefaultValue()
{
    defaultValueIsSet_ = false;
}

bool OperatorArgument::isRequired() const
{
    return required_;
}

void OperatorArgument::setRequired(bool value)
{
    required_ = value;
    requiredIsSet_ = true;
}

bool OperatorArgument::requiredIsSet() const
{
    return requiredIsSet_;
}

void OperatorArgument::unsetrequired()
{
    requiredIsSet_ = false;
}

bool OperatorArgument::isVisible() const
{
    return visible_;
}

void OperatorArgument::setVisible(bool value)
{
    visible_ = value;
    visibleIsSet_ = true;
}

bool OperatorArgument::visibleIsSet() const
{
    return visibleIsSet_;
}

void OperatorArgument::unsetvisible()
{
    visibleIsSet_ = false;
}

std::string OperatorArgument::getArgDisplayType() const
{
    return argDisplayType_;
}

void OperatorArgument::setArgDisplayType(const std::string& value)
{
    argDisplayType_ = value;
    argDisplayTypeIsSet_ = true;
}

bool OperatorArgument::argDisplayTypeIsSet() const
{
    return argDisplayTypeIsSet_;
}

void OperatorArgument::unsetargDisplayType()
{
    argDisplayTypeIsSet_ = false;
}

std::vector<std::string>& OperatorArgument::getTaskCategory()
{
    return taskCategory_;
}

void OperatorArgument::setTaskCategory(const std::vector<std::string>& value)
{
    taskCategory_ = value;
    taskCategoryIsSet_ = true;
}

bool OperatorArgument::taskCategoryIsSet() const
{
    return taskCategoryIsSet_;
}

void OperatorArgument::unsettaskCategory()
{
    taskCategoryIsSet_ = false;
}

std::vector<std::string>& OperatorArgument::getDatasetCatalog()
{
    return datasetCatalog_;
}

void OperatorArgument::setDatasetCatalog(const std::vector<std::string>& value)
{
    datasetCatalog_ = value;
    datasetCatalogIsSet_ = true;
}

bool OperatorArgument::datasetCatalogIsSet() const
{
    return datasetCatalogIsSet_;
}

void OperatorArgument::unsetdatasetCatalog()
{
    datasetCatalogIsSet_ = false;
}

std::string OperatorArgument::getAssetTypes() const
{
    return assetTypes_;
}

void OperatorArgument::setAssetTypes(const std::string& value)
{
    assetTypes_ = value;
    assetTypesIsSet_ = true;
}

bool OperatorArgument::assetTypesIsSet() const
{
    return assetTypesIsSet_;
}

void OperatorArgument::unsetassetTypes()
{
    assetTypesIsSet_ = false;
}

std::string OperatorArgument::getAssetCodes() const
{
    return assetCodes_;
}

void OperatorArgument::setAssetCodes(const std::string& value)
{
    assetCodes_ = value;
    assetCodesIsSet_ = true;
}

bool OperatorArgument::assetCodesIsSet() const
{
    return assetCodesIsSet_;
}

void OperatorArgument::unsetassetCodes()
{
    assetCodesIsSet_ = false;
}

std::string OperatorArgument::getSubAssetType() const
{
    return subAssetType_;
}

void OperatorArgument::setSubAssetType(const std::string& value)
{
    subAssetType_ = value;
    subAssetTypeIsSet_ = true;
}

bool OperatorArgument::subAssetTypeIsSet() const
{
    return subAssetTypeIsSet_;
}

void OperatorArgument::unsetsubAssetType()
{
    subAssetTypeIsSet_ = false;
}

std::vector<DependArg>& OperatorArgument::getDependArgs()
{
    return dependArgs_;
}

void OperatorArgument::setDependArgs(const std::vector<DependArg>& value)
{
    dependArgs_ = value;
    dependArgsIsSet_ = true;
}

bool OperatorArgument::dependArgsIsSet() const
{
    return dependArgsIsSet_;
}

void OperatorArgument::unsetdependArgs()
{
    dependArgsIsSet_ = false;
}

}
}
}
}
}


