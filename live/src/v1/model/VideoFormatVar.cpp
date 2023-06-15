

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

    
    if (m_value == eVideoFormatVar::VideoFormatVar_FLV) val = web::json::value::string(U("FLV"));
    if (m_value == eVideoFormatVar::VideoFormatVar_HLS) val = web::json::value::string(U("HLS"));
    if (m_value == eVideoFormatVar::VideoFormatVar_MP4) val = web::json::value::string(U("MP4"));

    return val;
}

void VideoFormatVar::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("FLV")) m_value = eVideoFormatVar::VideoFormatVar_FLV;
    if (s == utility::conversions::to_string_t("HLS")) m_value = eVideoFormatVar::VideoFormatVar_HLS;
    if (s == utility::conversions::to_string_t("MP4")) m_value = eVideoFormatVar::VideoFormatVar_MP4;
}

VideoFormatVar::eVideoFormatVar VideoFormatVar::getValue() const
{
   return m_value;
}

void VideoFormatVar::setValue(VideoFormatVar::eVideoFormatVar const value)
{
   m_value = value;
}


}
}
}
}
}


