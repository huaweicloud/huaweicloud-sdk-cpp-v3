

#include "huaweicloud/live/v1/model/VideoFormatVar.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {



VideoFormatVar::VideoFormatVar()
{
}

VideoFormatVar::~VideoFormatVar()
{
}

void VideoFormatVar::validate()
{
}

web::json::value VideoFormatVar::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eVideoFormatVar::VideoFormatVar_FLV) val = web::json::value::string(U("FLV"));
    if (value_ == eVideoFormatVar::VideoFormatVar_HLS) val = web::json::value::string(U("HLS"));
    if (value_ == eVideoFormatVar::VideoFormatVar_MP4) val = web::json::value::string(U("MP4"));

    return val;
}

bool VideoFormatVar::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("FLV")) value_ = eVideoFormatVar::VideoFormatVar_FLV;
    if (s == utility::conversions::to_string_t("HLS")) value_ = eVideoFormatVar::VideoFormatVar_HLS;
    if (s == utility::conversions::to_string_t("MP4")) value_ = eVideoFormatVar::VideoFormatVar_MP4;
    return true;
}

VideoFormatVar::eVideoFormatVar VideoFormatVar::getValue() const
{
   return value_;
}

void VideoFormatVar::setValue(VideoFormatVar::eVideoFormatVar const value)
{
   value_ = value;
}


}
}
}
}
}


