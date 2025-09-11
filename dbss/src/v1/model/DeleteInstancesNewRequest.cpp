

#include "huaweicloud/dbss/v1/model/DeleteInstancesNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteInstancesNewRequest::DeleteInstancesNewRequest()
{
    bodyIsSet_ = false;
}

DeleteInstancesNewRequest::~DeleteInstancesNewRequest() = default;

void DeleteInstancesNewRequest::validate()
{
}

web::json::value DeleteInstancesNewRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteInstancesNewRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteInstanceDemandRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


DeleteInstanceDemandRequest DeleteInstancesNewRequest::getBody() const
{
    return body_;
}

void DeleteInstancesNewRequest::setBody(const DeleteInstanceDemandRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteInstancesNewRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteInstancesNewRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


