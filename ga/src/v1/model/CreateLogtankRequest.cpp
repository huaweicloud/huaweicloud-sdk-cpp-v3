

#include "huaweicloud/ga/v1/model/CreateLogtankRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateLogtankRequest::CreateLogtankRequest()
{
    bodyIsSet_ = false;
}

CreateLogtankRequest::~CreateLogtankRequest() = default;

void CreateLogtankRequest::validate()
{
}

web::json::value CreateLogtankRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateLogtankRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateLogtankRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateLogtankRequestBody CreateLogtankRequest::getBody() const
{
    return body_;
}

void CreateLogtankRequest::setBody(const CreateLogtankRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateLogtankRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateLogtankRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


