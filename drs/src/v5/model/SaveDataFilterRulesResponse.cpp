

#include "huaweicloud/drs/v5/model/SaveDataFilterRulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




SaveDataFilterRulesResponse::SaveDataFilterRulesResponse()
{
    bodyIsSet_ = false;
}

SaveDataFilterRulesResponse::~SaveDataFilterRulesResponse() = default;

void SaveDataFilterRulesResponse::validate()
{
}

web::json::value SaveDataFilterRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SaveDataFilterRulesResponse::fromJson(const web::json::value& val)
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


Object SaveDataFilterRulesResponse::getBody() const
{
    return body_;
}

void SaveDataFilterRulesResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SaveDataFilterRulesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void SaveDataFilterRulesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


