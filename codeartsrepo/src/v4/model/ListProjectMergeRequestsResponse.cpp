

#include "huaweicloud/codeartsrepo/v4/model/ListProjectMergeRequestsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListProjectMergeRequestsResponse::ListProjectMergeRequestsResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListProjectMergeRequestsResponse::~ListProjectMergeRequestsResponse() = default;

void ListProjectMergeRequestsResponse::validate()
{
}

web::json::value ListProjectMergeRequestsResponse::toJson() const
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
bool ListProjectMergeRequestsResponse::fromJson(const web::json::value& val)
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


std::vector<MergeRequestListBasicDto>& ListProjectMergeRequestsResponse::getBody()
{
    return body_;
}

void ListProjectMergeRequestsResponse::setBody(const std::vector<MergeRequestListBasicDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListProjectMergeRequestsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListProjectMergeRequestsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListProjectMergeRequestsResponse::getXTotal() const
{
    return xTotal_;
}

void ListProjectMergeRequestsResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListProjectMergeRequestsResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListProjectMergeRequestsResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


