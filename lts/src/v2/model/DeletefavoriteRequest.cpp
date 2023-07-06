

#include "huaweicloud/lts/v2/model/DeletefavoriteRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeletefavoriteRequest::DeletefavoriteRequest()
{
    favResId_ = "";
    favResIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

DeletefavoriteRequest::~DeletefavoriteRequest() = default;

void DeletefavoriteRequest::validate()
{
}

web::json::value DeletefavoriteRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(favResIdIsSet_) {
        val[utility::conversions::to_string_t("fav_res_id")] = ModelBase::toJson(favResId_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}

bool DeletefavoriteRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fav_res_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fav_res_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFavResId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}

std::string DeletefavoriteRequest::getFavResId() const
{
    return favResId_;
}

void DeletefavoriteRequest::setFavResId(const std::string& value)
{
    favResId_ = value;
    favResIdIsSet_ = true;
}

bool DeletefavoriteRequest::favResIdIsSet() const
{
    return favResIdIsSet_;
}

void DeletefavoriteRequest::unsetfavResId()
{
    favResIdIsSet_ = false;
}

std::string DeletefavoriteRequest::getContentType() const
{
    return contentType_;
}

void DeletefavoriteRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool DeletefavoriteRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void DeletefavoriteRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


