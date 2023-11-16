

#include "huaweicloud/codeartsbuild/v3/model/CreateTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CreateTemplatesRequest::CreateTemplatesRequest()
{
    bodyIsSet_ = false;
}

CreateTemplatesRequest::~CreateTemplatesRequest() = default;

void CreateTemplatesRequest::validate()
{
}

web::json::value CreateTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateTemplatesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateTemplatesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateTemplatesRequestBody CreateTemplatesRequest::getBody() const
{
    return body_;
}

void CreateTemplatesRequest::setBody(const CreateTemplatesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTemplatesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTemplatesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


