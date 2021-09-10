

#include "huaweicloud/vod/v1/model/PreheatingResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




PreheatingResult::PreheatingResult()
{
    url_ = "";
    urlIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

PreheatingResult::~PreheatingResult() = default;

void PreheatingResult::validate()
{
}

web::json::value PreheatingResult::toJson() const
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

bool PreheatingResult::fromJson(const web::json::value& val)
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


std::string PreheatingResult::getUrl() const
{
    return url_;
}

void PreheatingResult::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool PreheatingResult::urlIsSet() const
{
    return urlIsSet_;
}

void PreheatingResult::unseturl()
{
    urlIsSet_ = false;
}

std::string PreheatingResult::getStatus() const
{
    return status_;
}

void PreheatingResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PreheatingResult::statusIsSet() const
{
    return statusIsSet_;
}

void PreheatingResult::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


