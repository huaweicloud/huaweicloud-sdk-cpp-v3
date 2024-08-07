

#include "huaweicloud/vod/v1/model/ProductUrlInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ProductUrlInfo::ProductUrlInfo()
{
    url_ = "";
    urlIsSet_ = false;
}

ProductUrlInfo::~ProductUrlInfo() = default;

void ProductUrlInfo::validate()
{
}

web::json::value ProductUrlInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }

    return val;
}
bool ProductUrlInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ProductUrlInfo::getUrl() const
{
    return url_;
}

void ProductUrlInfo::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ProductUrlInfo::urlIsSet() const
{
    return urlIsSet_;
}

void ProductUrlInfo::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


