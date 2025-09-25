

#include "huaweicloud/codehub/v4/model/ListTreesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListTreesResponse::ListTreesResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListTreesResponse::~ListTreesResponse() = default;

void ListTreesResponse::validate()
{
}

web::json::value ListTreesResponse::toJson() const
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
bool ListTreesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<TreeObjectDto> refVal;
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


std::vector<TreeObjectDto>& ListTreesResponse::getBody()
{
    return body_;
}

void ListTreesResponse::setBody(const std::vector<TreeObjectDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTreesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTreesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListTreesResponse::getXTotal() const
{
    return xTotal_;
}

void ListTreesResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListTreesResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListTreesResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


