

#include "huaweicloud/vod/v1/model/TopUrl.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




TopUrl::TopUrl()
{
    value_ = 0L;
    valueIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    duration_ = 0;
    durationIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
}

TopUrl::~TopUrl() = default;

void TopUrl::validate()
{
}

web::json::value TopUrl::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}

bool TopUrl::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}

int64_t TopUrl::getValue() const
{
    return value_;
}

void TopUrl::setValue(int64_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TopUrl::valueIsSet() const
{
    return valueIsSet_;
}

void TopUrl::unsetvalue()
{
    valueIsSet_ = false;
}

std::string TopUrl::getAssetId() const
{
    return assetId_;
}

void TopUrl::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool TopUrl::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void TopUrl::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string TopUrl::getTitle() const
{
    return title_;
}

void TopUrl::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool TopUrl::titleIsSet() const
{
    return titleIsSet_;
}

void TopUrl::unsettitle()
{
    titleIsSet_ = false;
}

int32_t TopUrl::getDuration() const
{
    return duration_;
}

void TopUrl::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool TopUrl::durationIsSet() const
{
    return durationIsSet_;
}

void TopUrl::unsetduration()
{
    durationIsSet_ = false;
}

int64_t TopUrl::getSize() const
{
    return size_;
}

void TopUrl::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool TopUrl::sizeIsSet() const
{
    return sizeIsSet_;
}

void TopUrl::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


