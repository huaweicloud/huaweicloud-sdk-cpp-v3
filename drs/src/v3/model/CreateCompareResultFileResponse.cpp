

#include "huaweicloud/drs/v3/model/CreateCompareResultFileResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




CreateCompareResultFileResponse::CreateCompareResultFileResponse()
{
    bodyIsSet_ = false;
}

CreateCompareResultFileResponse::~CreateCompareResultFileResponse() = default;

void CreateCompareResultFileResponse::validate()
{
}

web::json::value CreateCompareResultFileResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateCompareResultFileResponse::fromJson(const web::json::value& val)
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


Object CreateCompareResultFileResponse::getBody() const
{
    return body_;
}

void CreateCompareResultFileResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateCompareResultFileResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateCompareResultFileResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


