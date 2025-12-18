

#include "huaweicloud/meeting/v1/model/ShowRoomSettingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowRoomSettingResponse::ShowRoomSettingResponse()
{
    roomIntroduce_ = "";
    roomIntroduceIsSet_ = false;
    cropLogoId_ = "";
    cropLogoIdIsSet_ = false;
    coverPictureId_ = "";
    coverPictureIdIsSet_ = false;
    showAudienceMode_ = "";
    showAudienceModeIsSet_ = false;
    isRedoubleOpen_ = "";
    isRedoubleOpenIsSet_ = false;
    baseAudienceCount_ = 0;
    baseAudienceCountIsSet_ = false;
    multiple_ = 0.0;
    multipleIsSet_ = false;
}

ShowRoomSettingResponse::~ShowRoomSettingResponse() = default;

void ShowRoomSettingResponse::validate()
{
}

web::json::value ShowRoomSettingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roomIntroduceIsSet_) {
        val[utility::conversions::to_string_t("roomIntroduce")] = ModelBase::toJson(roomIntroduce_);
    }
    if(cropLogoIdIsSet_) {
        val[utility::conversions::to_string_t("cropLogoId")] = ModelBase::toJson(cropLogoId_);
    }
    if(coverPictureIdIsSet_) {
        val[utility::conversions::to_string_t("coverPictureId")] = ModelBase::toJson(coverPictureId_);
    }
    if(showAudienceModeIsSet_) {
        val[utility::conversions::to_string_t("showAudienceMode")] = ModelBase::toJson(showAudienceMode_);
    }
    if(isRedoubleOpenIsSet_) {
        val[utility::conversions::to_string_t("isRedoubleOpen")] = ModelBase::toJson(isRedoubleOpen_);
    }
    if(baseAudienceCountIsSet_) {
        val[utility::conversions::to_string_t("baseAudienceCount")] = ModelBase::toJson(baseAudienceCount_);
    }
    if(multipleIsSet_) {
        val[utility::conversions::to_string_t("multiple")] = ModelBase::toJson(multiple_);
    }

    return val;
}
bool ShowRoomSettingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("roomIntroduce"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("roomIntroduce"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomIntroduce(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cropLogoId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cropLogoId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCropLogoId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("coverPictureId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("coverPictureId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoverPictureId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("showAudienceMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("showAudienceMode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShowAudienceMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isRedoubleOpen"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isRedoubleOpen"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRedoubleOpen(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("baseAudienceCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("baseAudienceCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBaseAudienceCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("multiple"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multiple"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMultiple(refVal);
        }
    }
    return ok;
}


std::string ShowRoomSettingResponse::getRoomIntroduce() const
{
    return roomIntroduce_;
}

void ShowRoomSettingResponse::setRoomIntroduce(const std::string& value)
{
    roomIntroduce_ = value;
    roomIntroduceIsSet_ = true;
}

bool ShowRoomSettingResponse::roomIntroduceIsSet() const
{
    return roomIntroduceIsSet_;
}

void ShowRoomSettingResponse::unsetroomIntroduce()
{
    roomIntroduceIsSet_ = false;
}

std::string ShowRoomSettingResponse::getCropLogoId() const
{
    return cropLogoId_;
}

void ShowRoomSettingResponse::setCropLogoId(const std::string& value)
{
    cropLogoId_ = value;
    cropLogoIdIsSet_ = true;
}

bool ShowRoomSettingResponse::cropLogoIdIsSet() const
{
    return cropLogoIdIsSet_;
}

void ShowRoomSettingResponse::unsetcropLogoId()
{
    cropLogoIdIsSet_ = false;
}

std::string ShowRoomSettingResponse::getCoverPictureId() const
{
    return coverPictureId_;
}

void ShowRoomSettingResponse::setCoverPictureId(const std::string& value)
{
    coverPictureId_ = value;
    coverPictureIdIsSet_ = true;
}

bool ShowRoomSettingResponse::coverPictureIdIsSet() const
{
    return coverPictureIdIsSet_;
}

void ShowRoomSettingResponse::unsetcoverPictureId()
{
    coverPictureIdIsSet_ = false;
}

std::string ShowRoomSettingResponse::getShowAudienceMode() const
{
    return showAudienceMode_;
}

void ShowRoomSettingResponse::setShowAudienceMode(const std::string& value)
{
    showAudienceMode_ = value;
    showAudienceModeIsSet_ = true;
}

bool ShowRoomSettingResponse::showAudienceModeIsSet() const
{
    return showAudienceModeIsSet_;
}

void ShowRoomSettingResponse::unsetshowAudienceMode()
{
    showAudienceModeIsSet_ = false;
}

std::string ShowRoomSettingResponse::getIsRedoubleOpen() const
{
    return isRedoubleOpen_;
}

void ShowRoomSettingResponse::setIsRedoubleOpen(const std::string& value)
{
    isRedoubleOpen_ = value;
    isRedoubleOpenIsSet_ = true;
}

bool ShowRoomSettingResponse::isRedoubleOpenIsSet() const
{
    return isRedoubleOpenIsSet_;
}

void ShowRoomSettingResponse::unsetisRedoubleOpen()
{
    isRedoubleOpenIsSet_ = false;
}

int32_t ShowRoomSettingResponse::getBaseAudienceCount() const
{
    return baseAudienceCount_;
}

void ShowRoomSettingResponse::setBaseAudienceCount(int32_t value)
{
    baseAudienceCount_ = value;
    baseAudienceCountIsSet_ = true;
}

bool ShowRoomSettingResponse::baseAudienceCountIsSet() const
{
    return baseAudienceCountIsSet_;
}

void ShowRoomSettingResponse::unsetbaseAudienceCount()
{
    baseAudienceCountIsSet_ = false;
}

double ShowRoomSettingResponse::getMultiple() const
{
    return multiple_;
}

void ShowRoomSettingResponse::setMultiple(double value)
{
    multiple_ = value;
    multipleIsSet_ = true;
}

bool ShowRoomSettingResponse::multipleIsSet() const
{
    return multipleIsSet_;
}

void ShowRoomSettingResponse::unsetmultiple()
{
    multipleIsSet_ = false;
}

}
}
}
}
}


