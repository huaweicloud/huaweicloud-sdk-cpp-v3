

#include "huaweicloud/codehub/v4/model/ListTenantRepositoriesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListTenantRepositoriesResponse::ListTenantRepositoriesResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListTenantRepositoriesResponse::~ListTenantRepositoriesResponse() = default;

void ListTenantRepositoriesResponse::validate()
{
}

web::json::value ListTenantRepositoriesResponse::toJson() const
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
bool ListTenantRepositoriesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<TenantRepositoryDto> refVal;
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


std::vector<TenantRepositoryDto>& ListTenantRepositoriesResponse::getBody()
{
    return body_;
}

void ListTenantRepositoriesResponse::setBody(const std::vector<TenantRepositoryDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTenantRepositoriesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTenantRepositoriesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListTenantRepositoriesResponse::getXTotal() const
{
    return xTotal_;
}

void ListTenantRepositoriesResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListTenantRepositoriesResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListTenantRepositoriesResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


