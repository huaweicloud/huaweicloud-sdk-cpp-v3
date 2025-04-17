

#include "huaweicloud/vod/v1/model/RefreshResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




RefreshResult::RefreshResult()
{
    url_ = "";
    urlIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

RefreshResult::~RefreshResult() = default;

void RefreshResult::validate()
{
}

web::json::value RefreshResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool RefreshResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string RefreshResult::getUrl() const
{
    return url_;
}

void RefreshResult::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool RefreshResult::urlIsSet() const
{
    return urlIsSet_;
}

void RefreshResult::unseturl()
{
    urlIsSet_ = false;
}

std::string RefreshResult::getStatus() const
{
    return status_;
}

void RefreshResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RefreshResult::statusIsSet() const
{
    return statusIsSet_;
}

void RefreshResult::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


