

#include "huaweicloud/gaussdbfornosql/v3/model/BatchUpgradeDatabaseVersionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




BatchUpgradeDatabaseVersionRequest::BatchUpgradeDatabaseVersionRequest()
{
    bodyIsSet_ = false;
}

BatchUpgradeDatabaseVersionRequest::~BatchUpgradeDatabaseVersionRequest() = default;

void BatchUpgradeDatabaseVersionRequest::validate()
{
}

web::json::value BatchUpgradeDatabaseVersionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchUpgradeDatabaseVersionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchUpgradeDatabaseVersionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchUpgradeDatabaseVersionRequestBody BatchUpgradeDatabaseVersionRequest::getBody() const
{
    return body_;
}

void BatchUpgradeDatabaseVersionRequest::setBody(const BatchUpgradeDatabaseVersionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpgradeDatabaseVersionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpgradeDatabaseVersionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


