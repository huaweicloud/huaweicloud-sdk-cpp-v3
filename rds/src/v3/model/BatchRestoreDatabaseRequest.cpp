

#include "huaweicloud/rds/v3/model/BatchRestoreDatabaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BatchRestoreDatabaseRequest::BatchRestoreDatabaseRequest()
{
    bodyIsSet_ = false;
}

BatchRestoreDatabaseRequest::~BatchRestoreDatabaseRequest() = default;

void BatchRestoreDatabaseRequest::validate()
{
}

web::json::value BatchRestoreDatabaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchRestoreDatabaseRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PostgreSQLRestoreDatabaseRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


PostgreSQLRestoreDatabaseRequest BatchRestoreDatabaseRequest::getBody() const
{
    return body_;
}

void BatchRestoreDatabaseRequest::setBody(const PostgreSQLRestoreDatabaseRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchRestoreDatabaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchRestoreDatabaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


