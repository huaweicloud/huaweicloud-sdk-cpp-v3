

#include "huaweicloud/codeartsrepo/v4/model/ListPersonalMergeRequestsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListPersonalMergeRequestsResponse::ListPersonalMergeRequestsResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListPersonalMergeRequestsResponse::~ListPersonalMergeRequestsResponse() = default;

void ListPersonalMergeRequestsResponse::validate()
{
}

web::json::value ListPersonalMergeRequestsResponse::toJson() const
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
bool ListPersonalMergeRequestsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<MergeRequestListBasicDto> refVal;
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


std::vector<MergeRequestListBasicDto>& ListPersonalMergeRequestsResponse::getBody()
{
    return body_;
}

void ListPersonalMergeRequestsResponse::setBody(const std::vector<MergeRequestListBasicDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListPersonalMergeRequestsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListPersonalMergeRequestsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListPersonalMergeRequestsResponse::getXTotal() const
{
    return xTotal_;
}

void ListPersonalMergeRequestsResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListPersonalMergeRequestsResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListPersonalMergeRequestsResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


