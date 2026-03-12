

#include "huaweicloud/vod/v1/model/ListThumbnailDetailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListThumbnailDetailsResponse::ListThumbnailDetailsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    thumbnailResultIsSet_ = false;
}

ListThumbnailDetailsResponse::~ListThumbnailDetailsResponse() = default;

void ListThumbnailDetailsResponse::validate()
{
}

web::json::value ListThumbnailDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(thumbnailResultIsSet_) {
        val[utility::conversions::to_string_t("thumbnail_result")] = ModelBase::toJson(thumbnailResult_);
    }

    return val;
}
bool ListThumbnailDetailsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thumbnail_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thumbnail_result"));
        if(!fieldValue.is_null())
        {
            std::vector<ThumbnailRsp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThumbnailResult(refVal);
        }
    }
    return ok;
}


int32_t ListThumbnailDetailsResponse::getTotal() const
{
    return total_;
}

void ListThumbnailDetailsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListThumbnailDetailsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListThumbnailDetailsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ThumbnailRsp>& ListThumbnailDetailsResponse::getThumbnailResult()
{
    return thumbnailResult_;
}

void ListThumbnailDetailsResponse::setThumbnailResult(const std::vector<ThumbnailRsp>& value)
{
    thumbnailResult_ = value;
    thumbnailResultIsSet_ = true;
}

bool ListThumbnailDetailsResponse::thumbnailResultIsSet() const
{
    return thumbnailResultIsSet_;
}

void ListThumbnailDetailsResponse::unsetthumbnailResult()
{
    thumbnailResultIsSet_ = false;
}

}
}
}
}
}


