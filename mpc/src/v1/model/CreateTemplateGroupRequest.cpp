

#include "huaweicloud/mpc/v1/model/CreateTemplateGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateTemplateGroupRequest::CreateTemplateGroupRequest()
{
    bodyIsSet_ = false;
}

CreateTemplateGroupRequest::~CreateTemplateGroupRequest() = default;

void CreateTemplateGroupRequest::validate()
{
}

web::json::value CreateTemplateGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateTemplateGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TransTemplateGroup refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


TransTemplateGroup CreateTemplateGroupRequest::getBody() const
{
    return body_;
}

void CreateTemplateGroupRequest::setBody(const TransTemplateGroup& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTemplateGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTemplateGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


