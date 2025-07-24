

#include "huaweicloud/cloudtest/v1/model/ShowConcurrencyPackageUsingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowConcurrencyPackageUsingRequest::ShowConcurrencyPackageUsingRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    testType_ = "";
    testTypeIsSet_ = false;
}

ShowConcurrencyPackageUsingRequest::~ShowConcurrencyPackageUsingRequest() = default;

void ShowConcurrencyPackageUsingRequest::validate()
{
}

web::json::value ShowConcurrencyPackageUsingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(testTypeIsSet_) {
        val[utility::conversions::to_string_t("test_type")] = ModelBase::toJson(testType_);
    }

    return val;
}
bool ShowConcurrencyPackageUsingRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("test_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestType(refVal);
        }
    }
    return ok;
}


std::string ShowConcurrencyPackageUsingRequest::getServiceId() const
{
    return serviceId_;
}

void ShowConcurrencyPackageUsingRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ShowConcurrencyPackageUsingRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ShowConcurrencyPackageUsingRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string ShowConcurrencyPackageUsingRequest::getTestType() const
{
    return testType_;
}

void ShowConcurrencyPackageUsingRequest::setTestType(const std::string& value)
{
    testType_ = value;
    testTypeIsSet_ = true;
}

bool ShowConcurrencyPackageUsingRequest::testTypeIsSet() const
{
    return testTypeIsSet_;
}

void ShowConcurrencyPackageUsingRequest::unsettestType()
{
    testTypeIsSet_ = false;
}

}
}
}
}
}


