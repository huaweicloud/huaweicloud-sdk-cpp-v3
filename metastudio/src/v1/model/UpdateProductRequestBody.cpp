

#include "huaweicloud/metastudio/v1/model/UpdateProductRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateProductRequestBody::UpdateProductRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    tagsIsSet_ = false;
    coverIsSet_ = false;
    textListIsSet_ = false;
    assetListIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
}

UpdateProductRequestBody::~UpdateProductRequestBody() = default;

void UpdateProductRequestBody::validate()
{
}

web::json::value UpdateProductRequestBody::toJson() const
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
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }

    return val;
}
bool UpdateProductRequestBody::fromJson(const web::json::value& val)
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


std::string UpdateProductRequestBody::getName() const
{
    return name_;
}

void UpdateProductRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateProductRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateProductRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateProductRequestBody::getDescription() const
{
    return description_;
}

void UpdateProductRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateProductRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateProductRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& UpdateProductRequestBody::getTags()
{
    return tags_;
}

void UpdateProductRequestBody::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool UpdateProductRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void UpdateProductRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

ProductCoverInfo UpdateProductRequestBody::getCover() const
{
    return cover_;
}

void UpdateProductRequestBody::setCover(const ProductCoverInfo& value)
{
    cover_ = value;
    coverIsSet_ = true;
}

bool UpdateProductRequestBody::coverIsSet() const
{
    return coverIsSet_;
}

void UpdateProductRequestBody::unsetcover()
{
    coverIsSet_ = false;
}

std::vector<ProductTextInfo>& UpdateProductRequestBody::getTextList()
{
    return textList_;
}

void UpdateProductRequestBody::setTextList(const std::vector<ProductTextInfo>& value)
{
    textList_ = value;
    textListIsSet_ = true;
}

bool UpdateProductRequestBody::textListIsSet() const
{
    return textListIsSet_;
}

void UpdateProductRequestBody::unsettextList()
{
    textListIsSet_ = false;
}

std::vector<ProductMediaInfo>& UpdateProductRequestBody::getAssetList()
{
    return assetList_;
}

void UpdateProductRequestBody::setAssetList(const std::vector<ProductMediaInfo>& value)
{
    assetList_ = value;
    assetListIsSet_ = true;
}

bool UpdateProductRequestBody::assetListIsSet() const
{
    return assetListIsSet_;
}

void UpdateProductRequestBody::unsetassetList()
{
    assetListIsSet_ = false;
}

std::string UpdateProductRequestBody::getState() const
{
    return state_;
}

void UpdateProductRequestBody::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool UpdateProductRequestBody::stateIsSet() const
{
    return stateIsSet_;
}

void UpdateProductRequestBody::unsetstate()
{
    stateIsSet_ = false;
}

}
}
}
}
}


