

#include "huaweicloud/drs/v5/model/AssociateSmnTopicResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




AssociateSmnTopicResponse::AssociateSmnTopicResponse()
{
    bodyIsSet_ = false;
}

AssociateSmnTopicResponse::~AssociateSmnTopicResponse() = default;

void AssociateSmnTopicResponse::validate()
{
}

web::json::value AssociateSmnTopicResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AssociateSmnTopicResponse::fromJson(const web::json::value& val)
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


Object AssociateSmnTopicResponse::getBody() const
{
    return body_;
}

void AssociateSmnTopicResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AssociateSmnTopicResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void AssociateSmnTopicResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


