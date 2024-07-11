

#include "huaweicloud/gaussdbforopengauss/v3/model/ListKernelPluginsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListKernelPluginsResponse::ListKernelPluginsResponse()
{
    bodyIsSet_ = false;
}

ListKernelPluginsResponse::~ListKernelPluginsResponse() = default;

void ListKernelPluginsResponse::validate()
{
}

web::json::value ListKernelPluginsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListKernelPluginsResponse::fromJson(const web::json::value& val)
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


std::vector<std::string>& ListKernelPluginsResponse::getBody()
{
    return body_;
}

void ListKernelPluginsResponse::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListKernelPluginsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListKernelPluginsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


