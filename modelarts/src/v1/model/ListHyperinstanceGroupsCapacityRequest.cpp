

#include "huaweicloud/modelarts/v1/model/ListHyperinstanceGroupsCapacityRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListHyperinstanceGroupsCapacityRequest::ListHyperinstanceGroupsCapacityRequest()
{
    bodyIsSet_ = false;
}

ListHyperinstanceGroupsCapacityRequest::~ListHyperinstanceGroupsCapacityRequest() = default;

void ListHyperinstanceGroupsCapacityRequest::validate()
{
}

web::json::value ListHyperinstanceGroupsCapacityRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListHyperinstanceGroupsCapacityRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            HyperinstanceGroupsCapacityRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


HyperinstanceGroupsCapacityRequest ListHyperinstanceGroupsCapacityRequest::getBody() const
{
    return body_;
}

void ListHyperinstanceGroupsCapacityRequest::setBody(const HyperinstanceGroupsCapacityRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListHyperinstanceGroupsCapacityRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListHyperinstanceGroupsCapacityRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


