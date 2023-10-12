

#include "huaweicloud/vod/v1/model/UpdateAssetMetaReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UpdateAssetMetaReq::UpdateAssetMetaReq()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    categoryId_ = 0;
    categoryIdIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
}

UpdateAssetMetaReq::~UpdateAssetMetaReq() = default;

void UpdateAssetMetaReq::validate()
{
}

web::json::value UpdateAssetMetaReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(categoryIdIsSet_) {
        val[utility::conversions::to_string_t("category_id")] = ModelBase::toJson(categoryId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool UpdateAssetMetaReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("category_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string UpdateAssetMetaReq::getAssetId() const
{
    return assetId_;
}

void UpdateAssetMetaReq::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool UpdateAssetMetaReq::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void UpdateAssetMetaReq::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string UpdateAssetMetaReq::getTitle() const
{
    return title_;
}

void UpdateAssetMetaReq::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool UpdateAssetMetaReq::titleIsSet() const
{
    return titleIsSet_;
}

void UpdateAssetMetaReq::unsettitle()
{
    titleIsSet_ = false;
}

std::string UpdateAssetMetaReq::getDescription() const
{
    return description_;
}

void UpdateAssetMetaReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateAssetMetaReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateAssetMetaReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t UpdateAssetMetaReq::getCategoryId() const
{
    return categoryId_;
}

void UpdateAssetMetaReq::setCategoryId(int32_t value)
{
    categoryId_ = value;
    categoryIdIsSet_ = true;
}

bool UpdateAssetMetaReq::categoryIdIsSet() const
{
    return categoryIdIsSet_;
}

void UpdateAssetMetaReq::unsetcategoryId()
{
    categoryIdIsSet_ = false;
}

std::string UpdateAssetMetaReq::getTags() const
{
    return tags_;
}

void UpdateAssetMetaReq::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool UpdateAssetMetaReq::tagsIsSet() const
{
    return tagsIsSet_;
}

void UpdateAssetMetaReq::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


