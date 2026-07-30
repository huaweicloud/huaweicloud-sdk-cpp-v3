

#include "huaweicloud/modelarts/v1/model/ListHyperinstanceClustersCapacityRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListHyperinstanceClustersCapacityRequest::ListHyperinstanceClustersCapacityRequest()
{
    bodyIsSet_ = false;
}

ListHyperinstanceClustersCapacityRequest::~ListHyperinstanceClustersCapacityRequest() = default;

void ListHyperinstanceClustersCapacityRequest::validate()
{
}

web::json::value ListHyperinstanceClustersCapacityRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListHyperinstanceClustersCapacityRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            HyperinstanceClustersCapacityRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


HyperinstanceClustersCapacityRequest ListHyperinstanceClustersCapacityRequest::getBody() const
{
    return body_;
}

void ListHyperinstanceClustersCapacityRequest::setBody(const HyperinstanceClustersCapacityRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListHyperinstanceClustersCapacityRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListHyperinstanceClustersCapacityRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


