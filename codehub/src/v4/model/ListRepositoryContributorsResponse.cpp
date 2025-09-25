

#include "huaweicloud/codehub/v4/model/ListRepositoryContributorsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListRepositoryContributorsResponse::ListRepositoryContributorsResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListRepositoryContributorsResponse::~ListRepositoryContributorsResponse() = default;

void ListRepositoryContributorsResponse::validate()
{
}

web::json::value ListRepositoryContributorsResponse::toJson() const
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
bool ListRepositoryContributorsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ContributorDto> refVal;
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


std::vector<ContributorDto>& ListRepositoryContributorsResponse::getBody()
{
    return body_;
}

void ListRepositoryContributorsResponse::setBody(const std::vector<ContributorDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListRepositoryContributorsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListRepositoryContributorsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListRepositoryContributorsResponse::getXTotal() const
{
    return xTotal_;
}

void ListRepositoryContributorsResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListRepositoryContributorsResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListRepositoryContributorsResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


