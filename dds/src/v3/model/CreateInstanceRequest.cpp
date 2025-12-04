

#include "huaweicloud/dds/v3/model/CreateInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




CreateInstanceRequest::CreateInstanceRequest()
{
    bodyIsSet_ = false;
}

CreateInstanceRequest::~CreateInstanceRequest() = default;

void CreateInstanceRequest::validate()
{
}

web::json::value CreateInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateInstanceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateInstanceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateInstanceRequestBody CreateInstanceRequest::getBody() const
{
    return body_;
}

void CreateInstanceRequest::setBody(const CreateInstanceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


