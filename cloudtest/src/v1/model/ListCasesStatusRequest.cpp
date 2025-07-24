

#include "huaweicloud/cloudtest/v1/model/ListCasesStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListCasesStatusRequest::ListCasesStatusRequest()
{
    testServiceId_ = "";
    testServiceIdIsSet_ = false;
    body_ = "";
    bodyIsSet_ = false;
}

ListCasesStatusRequest::~ListCasesStatusRequest() = default;

void ListCasesStatusRequest::validate()
{
}

web::json::value ListCasesStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(testServiceIdIsSet_) {
        val[utility::conversions::to_string_t("testServiceId")] = ModelBase::toJson(testServiceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListCasesStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("testServiceId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testServiceId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListCasesStatusRequest::getTestServiceId() const
{
    return testServiceId_;
}

void ListCasesStatusRequest::setTestServiceId(const std::string& value)
{
    testServiceId_ = value;
    testServiceIdIsSet_ = true;
}

bool ListCasesStatusRequest::testServiceIdIsSet() const
{
    return testServiceIdIsSet_;
}

void ListCasesStatusRequest::unsettestServiceId()
{
    testServiceIdIsSet_ = false;
}

std::string ListCasesStatusRequest::getBody() const
{
    return body_;
}

void ListCasesStatusRequest::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListCasesStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListCasesStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


