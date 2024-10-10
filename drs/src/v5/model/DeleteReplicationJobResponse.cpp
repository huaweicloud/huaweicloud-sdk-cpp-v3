

#include "huaweicloud/drs/v5/model/DeleteReplicationJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DeleteReplicationJobResponse::DeleteReplicationJobResponse()
{
    bodyIsSet_ = false;
}

DeleteReplicationJobResponse::~DeleteReplicationJobResponse() = default;

void DeleteReplicationJobResponse::validate()
{
}

web::json::value DeleteReplicationJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteReplicationJobResponse::fromJson(const web::json::value& val)
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


Object DeleteReplicationJobResponse::getBody() const
{
    return body_;
}

void DeleteReplicationJobResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteReplicationJobResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteReplicationJobResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


