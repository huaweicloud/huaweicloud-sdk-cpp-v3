

#include "huaweicloud/vod/v1/model/ListThumbnailInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListThumbnailInfoResponse::ListThumbnailInfoResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    thumbnailsIsSet_ = false;
}

ListThumbnailInfoResponse::~ListThumbnailInfoResponse() = default;

void ListThumbnailInfoResponse::validate()
{
}

web::json::value ListThumbnailInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(thumbnailsIsSet_) {
        val[utility::conversions::to_string_t("thumbnails")] = ModelBase::toJson(thumbnails_);
    }

    return val;
}
bool ListThumbnailInfoResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("thumbnails"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thumbnails"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryThumbnailInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThumbnails(refVal);
        }
    }
    return ok;
}


int32_t ListThumbnailInfoResponse::getTotal() const
{
    return total_;
}

void ListThumbnailInfoResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListThumbnailInfoResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListThumbnailInfoResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<QueryThumbnailInfo>& ListThumbnailInfoResponse::getThumbnails()
{
    return thumbnails_;
}

void ListThumbnailInfoResponse::setThumbnails(const std::vector<QueryThumbnailInfo>& value)
{
    thumbnails_ = value;
    thumbnailsIsSet_ = true;
}

bool ListThumbnailInfoResponse::thumbnailsIsSet() const
{
    return thumbnailsIsSet_;
}

void ListThumbnailInfoResponse::unsetthumbnails()
{
    thumbnailsIsSet_ = false;
}

}
}
}
}
}


