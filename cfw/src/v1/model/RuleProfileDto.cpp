

#include "huaweicloud/cfw/v1/model/RuleProfileDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




RuleProfileDto::RuleProfileDto()
{
    url_ = "";
    urlIsSet_ = false;
}

RuleProfileDto::~RuleProfileDto() = default;

void RuleProfileDto::validate()
{
}

web::json::value RuleProfileDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }

    return val;
}
bool RuleProfileDto::fromJson(const web::json::value& val)
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


std::string RuleProfileDto::getUrl() const
{
    return url_;
}

void RuleProfileDto::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool RuleProfileDto::urlIsSet() const
{
    return urlIsSet_;
}

void RuleProfileDto::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


