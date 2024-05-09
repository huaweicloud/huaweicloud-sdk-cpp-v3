

#include "huaweicloud/drs/v3/model/CreateObjectLevelCompareJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




CreateObjectLevelCompareJobResponse::CreateObjectLevelCompareJobResponse()
{
    bodyIsSet_ = false;
}

CreateObjectLevelCompareJobResponse::~CreateObjectLevelCompareJobResponse() = default;

void CreateObjectLevelCompareJobResponse::validate()
{
}

web::json::value CreateObjectLevelCompareJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateObjectLevelCompareJobResponse::fromJson(const web::json::value& val)
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


Object CreateObjectLevelCompareJobResponse::getBody() const
{
    return body_;
}

void CreateObjectLevelCompareJobResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateObjectLevelCompareJobResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateObjectLevelCompareJobResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


