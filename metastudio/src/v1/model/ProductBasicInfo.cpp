

#include "huaweicloud/metastudio/v1/model/ProductBasicInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ProductBasicInfo::ProductBasicInfo()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    tagsIsSet_ = false;
    coverIsSet_ = false;
    textListIsSet_ = false;
    assetListIsSet_ = false;
}

ProductBasicInfo::~ProductBasicInfo() = default;

void ProductBasicInfo::validate()
{
}

web::json::value ProductBasicInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(coverIsSet_) {
        val[utility::conversions::to_string_t("cover")] = ModelBase::toJson(cover_);
    }
    if(textListIsSet_) {
        val[utility::conversions::to_string_t("text_list")] = ModelBase::toJson(textList_);
    }
    if(assetListIsSet_) {
        val[utility::conversions::to_string_t("asset_list")] = ModelBase::toJson(assetList_);
    }

    return val;
}
bool ProductBasicInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cover"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cover"));
        if(!fieldValue.is_null())
        {
            ProductCoverInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCover(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ProductTextInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ProductMediaInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetList(refVal);
        }
    }
    return ok;
}


std::string ProductBasicInfo::getName() const
{
    return name_;
}

void ProductBasicInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ProductBasicInfo::nameIsSet() const
{
    return nameIsSet_;
}

void ProductBasicInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string ProductBasicInfo::getDescription() const
{
    return description_;
}

void ProductBasicInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ProductBasicInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ProductBasicInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& ProductBasicInfo::getTags()
{
    return tags_;
}

void ProductBasicInfo::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ProductBasicInfo::tagsIsSet() const
{
    return tagsIsSet_;
}

void ProductBasicInfo::unsettags()
{
    tagsIsSet_ = false;
}

ProductCoverInfo ProductBasicInfo::getCover() const
{
    return cover_;
}

void ProductBasicInfo::setCover(const ProductCoverInfo& value)
{
    cover_ = value;
    coverIsSet_ = true;
}

bool ProductBasicInfo::coverIsSet() const
{
    return coverIsSet_;
}

void ProductBasicInfo::unsetcover()
{
    coverIsSet_ = false;
}

std::vector<ProductTextInfo>& ProductBasicInfo::getTextList()
{
    return textList_;
}

void ProductBasicInfo::setTextList(const std::vector<ProductTextInfo>& value)
{
    textList_ = value;
    textListIsSet_ = true;
}

bool ProductBasicInfo::textListIsSet() const
{
    return textListIsSet_;
}

void ProductBasicInfo::unsettextList()
{
    textListIsSet_ = false;
}

std::vector<ProductMediaInfo>& ProductBasicInfo::getAssetList()
{
    return assetList_;
}

void ProductBasicInfo::setAssetList(const std::vector<ProductMediaInfo>& value)
{
    assetList_ = value;
    assetListIsSet_ = true;
}

bool ProductBasicInfo::assetListIsSet() const
{
    return assetListIsSet_;
}

void ProductBasicInfo::unsetassetList()
{
    assetListIsSet_ = false;
}

}
}
}
}
}


