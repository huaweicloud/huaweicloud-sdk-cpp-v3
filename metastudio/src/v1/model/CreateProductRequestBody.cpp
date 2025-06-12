

#include "huaweicloud/metastudio/v1/model/CreateProductRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateProductRequestBody::CreateProductRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    tagsIsSet_ = false;
    coverIsSet_ = false;
    textListIsSet_ = false;
    assetListIsSet_ = false;
    autoActive_ = false;
    autoActiveIsSet_ = false;
}

CreateProductRequestBody::~CreateProductRequestBody() = default;

void CreateProductRequestBody::validate()
{
}

web::json::value CreateProductRequestBody::toJson() const
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
    if(autoActiveIsSet_) {
        val[utility::conversions::to_string_t("auto_active")] = ModelBase::toJson(autoActive_);
    }

    return val;
}
bool CreateProductRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("auto_active"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_active"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoActive(refVal);
        }
    }
    return ok;
}


std::string CreateProductRequestBody::getName() const
{
    return name_;
}

void CreateProductRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateProductRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateProductRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateProductRequestBody::getDescription() const
{
    return description_;
}

void CreateProductRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateProductRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateProductRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& CreateProductRequestBody::getTags()
{
    return tags_;
}

void CreateProductRequestBody::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateProductRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateProductRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

ProductCoverInfo CreateProductRequestBody::getCover() const
{
    return cover_;
}

void CreateProductRequestBody::setCover(const ProductCoverInfo& value)
{
    cover_ = value;
    coverIsSet_ = true;
}

bool CreateProductRequestBody::coverIsSet() const
{
    return coverIsSet_;
}

void CreateProductRequestBody::unsetcover()
{
    coverIsSet_ = false;
}

std::vector<ProductTextInfo>& CreateProductRequestBody::getTextList()
{
    return textList_;
}

void CreateProductRequestBody::setTextList(const std::vector<ProductTextInfo>& value)
{
    textList_ = value;
    textListIsSet_ = true;
}

bool CreateProductRequestBody::textListIsSet() const
{
    return textListIsSet_;
}

void CreateProductRequestBody::unsettextList()
{
    textListIsSet_ = false;
}

std::vector<ProductMediaInfo>& CreateProductRequestBody::getAssetList()
{
    return assetList_;
}

void CreateProductRequestBody::setAssetList(const std::vector<ProductMediaInfo>& value)
{
    assetList_ = value;
    assetListIsSet_ = true;
}

bool CreateProductRequestBody::assetListIsSet() const
{
    return assetListIsSet_;
}

void CreateProductRequestBody::unsetassetList()
{
    assetListIsSet_ = false;
}

bool CreateProductRequestBody::isAutoActive() const
{
    return autoActive_;
}

void CreateProductRequestBody::setAutoActive(bool value)
{
    autoActive_ = value;
    autoActiveIsSet_ = true;
}

bool CreateProductRequestBody::autoActiveIsSet() const
{
    return autoActiveIsSet_;
}

void CreateProductRequestBody::unsetautoActive()
{
    autoActiveIsSet_ = false;
}

}
}
}
}
}


