

#include "huaweicloud/dbss/v1/model/DeleteInstancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteInstancesRequest::DeleteInstancesRequest()
{
    bodyIsSet_ = false;
}

DeleteInstancesRequest::~DeleteInstancesRequest() = default;

void DeleteInstancesRequest::validate()
{
}

web::json::value DeleteInstancesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteInstancesRequest::fromJson(const web::json::value& val)
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


DeleteInstanceDemandRequest DeleteInstancesRequest::getBody() const
{
    return body_;
}

void DeleteInstancesRequest::setBody(const DeleteInstanceDemandRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteInstancesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteInstancesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


