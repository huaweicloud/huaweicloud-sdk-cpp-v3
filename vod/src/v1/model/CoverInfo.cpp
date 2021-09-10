

#include "huaweicloud/vod/v1/model/CoverInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CoverInfo::CoverInfo()
{
    coverUrl_ = "";
    coverUrlIsSet_ = false;
}

CoverInfo::~CoverInfo() = default;

void CoverInfo::validate()
{
}

web::json::value CoverInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(coverUrlIsSet_) {
        val[utility::conversions::to_string_t("cover_url")] = ModelBase::toJson(coverUrl_);
    }

    return val;
}

bool CoverInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cover_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cover_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoverUrl(refVal);
        }
    }
    return ok;
}


std::string CoverInfo::getCoverUrl() const
{
    return coverUrl_;
}

void CoverInfo::setCoverUrl(const std::string& value)
{
    coverUrl_ = value;
    coverUrlIsSet_ = true;
}

bool CoverInfo::coverUrlIsSet() const
{
    return coverUrlIsSet_;
}

void CoverInfo::unsetcoverUrl()
{
    coverUrlIsSet_ = false;
}

}
}
}
}
}


