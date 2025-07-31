

#include "huaweicloud/live/v1/model/CreateStreamForbiddenOnceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateStreamForbiddenOnceRequest::CreateStreamForbiddenOnceRequest()
{
    bodyIsSet_ = false;
}

CreateStreamForbiddenOnceRequest::~CreateStreamForbiddenOnceRequest() = default;

void CreateStreamForbiddenOnceRequest::validate()
{
}

web::json::value CreateStreamForbiddenOnceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateStreamForbiddenOnceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            StreamForbiddenOnceSetting refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


StreamForbiddenOnceSetting CreateStreamForbiddenOnceRequest::getBody() const
{
    return body_;
}

void CreateStreamForbiddenOnceRequest::setBody(const StreamForbiddenOnceSetting& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateStreamForbiddenOnceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateStreamForbiddenOnceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


