

#include "huaweicloud/cfw/v1/model/ListFirewallListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListFirewallListResponse::ListFirewallListResponse()
{
    userSupportEps_ = false;
    userSupportEpsIsSet_ = false;
    dataIsSet_ = false;
}

ListFirewallListResponse::~ListFirewallListResponse() = default;

void ListFirewallListResponse::validate()
{
}

web::json::value ListFirewallListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userSupportEpsIsSet_) {
        val[utility::conversions::to_string_t("user_support_eps")] = ModelBase::toJson(userSupportEps_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListFirewallListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_support_eps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_support_eps"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserSupportEps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            HttpFirewallInstanceListResponseData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


bool ListFirewallListResponse::isUserSupportEps() const
{
    return userSupportEps_;
}

void ListFirewallListResponse::setUserSupportEps(bool value)
{
    userSupportEps_ = value;
    userSupportEpsIsSet_ = true;
}

bool ListFirewallListResponse::userSupportEpsIsSet() const
{
    return userSupportEpsIsSet_;
}

void ListFirewallListResponse::unsetuserSupportEps()
{
    userSupportEpsIsSet_ = false;
}

HttpFirewallInstanceListResponseData ListFirewallListResponse::getData() const
{
    return data_;
}

void ListFirewallListResponse::setData(const HttpFirewallInstanceListResponseData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListFirewallListResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListFirewallListResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


