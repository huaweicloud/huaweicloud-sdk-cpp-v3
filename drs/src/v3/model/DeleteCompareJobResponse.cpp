

#include "huaweicloud/drs/v3/model/DeleteCompareJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




DeleteCompareJobResponse::DeleteCompareJobResponse()
{
    bodyIsSet_ = false;
}

DeleteCompareJobResponse::~DeleteCompareJobResponse() = default;

void DeleteCompareJobResponse::validate()
{
}

web::json::value DeleteCompareJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteCompareJobResponse::fromJson(const web::json::value& val)
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


Object DeleteCompareJobResponse::getBody() const
{
    return body_;
}

void DeleteCompareJobResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteCompareJobResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteCompareJobResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


