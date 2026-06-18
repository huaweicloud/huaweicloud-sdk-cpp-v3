

#include "huaweicloud/codeartsrepo/v4/model/ListManagementUsersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListManagementUsersResponse::ListManagementUsersResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListManagementUsersResponse::~ListManagementUsersResponse() = default;

void ListManagementUsersResponse::validate()
{
}

web::json::value ListManagementUsersResponse::toJson() const
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
bool ListManagementUsersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ManagementUserDto> refVal;
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


std::vector<ManagementUserDto>& ListManagementUsersResponse::getBody()
{
    return body_;
}

void ListManagementUsersResponse::setBody(const std::vector<ManagementUserDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListManagementUsersResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListManagementUsersResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListManagementUsersResponse::getXTotal() const
{
    return xTotal_;
}

void ListManagementUsersResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListManagementUsersResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListManagementUsersResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


