

#include "huaweicloud/projectman/v4/model/CreateProjectV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateProjectV4Request::CreateProjectV4Request()
{
    bodyIsSet_ = false;
}

CreateProjectV4Request::~CreateProjectV4Request() = default;

void CreateProjectV4Request::validate()
{
}

web::json::value CreateProjectV4Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateProjectV4Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateProjectV4RequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateProjectV4RequestBody CreateProjectV4Request::getBody() const
{
    return body_;
}

void CreateProjectV4Request::setBody(const CreateProjectV4RequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateProjectV4Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateProjectV4Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


