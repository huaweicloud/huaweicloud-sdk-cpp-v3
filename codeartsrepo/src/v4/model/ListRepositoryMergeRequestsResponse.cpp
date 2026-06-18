

#include "huaweicloud/codeartsrepo/v4/model/ListRepositoryMergeRequestsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListRepositoryMergeRequestsResponse::ListRepositoryMergeRequestsResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListRepositoryMergeRequestsResponse::~ListRepositoryMergeRequestsResponse() = default;

void ListRepositoryMergeRequestsResponse::validate()
{
}

web::json::value ListRepositoryMergeRequestsResponse::toJson() const
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
bool ListRepositoryMergeRequestsResponse::fromJson(const web::json::value& val)
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


std::vector<MergeRequestListBasicDto>& ListRepositoryMergeRequestsResponse::getBody()
{
    return body_;
}

void ListRepositoryMergeRequestsResponse::setBody(const std::vector<MergeRequestListBasicDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListRepositoryMergeRequestsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListRepositoryMergeRequestsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListRepositoryMergeRequestsResponse::getXTotal() const
{
    return xTotal_;
}

void ListRepositoryMergeRequestsResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListRepositoryMergeRequestsResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListRepositoryMergeRequestsResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


