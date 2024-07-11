

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSupportKernelPluginsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSupportKernelPluginsResponse::ListSupportKernelPluginsResponse()
{
    bodyIsSet_ = false;
}

ListSupportKernelPluginsResponse::~ListSupportKernelPluginsResponse() = default;

void ListSupportKernelPluginsResponse::validate()
{
}

web::json::value ListSupportKernelPluginsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListSupportKernelPluginsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ListSupportKernelPluginsResponse::getBody()
{
    return body_;
}

void ListSupportKernelPluginsResponse::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListSupportKernelPluginsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListSupportKernelPluginsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


