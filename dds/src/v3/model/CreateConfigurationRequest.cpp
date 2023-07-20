

#include "huaweicloud/dds/v3/model/CreateConfigurationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




CreateConfigurationRequest::CreateConfigurationRequest()
{
    bodyIsSet_ = false;
}

CreateConfigurationRequest::~CreateConfigurationRequest() = default;

void CreateConfigurationRequest::validate()
{
}

web::json::value CreateConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateConfigurationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateConfigurationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

CreateConfigurationRequestBody CreateConfigurationRequest::getBody() const
{
    return body_;
}

void CreateConfigurationRequest::setBody(const CreateConfigurationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


