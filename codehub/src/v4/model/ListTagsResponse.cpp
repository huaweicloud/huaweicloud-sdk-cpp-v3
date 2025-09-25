

#include "huaweicloud/codehub/v4/model/ListTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListTagsResponse::ListTagsResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListTagsResponse::~ListTagsResponse() = default;

void ListTagsResponse::validate()
{
}

web::json::value ListTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }
    if(xTotalIsSet_) {
        val[utility::conversions::to_string_t("X-Total")] = ModelBase::toJson(xTotal_);
    }

    return val;
}
bool ListTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<SimpleTagDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXTotal(refVal);
        }
    }
    return ok;
}


std::vector<SimpleTagDto>& ListTagsResponse::getBody()
{
    return body_;
}

void ListTagsResponse::setBody(const std::vector<SimpleTagDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTagsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTagsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListTagsResponse::getXTotal() const
{
    return xTotal_;
}

void ListTagsResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListTagsResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListTagsResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


