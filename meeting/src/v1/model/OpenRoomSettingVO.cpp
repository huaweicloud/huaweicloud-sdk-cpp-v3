

#include "huaweicloud/meeting/v1/model/OpenRoomSettingVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




OpenRoomSettingVO::OpenRoomSettingVO()
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

OpenRoomSettingVO::~OpenRoomSettingVO() = default;

void OpenRoomSettingVO::validate()
{
}

web::json::value OpenRoomSettingVO::toJson() const
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
bool OpenRoomSettingVO::fromJson(const web::json::value& val)
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


std::string OpenRoomSettingVO::getRoomIntroduce() const
{
    return roomIntroduce_;
}

void OpenRoomSettingVO::setRoomIntroduce(const std::string& value)
{
    roomIntroduce_ = value;
    roomIntroduceIsSet_ = true;
}

bool OpenRoomSettingVO::roomIntroduceIsSet() const
{
    return roomIntroduceIsSet_;
}

void OpenRoomSettingVO::unsetroomIntroduce()
{
    roomIntroduceIsSet_ = false;
}

std::string OpenRoomSettingVO::getCropLogoId() const
{
    return cropLogoId_;
}

void OpenRoomSettingVO::setCropLogoId(const std::string& value)
{
    cropLogoId_ = value;
    cropLogoIdIsSet_ = true;
}

bool OpenRoomSettingVO::cropLogoIdIsSet() const
{
    return cropLogoIdIsSet_;
}

void OpenRoomSettingVO::unsetcropLogoId()
{
    cropLogoIdIsSet_ = false;
}

std::string OpenRoomSettingVO::getCoverPictureId() const
{
    return coverPictureId_;
}

void OpenRoomSettingVO::setCoverPictureId(const std::string& value)
{
    coverPictureId_ = value;
    coverPictureIdIsSet_ = true;
}

bool OpenRoomSettingVO::coverPictureIdIsSet() const
{
    return coverPictureIdIsSet_;
}

void OpenRoomSettingVO::unsetcoverPictureId()
{
    coverPictureIdIsSet_ = false;
}

std::string OpenRoomSettingVO::getShowAudienceMode() const
{
    return showAudienceMode_;
}

void OpenRoomSettingVO::setShowAudienceMode(const std::string& value)
{
    showAudienceMode_ = value;
    showAudienceModeIsSet_ = true;
}

bool OpenRoomSettingVO::showAudienceModeIsSet() const
{
    return showAudienceModeIsSet_;
}

void OpenRoomSettingVO::unsetshowAudienceMode()
{
    showAudienceModeIsSet_ = false;
}

std::string OpenRoomSettingVO::getIsRedoubleOpen() const
{
    return isRedoubleOpen_;
}

void OpenRoomSettingVO::setIsRedoubleOpen(const std::string& value)
{
    isRedoubleOpen_ = value;
    isRedoubleOpenIsSet_ = true;
}

bool OpenRoomSettingVO::isRedoubleOpenIsSet() const
{
    return isRedoubleOpenIsSet_;
}

void OpenRoomSettingVO::unsetisRedoubleOpen()
{
    isRedoubleOpenIsSet_ = false;
}

int32_t OpenRoomSettingVO::getBaseAudienceCount() const
{
    return baseAudienceCount_;
}

void OpenRoomSettingVO::setBaseAudienceCount(int32_t value)
{
    baseAudienceCount_ = value;
    baseAudienceCountIsSet_ = true;
}

bool OpenRoomSettingVO::baseAudienceCountIsSet() const
{
    return baseAudienceCountIsSet_;
}

void OpenRoomSettingVO::unsetbaseAudienceCount()
{
    baseAudienceCountIsSet_ = false;
}

double OpenRoomSettingVO::getMultiple() const
{
    return multiple_;
}

void OpenRoomSettingVO::setMultiple(double value)
{
    multiple_ = value;
    multipleIsSet_ = true;
}

bool OpenRoomSettingVO::multipleIsSet() const
{
    return multipleIsSet_;
}

void OpenRoomSettingVO::unsetmultiple()
{
    multipleIsSet_ = false;
}

}
}
}
}
}


