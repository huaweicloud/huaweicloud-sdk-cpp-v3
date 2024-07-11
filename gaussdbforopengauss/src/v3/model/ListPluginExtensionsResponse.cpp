

#include "huaweicloud/gaussdbforopengauss/v3/model/ListPluginExtensionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListPluginExtensionsResponse::ListPluginExtensionsResponse()
{
    bodyIsSet_ = false;
}

ListPluginExtensionsResponse::~ListPluginExtensionsResponse() = default;

void ListPluginExtensionsResponse::validate()
{
}

web::json::value ListPluginExtensionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListPluginExtensionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<PluginExtensions> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<PluginExtensions>& ListPluginExtensionsResponse::getBody()
{
    return body_;
}

void ListPluginExtensionsResponse::setBody(const std::vector<PluginExtensions>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListPluginExtensionsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListPluginExtensionsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


