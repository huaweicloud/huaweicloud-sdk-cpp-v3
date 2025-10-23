

#include "huaweicloud/codehub/v4/model/ListItemCommitsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListItemCommitsResponse::ListItemCommitsResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListItemCommitsResponse::~ListItemCommitsResponse() = default;

void ListItemCommitsResponse::validate()
{
}

web::json::value ListItemCommitsResponse::toJson() const
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
bool ListItemCommitsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ItemCommitDto> refVal;
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


std::vector<ItemCommitDto>& ListItemCommitsResponse::getBody()
{
    return body_;
}

void ListItemCommitsResponse::setBody(const std::vector<ItemCommitDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListItemCommitsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListItemCommitsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListItemCommitsResponse::getXTotal() const
{
    return xTotal_;
}

void ListItemCommitsResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListItemCommitsResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListItemCommitsResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


