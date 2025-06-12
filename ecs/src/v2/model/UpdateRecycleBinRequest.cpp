

#include "huaweicloud/ecs/v2/model/UpdateRecycleBinRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateRecycleBinRequest::UpdateRecycleBinRequest()
{
    bodyIsSet_ = false;
}

UpdateRecycleBinRequest::~UpdateRecycleBinRequest() = default;

void UpdateRecycleBinRequest::validate()
{
}

web::json::value UpdateRecycleBinRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateRecycleBinRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateRecycleBinReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


UpdateRecycleBinReq UpdateRecycleBinRequest::getBody() const
{
    return body_;
}

void UpdateRecycleBinRequest::setBody(const UpdateRecycleBinReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRecycleBinRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRecycleBinRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


