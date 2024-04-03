

#include "huaweicloud/kms/v2/model/GenerateMacRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




GenerateMacRequest::GenerateMacRequest()
{
    bodyIsSet_ = false;
}

GenerateMacRequest::~GenerateMacRequest() = default;

void GenerateMacRequest::validate()
{
}

web::json::value GenerateMacRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool GenerateMacRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            GenerateMacRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


GenerateMacRequestBody GenerateMacRequest::getBody() const
{
    return body_;
}

void GenerateMacRequest::setBody(const GenerateMacRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool GenerateMacRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void GenerateMacRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


