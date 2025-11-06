

#include "huaweicloud/codeartsrepo/v4/model/RemoteMirrorDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RemoteMirrorDto::RemoteMirrorDto()
{
    url_ = "";
    urlIsSet_ = false;
}

RemoteMirrorDto::~RemoteMirrorDto() = default;

void RemoteMirrorDto::validate()
{
}

web::json::value RemoteMirrorDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }

    return val;
}
bool RemoteMirrorDto::fromJson(const web::json::value& val)
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


std::string RemoteMirrorDto::getUrl() const
{
    return url_;
}

void RemoteMirrorDto::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool RemoteMirrorDto::urlIsSet() const
{
    return urlIsSet_;
}

void RemoteMirrorDto::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


