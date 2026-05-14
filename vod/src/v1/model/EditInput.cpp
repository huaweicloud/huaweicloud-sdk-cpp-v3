

#include "huaweicloud/vod/v1/model/EditInput.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




EditInput::EditInput()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    timelineStart_ = "";
    timelineStartIsSet_ = false;
    timelineEnd_ = "";
    timelineEndIsSet_ = false;
}

EditInput::~EditInput() = default;

void EditInput::validate()
{
}

web::json::value EditInput::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(timelineStartIsSet_) {
        val[utility::conversions::to_string_t("timeline_start")] = ModelBase::toJson(timelineStart_);
    }
    if(timelineEndIsSet_) {
        val[utility::conversions::to_string_t("timeline_end")] = ModelBase::toJson(timelineEnd_);
    }

    return val;
}
bool EditInput::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("timeline_start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeline_start"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimelineStart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeline_end"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeline_end"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimelineEnd(refVal);
        }
    }
    return ok;
}


std::string EditInput::getAssetId() const
{
    return assetId_;
}

void EditInput::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool EditInput::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void EditInput::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string EditInput::getTimelineStart() const
{
    return timelineStart_;
}

void EditInput::setTimelineStart(const std::string& value)
{
    timelineStart_ = value;
    timelineStartIsSet_ = true;
}

bool EditInput::timelineStartIsSet() const
{
    return timelineStartIsSet_;
}

void EditInput::unsettimelineStart()
{
    timelineStartIsSet_ = false;
}

std::string EditInput::getTimelineEnd() const
{
    return timelineEnd_;
}

void EditInput::setTimelineEnd(const std::string& value)
{
    timelineEnd_ = value;
    timelineEndIsSet_ = true;
}

bool EditInput::timelineEndIsSet() const
{
    return timelineEndIsSet_;
}

void EditInput::unsettimelineEnd()
{
    timelineEndIsSet_ = false;
}

}
}
}
}
}


