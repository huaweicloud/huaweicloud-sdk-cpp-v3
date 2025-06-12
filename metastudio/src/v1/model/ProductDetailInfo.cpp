

#include "huaweicloud/metastudio/v1/model/ProductDetailInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ProductDetailInfo::ProductDetailInfo()
{
    productId_ = "";
    productIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    tagsIsSet_ = false;
    coverIsSet_ = false;
    textListIsSet_ = false;
    assetListIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
}

ProductDetailInfo::~ProductDetailInfo() = default;

void ProductDetailInfo::validate()
{
}

web::json::value ProductDetailInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
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
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }

    return val;
}
bool ProductDetailInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("product_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductId(refVal);
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
            ProductCoverDetailInfo refVal;
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
            std::vector<ProductMediaDetailInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    return ok;
}


std::string ProductDetailInfo::getProductId() const
{
    return productId_;
}

void ProductDetailInfo::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool ProductDetailInfo::productIdIsSet() const
{
    return productIdIsSet_;
}

void ProductDetailInfo::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string ProductDetailInfo::getName() const
{
    return name_;
}

void ProductDetailInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ProductDetailInfo::nameIsSet() const
{
    return nameIsSet_;
}

void ProductDetailInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string ProductDetailInfo::getDescription() const
{
    return description_;
}

void ProductDetailInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ProductDetailInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ProductDetailInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& ProductDetailInfo::getTags()
{
    return tags_;
}

void ProductDetailInfo::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ProductDetailInfo::tagsIsSet() const
{
    return tagsIsSet_;
}

void ProductDetailInfo::unsettags()
{
    tagsIsSet_ = false;
}

ProductCoverDetailInfo ProductDetailInfo::getCover() const
{
    return cover_;
}

void ProductDetailInfo::setCover(const ProductCoverDetailInfo& value)
{
    cover_ = value;
    coverIsSet_ = true;
}

bool ProductDetailInfo::coverIsSet() const
{
    return coverIsSet_;
}

void ProductDetailInfo::unsetcover()
{
    coverIsSet_ = false;
}

std::vector<ProductTextInfo>& ProductDetailInfo::getTextList()
{
    return textList_;
}

void ProductDetailInfo::setTextList(const std::vector<ProductTextInfo>& value)
{
    textList_ = value;
    textListIsSet_ = true;
}

bool ProductDetailInfo::textListIsSet() const
{
    return textListIsSet_;
}

void ProductDetailInfo::unsettextList()
{
    textListIsSet_ = false;
}

std::vector<ProductMediaDetailInfo>& ProductDetailInfo::getAssetList()
{
    return assetList_;
}

void ProductDetailInfo::setAssetList(const std::vector<ProductMediaDetailInfo>& value)
{
    assetList_ = value;
    assetListIsSet_ = true;
}

bool ProductDetailInfo::assetListIsSet() const
{
    return assetListIsSet_;
}

void ProductDetailInfo::unsetassetList()
{
    assetListIsSet_ = false;
}

std::string ProductDetailInfo::getCreateTime() const
{
    return createTime_;
}

void ProductDetailInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ProductDetailInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ProductDetailInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ProductDetailInfo::getUpdateTime() const
{
    return updateTime_;
}

void ProductDetailInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ProductDetailInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ProductDetailInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ProductDetailInfo::getState() const
{
    return state_;
}

void ProductDetailInfo::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ProductDetailInfo::stateIsSet() const
{
    return stateIsSet_;
}

void ProductDetailInfo::unsetstate()
{
    stateIsSet_ = false;
}

}
}
}
}
}


