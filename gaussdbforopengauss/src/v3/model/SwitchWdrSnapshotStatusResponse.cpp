

#include "huaweicloud/gaussdbforopengauss/v3/model/SwitchWdrSnapshotStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SwitchWdrSnapshotStatusResponse::SwitchWdrSnapshotStatusResponse()
{
    bodyIsSet_ = false;
}

SwitchWdrSnapshotStatusResponse::~SwitchWdrSnapshotStatusResponse() = default;

void SwitchWdrSnapshotStatusResponse::validate()
{
}

web::json::value SwitchWdrSnapshotStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SwitchWdrSnapshotStatusResponse::fromJson(const web::json::value& val)
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


Object SwitchWdrSnapshotStatusResponse::getBody() const
{
    return body_;
}

void SwitchWdrSnapshotStatusResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchWdrSnapshotStatusResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchWdrSnapshotStatusResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


