

#include "huaweicloud/meeting/v1/model/ShowMgmtSiteStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowMgmtSiteStatusResponse::ShowMgmtSiteStatusResponse()
{
    status_ = "";
    statusIsSet_ = false;
    redirectJoinUrl_ = "";
    redirectJoinUrlIsSet_ = false;
}

ShowMgmtSiteStatusResponse::~ShowMgmtSiteStatusResponse() = default;

void ShowMgmtSiteStatusResponse::validate()
{
}

web::json::value ShowMgmtSiteStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(redirectJoinUrlIsSet_) {
        val[utility::conversions::to_string_t("redirectJoinUrl")] = ModelBase::toJson(redirectJoinUrl_);
    }

    return val;
}
bool ShowMgmtSiteStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("redirectJoinUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("redirectJoinUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRedirectJoinUrl(refVal);
        }
    }
    return ok;
}


std::string ShowMgmtSiteStatusResponse::getStatus() const
{
    return status_;
}

void ShowMgmtSiteStatusResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowMgmtSiteStatusResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowMgmtSiteStatusResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowMgmtSiteStatusResponse::getRedirectJoinUrl() const
{
    return redirectJoinUrl_;
}

void ShowMgmtSiteStatusResponse::setRedirectJoinUrl(const std::string& value)
{
    redirectJoinUrl_ = value;
    redirectJoinUrlIsSet_ = true;
}

bool ShowMgmtSiteStatusResponse::redirectJoinUrlIsSet() const
{
    return redirectJoinUrlIsSet_;
}

void ShowMgmtSiteStatusResponse::unsetredirectJoinUrl()
{
    redirectJoinUrlIsSet_ = false;
}

}
}
}
}
}


