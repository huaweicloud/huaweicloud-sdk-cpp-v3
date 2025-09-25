

#include "huaweicloud/codehub/v4/model/ListSubmodulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListSubmodulesResponse::ListSubmodulesResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListSubmodulesResponse::~ListSubmodulesResponse() = default;

void ListSubmodulesResponse::validate()
{
}

web::json::value ListSubmodulesResponse::toJson() const
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
bool ListSubmodulesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<SubmoduleDto> refVal;
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


std::vector<SubmoduleDto>& ListSubmodulesResponse::getBody()
{
    return body_;
}

void ListSubmodulesResponse::setBody(const std::vector<SubmoduleDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListSubmodulesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListSubmodulesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListSubmodulesResponse::getXTotal() const
{
    return xTotal_;
}

void ListSubmodulesResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListSubmodulesResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListSubmodulesResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


