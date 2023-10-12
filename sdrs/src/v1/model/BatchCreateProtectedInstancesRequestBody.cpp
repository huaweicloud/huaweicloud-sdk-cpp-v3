

#include "huaweicloud/sdrs/v1/model/BatchCreateProtectedInstancesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




BatchCreateProtectedInstancesRequestBody::BatchCreateProtectedInstancesRequestBody()
{
    protectedInstancesIsSet_ = false;
}

BatchCreateProtectedInstancesRequestBody::~BatchCreateProtectedInstancesRequestBody() = default;

void BatchCreateProtectedInstancesRequestBody::validate()
{
}

web::json::value BatchCreateProtectedInstancesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protectedInstancesIsSet_) {
        val[utility::conversions::to_string_t("protected_instances")] = ModelBase::toJson(protectedInstances_);
    }

    return val;
}
bool BatchCreateProtectedInstancesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("protected_instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_instances"));
        if(!fieldValue.is_null())
        {
            BatchCreateProtectedInstancesRequestParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedInstances(refVal);
        }
    }
    return ok;
}


BatchCreateProtectedInstancesRequestParams BatchCreateProtectedInstancesRequestBody::getProtectedInstances() const
{
    return protectedInstances_;
}

void BatchCreateProtectedInstancesRequestBody::setProtectedInstances(const BatchCreateProtectedInstancesRequestParams& value)
{
    protectedInstances_ = value;
    protectedInstancesIsSet_ = true;
}

bool BatchCreateProtectedInstancesRequestBody::protectedInstancesIsSet() const
{
    return protectedInstancesIsSet_;
}

void BatchCreateProtectedInstancesRequestBody::unsetprotectedInstances()
{
    protectedInstancesIsSet_ = false;
}

}
}
}
}
}


