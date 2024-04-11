

#include "huaweicloud/drs/v3/model/StartPromptlyDataLevelTableCompareJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




StartPromptlyDataLevelTableCompareJobResponse::StartPromptlyDataLevelTableCompareJobResponse()
{
    bodyIsSet_ = false;
}

StartPromptlyDataLevelTableCompareJobResponse::~StartPromptlyDataLevelTableCompareJobResponse() = default;

void StartPromptlyDataLevelTableCompareJobResponse::validate()
{
}

web::json::value StartPromptlyDataLevelTableCompareJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool StartPromptlyDataLevelTableCompareJobResponse::fromJson(const web::json::value& val)
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


Object StartPromptlyDataLevelTableCompareJobResponse::getBody() const
{
    return body_;
}

void StartPromptlyDataLevelTableCompareJobResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartPromptlyDataLevelTableCompareJobResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartPromptlyDataLevelTableCompareJobResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


