

#include "huaweicloud/codehub/v4/model/ListBranchesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListBranchesResponse::ListBranchesResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListBranchesResponse::~ListBranchesResponse() = default;

void ListBranchesResponse::validate()
{
}

web::json::value ListBranchesResponse::toJson() const
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
bool ListBranchesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<BranchSimpleDto> refVal;
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


std::vector<BranchSimpleDto>& ListBranchesResponse::getBody()
{
    return body_;
}

void ListBranchesResponse::setBody(const std::vector<BranchSimpleDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListBranchesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListBranchesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListBranchesResponse::getXTotal() const
{
    return xTotal_;
}

void ListBranchesResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListBranchesResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListBranchesResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


