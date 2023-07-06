

#include "huaweicloud/vod/v1/model/ThumbnailRsp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ThumbnailRsp::ThumbnailRsp()
{
    offset_ = 0;
    offsetIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

ThumbnailRsp::~ThumbnailRsp() = default;

void ThumbnailRsp::validate()
{
}

web::json::value ThumbnailRsp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }

    return val;
}

bool ThumbnailRsp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    return ok;
}

int32_t ThumbnailRsp::getOffset() const
{
    return offset_;
}

void ThumbnailRsp::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ThumbnailRsp::offsetIsSet() const
{
    return offsetIsSet_;
}

void ThumbnailRsp::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ThumbnailRsp::getUrl() const
{
    return url_;
}

void ThumbnailRsp::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ThumbnailRsp::urlIsSet() const
{
    return urlIsSet_;
}

void ThumbnailRsp::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


