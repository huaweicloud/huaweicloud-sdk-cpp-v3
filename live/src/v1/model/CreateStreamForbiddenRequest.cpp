

#include "huaweicloud/live/v1/model/CreateStreamForbiddenRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateStreamForbiddenRequest::CreateStreamForbiddenRequest()
{
    bodyIsSet_ = false;
}

CreateStreamForbiddenRequest::~CreateStreamForbiddenRequest() = default;

void CreateStreamForbiddenRequest::validate()
{
}

web::json::value CreateStreamForbiddenRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateStreamForbiddenRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            StreamForbiddenSetting refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

StreamForbiddenSetting CreateStreamForbiddenRequest::getBody() const
{
    return body_;
}

void CreateStreamForbiddenRequest::setBody(const StreamForbiddenSetting& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateStreamForbiddenRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateStreamForbiddenRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


