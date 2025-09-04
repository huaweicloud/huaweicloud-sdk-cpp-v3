

#include "huaweicloud/cdn/v2/model/SetStatsConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




SetStatsConfigRequest::SetStatsConfigRequest()
{
    bodyIsSet_ = false;
}

SetStatsConfigRequest::~SetStatsConfigRequest() = default;

void SetStatsConfigRequest::validate()
{
}

web::json::value SetStatsConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetStatsConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SetStatsConfigBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


SetStatsConfigBody SetStatsConfigRequest::getBody() const
{
    return body_;
}

void SetStatsConfigRequest::setBody(const SetStatsConfigBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetStatsConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetStatsConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


