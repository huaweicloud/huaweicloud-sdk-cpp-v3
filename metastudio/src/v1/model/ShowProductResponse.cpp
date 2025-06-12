

#include "huaweicloud/metastudio/v1/model/ShowProductResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowProductResponse::ShowProductResponse()
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
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowProductResponse::~ShowProductResponse() = default;

void ShowProductResponse::validate()
{
}

web::json::value ShowProductResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowProductResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ShowProductResponse::getProductId() const
{
    return productId_;
}

void ShowProductResponse::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool ShowProductResponse::productIdIsSet() const
{
    return productIdIsSet_;
}

void ShowProductResponse::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string ShowProductResponse::getName() const
{
    return name_;
}

void ShowProductResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowProductResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowProductResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowProductResponse::getDescription() const
{
    return description_;
}

void ShowProductResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowProductResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowProductResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& ShowProductResponse::getTags()
{
    return tags_;
}

void ShowProductResponse::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowProductResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowProductResponse::unsettags()
{
    tagsIsSet_ = false;
}

ProductCoverDetailInfo ShowProductResponse::getCover() const
{
    return cover_;
}

void ShowProductResponse::setCover(const ProductCoverDetailInfo& value)
{
    cover_ = value;
    coverIsSet_ = true;
}

bool ShowProductResponse::coverIsSet() const
{
    return coverIsSet_;
}

void ShowProductResponse::unsetcover()
{
    coverIsSet_ = false;
}

std::vector<ProductTextInfo>& ShowProductResponse::getTextList()
{
    return textList_;
}

void ShowProductResponse::setTextList(const std::vector<ProductTextInfo>& value)
{
    textList_ = value;
    textListIsSet_ = true;
}

bool ShowProductResponse::textListIsSet() const
{
    return textListIsSet_;
}

void ShowProductResponse::unsettextList()
{
    textListIsSet_ = false;
}

std::vector<ProductMediaDetailInfo>& ShowProductResponse::getAssetList()
{
    return assetList_;
}

void ShowProductResponse::setAssetList(const std::vector<ProductMediaDetailInfo>& value)
{
    assetList_ = value;
    assetListIsSet_ = true;
}

bool ShowProductResponse::assetListIsSet() const
{
    return assetListIsSet_;
}

void ShowProductResponse::unsetassetList()
{
    assetListIsSet_ = false;
}

std::string ShowProductResponse::getCreateTime() const
{
    return createTime_;
}

void ShowProductResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowProductResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowProductResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowProductResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowProductResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowProductResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowProductResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowProductResponse::getState() const
{
    return state_;
}

void ShowProductResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ShowProductResponse::stateIsSet() const
{
    return stateIsSet_;
}

void ShowProductResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string ShowProductResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowProductResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowProductResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowProductResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


