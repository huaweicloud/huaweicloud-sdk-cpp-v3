

#include "huaweicloud/modelarts/v1/model/DeleteImageGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteImageGroupResponse::DeleteImageGroupResponse()
{
    bodyIsSet_ = false;
}

DeleteImageGroupResponse::~DeleteImageGroupResponse() = default;

void DeleteImageGroupResponse::validate()
{
}

web::json::value DeleteImageGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteImageGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


Object DeleteImageGroupResponse::getBody() const
{
    return body_;
}

void DeleteImageGroupResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteImageGroupResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteImageGroupResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


