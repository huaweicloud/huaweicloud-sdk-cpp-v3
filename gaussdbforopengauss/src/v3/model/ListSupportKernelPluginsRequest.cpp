

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSupportKernelPluginsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSupportKernelPluginsRequest::ListSupportKernelPluginsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListSupportKernelPluginsRequest::~ListSupportKernelPluginsRequest() = default;

void ListSupportKernelPluginsRequest::validate()
{
}

web::json::value ListSupportKernelPluginsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ListSupportKernelPluginsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string ListSupportKernelPluginsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListSupportKernelPluginsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListSupportKernelPluginsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListSupportKernelPluginsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


