

#include "huaweicloud/codeartsrepo/v4/model/ListMembersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListMembersResponse::ListMembersResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListMembersResponse::~ListMembersResponse() = default;

void ListMembersResponse::validate()
{
}

web::json::value ListMembersResponse::toJson() const
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
bool ListMembersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<RepositoryMemberDto> refVal;
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


std::vector<RepositoryMemberDto>& ListMembersResponse::getBody()
{
    return body_;
}

void ListMembersResponse::setBody(const std::vector<RepositoryMemberDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListMembersResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListMembersResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListMembersResponse::getXTotal() const
{
    return xTotal_;
}

void ListMembersResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListMembersResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListMembersResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


