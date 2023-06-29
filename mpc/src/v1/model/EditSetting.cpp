

#include "huaweicloud/mpc/v1/model/EditSetting.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




EditSetting::EditSetting()
{
    timelineStart_ = "";
    timelineStartIsSet_ = false;
    timelineEnd_ = "";
    timelineEndIsSet_ = false;
    transTemplateId_ = 0;
    transTemplateIdIsSet_ = false;
    avParameterIsSet_ = false;
    mosaicsIsSet_ = false;
    imageWatermarksIsSet_ = false;
    headsIsSet_ = false;
    tailsIsSet_ = false;
    outputIsSet_ = false;
}

EditSetting::~EditSetting() = default;

void EditSetting::validate()
{
}

web::json::value EditSetting::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timelineStartIsSet_) {
        val[utility::conversions::to_string_t("timeline_start")] = ModelBase::toJson(timelineStart_);
    }
    if(timelineEndIsSet_) {
        val[utility::conversions::to_string_t("timeline_end")] = ModelBase::toJson(timelineEnd_);
    }
    if(transTemplateIdIsSet_) {
        val[utility::conversions::to_string_t("trans_template_id")] = ModelBase::toJson(transTemplateId_);
    }
    if(avParameterIsSet_) {
        val[utility::conversions::to_string_t("av_parameter")] = ModelBase::toJson(avParameter_);
    }
    if(mosaicsIsSet_) {
        val[utility::conversions::to_string_t("mosaics")] = ModelBase::toJson(mosaics_);
    }
    if(imageWatermarksIsSet_) {
        val[utility::conversions::to_string_t("image_watermarks")] = ModelBase::toJson(imageWatermarks_);
    }
    if(headsIsSet_) {
        val[utility::conversions::to_string_t("heads")] = ModelBase::toJson(heads_);
    }
    if(tailsIsSet_) {
        val[utility::conversions::to_string_t("tails")] = ModelBase::toJson(tails_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }

    return val;
}

bool EditSetting::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("trans_template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trans_template_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("av_parameter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("av_parameter"));
        if(!fieldValue.is_null())
        {
            AvParameters refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvParameter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mosaics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mosaics"));
        if(!fieldValue.is_null())
        {
            std::vector<MosaicInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMosaics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_watermarks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_watermarks"));
        if(!fieldValue.is_null())
        {
            std::vector<ImageWatermarkSetting> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageWatermarks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("heads"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("heads"));
        if(!fieldValue.is_null())
        {
            std::vector<ObsObjInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeads(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tails"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tails"));
        if(!fieldValue.is_null())
        {
            std::vector<ObsObjInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTails(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    return ok;
}


std::string EditSetting::getTimelineStart() const
{
    return timelineStart_;
}

void EditSetting::setTimelineStart(const std::string& value)
{
    timelineStart_ = value;
    timelineStartIsSet_ = true;
}

bool EditSetting::timelineStartIsSet() const
{
    return timelineStartIsSet_;
}

void EditSetting::unsettimelineStart()
{
    timelineStartIsSet_ = false;
}

std::string EditSetting::getTimelineEnd() const
{
    return timelineEnd_;
}

void EditSetting::setTimelineEnd(const std::string& value)
{
    timelineEnd_ = value;
    timelineEndIsSet_ = true;
}

bool EditSetting::timelineEndIsSet() const
{
    return timelineEndIsSet_;
}

void EditSetting::unsettimelineEnd()
{
    timelineEndIsSet_ = false;
}

int32_t EditSetting::getTransTemplateId() const
{
    return transTemplateId_;
}

void EditSetting::setTransTemplateId(int32_t value)
{
    transTemplateId_ = value;
    transTemplateIdIsSet_ = true;
}

bool EditSetting::transTemplateIdIsSet() const
{
    return transTemplateIdIsSet_;
}

void EditSetting::unsettransTemplateId()
{
    transTemplateIdIsSet_ = false;
}

AvParameters EditSetting::getAvParameter() const
{
    return avParameter_;
}

void EditSetting::setAvParameter(const AvParameters& value)
{
    avParameter_ = value;
    avParameterIsSet_ = true;
}

bool EditSetting::avParameterIsSet() const
{
    return avParameterIsSet_;
}

void EditSetting::unsetavParameter()
{
    avParameterIsSet_ = false;
}

std::vector<MosaicInfo>& EditSetting::getMosaics()
{
    return mosaics_;
}

void EditSetting::setMosaics(const std::vector<MosaicInfo>& value)
{
    mosaics_ = value;
    mosaicsIsSet_ = true;
}

bool EditSetting::mosaicsIsSet() const
{
    return mosaicsIsSet_;
}

void EditSetting::unsetmosaics()
{
    mosaicsIsSet_ = false;
}

std::vector<ImageWatermarkSetting>& EditSetting::getImageWatermarks()
{
    return imageWatermarks_;
}

void EditSetting::setImageWatermarks(const std::vector<ImageWatermarkSetting>& value)
{
    imageWatermarks_ = value;
    imageWatermarksIsSet_ = true;
}

bool EditSetting::imageWatermarksIsSet() const
{
    return imageWatermarksIsSet_;
}

void EditSetting::unsetimageWatermarks()
{
    imageWatermarksIsSet_ = false;
}

std::vector<ObsObjInfo>& EditSetting::getHeads()
{
    return heads_;
}

void EditSetting::setHeads(const std::vector<ObsObjInfo>& value)
{
    heads_ = value;
    headsIsSet_ = true;
}

bool EditSetting::headsIsSet() const
{
    return headsIsSet_;
}

void EditSetting::unsetheads()
{
    headsIsSet_ = false;
}

std::vector<ObsObjInfo>& EditSetting::getTails()
{
    return tails_;
}

void EditSetting::setTails(const std::vector<ObsObjInfo>& value)
{
    tails_ = value;
    tailsIsSet_ = true;
}

bool EditSetting::tailsIsSet() const
{
    return tailsIsSet_;
}

void EditSetting::unsettails()
{
    tailsIsSet_ = false;
}

ObsObjInfo EditSetting::getOutput() const
{
    return output_;
}

void EditSetting::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool EditSetting::outputIsSet() const
{
    return outputIsSet_;
}

void EditSetting::unsetoutput()
{
    outputIsSet_ = false;
}

}
}
}
}
}


