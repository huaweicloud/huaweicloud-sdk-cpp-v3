

#include "huaweicloud/vod/v1/model/ProductDelFailInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ProductDelFailInfo::ProductDelFailInfo()
{
    url_ = "";
    urlIsSet_ = false;
    failReason_ = "";
    failReasonIsSet_ = false;
}

ProductDelFailInfo::~ProductDelFailInfo() = default;

void ProductDelFailInfo::validate()
{
}

web::json::value ProductDelFailInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(failReasonIsSet_) {
        val[utility::conversions::to_string_t("fail_reason")] = ModelBase::toJson(failReason_);
    }

    return val;
}
bool ProductDelFailInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("fail_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailReason(refVal);
        }
    }
    return ok;
}


std::string ProductDelFailInfo::getUrl() const
{
    return url_;
}

void ProductDelFailInfo::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ProductDelFailInfo::urlIsSet() const
{
    return urlIsSet_;
}

void ProductDelFailInfo::unseturl()
{
    urlIsSet_ = false;
}

std::string ProductDelFailInfo::getFailReason() const
{
    return failReason_;
}

void ProductDelFailInfo::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool ProductDelFailInfo::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void ProductDelFailInfo::unsetfailReason()
{
    failReasonIsSet_ = false;
}

}
}
}
}
}


