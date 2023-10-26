

#include "huaweicloud/antiddos/v1/model/CreateDefaultConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




CreateDefaultConfigRequest::CreateDefaultConfigRequest()
{
    bodyIsSet_ = false;
}

CreateDefaultConfigRequest::~CreateDefaultConfigRequest() = default;

void CreateDefaultConfigRequest::validate()
{
}

web::json::value CreateDefaultConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateDefaultConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DdosConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


DdosConfig CreateDefaultConfigRequest::getBody() const
{
    return body_;
}

void CreateDefaultConfigRequest::setBody(const DdosConfig& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDefaultConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDefaultConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


