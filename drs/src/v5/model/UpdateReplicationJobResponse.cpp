

#include "huaweicloud/drs/v5/model/UpdateReplicationJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UpdateReplicationJobResponse::UpdateReplicationJobResponse()
{
    bodyIsSet_ = false;
}

UpdateReplicationJobResponse::~UpdateReplicationJobResponse() = default;

void UpdateReplicationJobResponse::validate()
{
}

web::json::value UpdateReplicationJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateReplicationJobResponse::fromJson(const web::json::value& val)
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


Object UpdateReplicationJobResponse::getBody() const
{
    return body_;
}

void UpdateReplicationJobResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateReplicationJobResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateReplicationJobResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


