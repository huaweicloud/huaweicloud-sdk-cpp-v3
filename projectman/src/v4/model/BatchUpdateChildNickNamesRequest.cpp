

#include "huaweicloud/projectman/v4/model/BatchUpdateChildNickNamesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchUpdateChildNickNamesRequest::BatchUpdateChildNickNamesRequest()
{
    bodyIsSet_ = false;
}

BatchUpdateChildNickNamesRequest::~BatchUpdateChildNickNamesRequest() = default;

void BatchUpdateChildNickNamesRequest::validate()
{
}

web::json::value BatchUpdateChildNickNamesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchUpdateChildNickNamesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchUpdateChildUserNickNamesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchUpdateChildUserNickNamesRequestBody BatchUpdateChildNickNamesRequest::getBody() const
{
    return body_;
}

void BatchUpdateChildNickNamesRequest::setBody(const BatchUpdateChildUserNickNamesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateChildNickNamesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateChildNickNamesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


