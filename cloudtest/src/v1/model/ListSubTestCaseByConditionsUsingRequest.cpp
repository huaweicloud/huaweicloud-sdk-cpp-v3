

#include "huaweicloud/cloudtest/v1/model/ListSubTestCaseByConditionsUsingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListSubTestCaseByConditionsUsingRequest::ListSubTestCaseByConditionsUsingRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListSubTestCaseByConditionsUsingRequest::~ListSubTestCaseByConditionsUsingRequest() = default;

void ListSubTestCaseByConditionsUsingRequest::validate()
{
}

web::json::value ListSubTestCaseByConditionsUsingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListSubTestCaseByConditionsUsingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SubTaskCaseQuery refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListSubTestCaseByConditionsUsingRequest::getServiceId() const
{
    return serviceId_;
}

void ListSubTestCaseByConditionsUsingRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ListSubTestCaseByConditionsUsingRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ListSubTestCaseByConditionsUsingRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

SubTaskCaseQuery ListSubTestCaseByConditionsUsingRequest::getBody() const
{
    return body_;
}

void ListSubTestCaseByConditionsUsingRequest::setBody(const SubTaskCaseQuery& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListSubTestCaseByConditionsUsingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListSubTestCaseByConditionsUsingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


