

#include "huaweicloud/vod/v1/model/UpdateCoverByThumbnailReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UpdateCoverByThumbnailReq::UpdateCoverByThumbnailReq()
{
    thumbnailUrl_ = "";
    thumbnailUrlIsSet_ = false;
}

UpdateCoverByThumbnailReq::~UpdateCoverByThumbnailReq() = default;

void UpdateCoverByThumbnailReq::validate()
{
}

web::json::value UpdateCoverByThumbnailReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(thumbnailUrlIsSet_) {
        val[utility::conversions::to_string_t("thumbnailUrl")] = ModelBase::toJson(thumbnailUrl_);
    }

    return val;
}

bool UpdateCoverByThumbnailReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("thumbnailUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thumbnailUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThumbnailUrl(refVal);
        }
    }
    return ok;
}

std::string UpdateCoverByThumbnailReq::getThumbnailUrl() const
{
    return thumbnailUrl_;
}

void UpdateCoverByThumbnailReq::setThumbnailUrl(const std::string& value)
{
    thumbnailUrl_ = value;
    thumbnailUrlIsSet_ = true;
}

bool UpdateCoverByThumbnailReq::thumbnailUrlIsSet() const
{
    return thumbnailUrlIsSet_;
}

void UpdateCoverByThumbnailReq::unsetthumbnailUrl()
{
    thumbnailUrlIsSet_ = false;
}

}
}
}
}
}


