

#include "huaweicloud/meeting/v1/model/OpenRoomSettingReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




OpenRoomSettingReq::OpenRoomSettingReq()
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

OpenRoomSettingReq::~OpenRoomSettingReq() = default;

void OpenRoomSettingReq::validate()
{
}

web::json::value OpenRoomSettingReq::toJson() const
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
bool OpenRoomSettingReq::fromJson(const web::json::value& val)
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


std::string OpenRoomSettingReq::getRoomIntroduce() const
{
    return roomIntroduce_;
}

void OpenRoomSettingReq::setRoomIntroduce(const std::string& value)
{
    roomIntroduce_ = value;
    roomIntroduceIsSet_ = true;
}

bool OpenRoomSettingReq::roomIntroduceIsSet() const
{
    return roomIntroduceIsSet_;
}

void OpenRoomSettingReq::unsetroomIntroduce()
{
    roomIntroduceIsSet_ = false;
}

std::string OpenRoomSettingReq::getCropLogoId() const
{
    return cropLogoId_;
}

void OpenRoomSettingReq::setCropLogoId(const std::string& value)
{
    cropLogoId_ = value;
    cropLogoIdIsSet_ = true;
}

bool OpenRoomSettingReq::cropLogoIdIsSet() const
{
    return cropLogoIdIsSet_;
}

void OpenRoomSettingReq::unsetcropLogoId()
{
    cropLogoIdIsSet_ = false;
}

std::string OpenRoomSettingReq::getCoverPictureId() const
{
    return coverPictureId_;
}

void OpenRoomSettingReq::setCoverPictureId(const std::string& value)
{
    coverPictureId_ = value;
    coverPictureIdIsSet_ = true;
}

bool OpenRoomSettingReq::coverPictureIdIsSet() const
{
    return coverPictureIdIsSet_;
}

void OpenRoomSettingReq::unsetcoverPictureId()
{
    coverPictureIdIsSet_ = false;
}

std::string OpenRoomSettingReq::getShowAudienceMode() const
{
    return showAudienceMode_;
}

void OpenRoomSettingReq::setShowAudienceMode(const std::string& value)
{
    showAudienceMode_ = value;
    showAudienceModeIsSet_ = true;
}

bool OpenRoomSettingReq::showAudienceModeIsSet() const
{
    return showAudienceModeIsSet_;
}

void OpenRoomSettingReq::unsetshowAudienceMode()
{
    showAudienceModeIsSet_ = false;
}

std::string OpenRoomSettingReq::getIsRedoubleOpen() const
{
    return isRedoubleOpen_;
}

void OpenRoomSettingReq::setIsRedoubleOpen(const std::string& value)
{
    isRedoubleOpen_ = value;
    isRedoubleOpenIsSet_ = true;
}

bool OpenRoomSettingReq::isRedoubleOpenIsSet() const
{
    return isRedoubleOpenIsSet_;
}

void OpenRoomSettingReq::unsetisRedoubleOpen()
{
    isRedoubleOpenIsSet_ = false;
}

int32_t OpenRoomSettingReq::getBaseAudienceCount() const
{
    return baseAudienceCount_;
}

void OpenRoomSettingReq::setBaseAudienceCount(int32_t value)
{
    baseAudienceCount_ = value;
    baseAudienceCountIsSet_ = true;
}

bool OpenRoomSettingReq::baseAudienceCountIsSet() const
{
    return baseAudienceCountIsSet_;
}

void OpenRoomSettingReq::unsetbaseAudienceCount()
{
    baseAudienceCountIsSet_ = false;
}

double OpenRoomSettingReq::getMultiple() const
{
    return multiple_;
}

void OpenRoomSettingReq::setMultiple(double value)
{
    multiple_ = value;
    multipleIsSet_ = true;
}

bool OpenRoomSettingReq::multipleIsSet() const
{
    return multipleIsSet_;
}

void OpenRoomSettingReq::unsetmultiple()
{
    multipleIsSet_ = false;
}

}
}
}
}
}


