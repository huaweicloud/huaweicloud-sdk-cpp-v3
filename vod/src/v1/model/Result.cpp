

#include "huaweicloud/vod/v1/model/Result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




Result::Result()
{
    type_ = "";
    typeIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    transcodeResultIsSet_ = false;
}

Result::~Result() = default;

void Result::validate()
{
}

web::json::value Result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(transcodeResultIsSet_) {
        val[utility::conversions::to_string_t("transcode_result")] = ModelBase::toJson(transcodeResult_);
    }

    return val;
}
bool Result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transcode_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transcode_result"));
        if(!fieldValue.is_null())
        {
            TranscodeInfoResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTranscodeResult(refVal);
        }
    }
    return ok;
}


std::string Result::getType() const
{
    return type_;
}

void Result::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Result::typeIsSet() const
{
    return typeIsSet_;
}

void Result::unsettype()
{
    typeIsSet_ = false;
}

std::string Result::getAssetId() const
{
    return assetId_;
}

void Result::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool Result::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void Result::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string Result::getStatus() const
{
    return status_;
}

void Result::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Result::statusIsSet() const
{
    return statusIsSet_;
}

void Result::unsetstatus()
{
    statusIsSet_ = false;
}

std::string Result::getCreateTime() const
{
    return createTime_;
}

void Result::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool Result::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void Result::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string Result::getEndTime() const
{
    return endTime_;
}

void Result::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool Result::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void Result::unsetendTime()
{
    endTimeIsSet_ = false;
}

TranscodeInfoResult Result::getTranscodeResult() const
{
    return transcodeResult_;
}

void Result::setTranscodeResult(const TranscodeInfoResult& value)
{
    transcodeResult_ = value;
    transcodeResultIsSet_ = true;
}

bool Result::transcodeResultIsSet() const
{
    return transcodeResultIsSet_;
}

void Result::unsettranscodeResult()
{
    transcodeResultIsSet_ = false;
}

}
}
}
}
}


