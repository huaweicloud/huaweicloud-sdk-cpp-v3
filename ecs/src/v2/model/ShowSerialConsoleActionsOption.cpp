

#include "huaweicloud/ecs/v2/model/ShowSerialConsoleActionsOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowSerialConsoleActionsOption::ShowSerialConsoleActionsOption()
{
    url_ = "";
    urlIsSet_ = false;
}

ShowSerialConsoleActionsOption::~ShowSerialConsoleActionsOption() = default;

void ShowSerialConsoleActionsOption::validate()
{
}

web::json::value ShowSerialConsoleActionsOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }

    return val;
}
bool ShowSerialConsoleActionsOption::fromJson(const web::json::value& val)
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


std::string ShowSerialConsoleActionsOption::getUrl() const
{
    return url_;
}

void ShowSerialConsoleActionsOption::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ShowSerialConsoleActionsOption::urlIsSet() const
{
    return urlIsSet_;
}

void ShowSerialConsoleActionsOption::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


