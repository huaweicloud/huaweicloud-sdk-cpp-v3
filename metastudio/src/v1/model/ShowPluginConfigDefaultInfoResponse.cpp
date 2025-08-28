

#include "huaweicloud/metastudio/v1/model/ShowPluginConfigDefaultInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowPluginConfigDefaultInfoResponse::ShowPluginConfigDefaultInfoResponse()
{
    defaultPluginListIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowPluginConfigDefaultInfoResponse::~ShowPluginConfigDefaultInfoResponse() = default;

void ShowPluginConfigDefaultInfoResponse::validate()
{
}

web::json::value ShowPluginConfigDefaultInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(defaultPluginListIsSet_) {
        val[utility::conversions::to_string_t("default_plugin_list")] = ModelBase::toJson(defaultPluginList_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowPluginConfigDefaultInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("default_plugin_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_plugin_list"));
        if(!fieldValue.is_null())
        {
            std::vector<DefaultPluginInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultPluginList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::vector<DefaultPluginInfo>& ShowPluginConfigDefaultInfoResponse::getDefaultPluginList()
{
    return defaultPluginList_;
}

void ShowPluginConfigDefaultInfoResponse::setDefaultPluginList(const std::vector<DefaultPluginInfo>& value)
{
    defaultPluginList_ = value;
    defaultPluginListIsSet_ = true;
}

bool ShowPluginConfigDefaultInfoResponse::defaultPluginListIsSet() const
{
    return defaultPluginListIsSet_;
}

void ShowPluginConfigDefaultInfoResponse::unsetdefaultPluginList()
{
    defaultPluginListIsSet_ = false;
}

std::string ShowPluginConfigDefaultInfoResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowPluginConfigDefaultInfoResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowPluginConfigDefaultInfoResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowPluginConfigDefaultInfoResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


