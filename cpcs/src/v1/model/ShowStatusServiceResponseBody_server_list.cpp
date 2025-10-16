

#include "huaweicloud/cpcs/v1/model/ShowStatusServiceResponseBody_server_list.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowStatusServiceResponseBody_server_list::ShowStatusServiceResponseBody_server_list()
{
    serverType_ = "";
    serverTypeIsSet_ = false;
    appListIsSet_ = false;
}

ShowStatusServiceResponseBody_server_list::~ShowStatusServiceResponseBody_server_list() = default;

void ShowStatusServiceResponseBody_server_list::validate()
{
}

web::json::value ShowStatusServiceResponseBody_server_list::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverTypeIsSet_) {
        val[utility::conversions::to_string_t("server_type")] = ModelBase::toJson(serverType_);
    }
    if(appListIsSet_) {
        val[utility::conversions::to_string_t("app_list")] = ModelBase::toJson(appList_);
    }

    return val;
}
bool ShowStatusServiceResponseBody_server_list::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowStatusAppItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppList(refVal);
        }
    }
    return ok;
}


std::string ShowStatusServiceResponseBody_server_list::getServerType() const
{
    return serverType_;
}

void ShowStatusServiceResponseBody_server_list::setServerType(const std::string& value)
{
    serverType_ = value;
    serverTypeIsSet_ = true;
}

bool ShowStatusServiceResponseBody_server_list::serverTypeIsSet() const
{
    return serverTypeIsSet_;
}

void ShowStatusServiceResponseBody_server_list::unsetserverType()
{
    serverTypeIsSet_ = false;
}

std::vector<ShowStatusAppItem>& ShowStatusServiceResponseBody_server_list::getAppList()
{
    return appList_;
}

void ShowStatusServiceResponseBody_server_list::setAppList(const std::vector<ShowStatusAppItem>& value)
{
    appList_ = value;
    appListIsSet_ = true;
}

bool ShowStatusServiceResponseBody_server_list::appListIsSet() const
{
    return appListIsSet_;
}

void ShowStatusServiceResponseBody_server_list::unsetappList()
{
    appListIsSet_ = false;
}

}
}
}
}
}


