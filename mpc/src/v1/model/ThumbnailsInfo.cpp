

#include "huaweicloud/mpc/v1/model/ThumbnailsInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ThumbnailsInfo::ThumbnailsInfo()
{
    picInfoIsSet_ = false;
    outputIsSet_ = false;
    outputName_ = "";
    outputNameIsSet_ = false;
}

ThumbnailsInfo::~ThumbnailsInfo() = default;

void ThumbnailsInfo::validate()
{
}

web::json::value ThumbnailsInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(picInfoIsSet_) {
        val[utility::conversions::to_string_t("pic_info")] = ModelBase::toJson(picInfo_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(outputNameIsSet_) {
        val[utility::conversions::to_string_t("output_name")] = ModelBase::toJson(outputName_);
    }

    return val;
}
bool ThumbnailsInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pic_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pic_info"));
        if(!fieldValue.is_null())
        {
            std::vector<PicInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPicInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("output_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputName(refVal);
        }
    }
    return ok;
}


std::vector<PicInfo>& ThumbnailsInfo::getPicInfo()
{
    return picInfo_;
}

void ThumbnailsInfo::setPicInfo(const std::vector<PicInfo>& value)
{
    picInfo_ = value;
    picInfoIsSet_ = true;
}

bool ThumbnailsInfo::picInfoIsSet() const
{
    return picInfoIsSet_;
}

void ThumbnailsInfo::unsetpicInfo()
{
    picInfoIsSet_ = false;
}

ObsObjInfo ThumbnailsInfo::getOutput() const
{
    return output_;
}

void ThumbnailsInfo::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool ThumbnailsInfo::outputIsSet() const
{
    return outputIsSet_;
}

void ThumbnailsInfo::unsetoutput()
{
    outputIsSet_ = false;
}

std::string ThumbnailsInfo::getOutputName() const
{
    return outputName_;
}

void ThumbnailsInfo::setOutputName(const std::string& value)
{
    outputName_ = value;
    outputNameIsSet_ = true;
}

bool ThumbnailsInfo::outputNameIsSet() const
{
    return outputNameIsSet_;
}

void ThumbnailsInfo::unsetoutputName()
{
    outputNameIsSet_ = false;
}

}
}
}
}
}


