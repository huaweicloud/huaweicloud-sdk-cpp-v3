

#include "huaweicloud/cts/v3/model/Operations.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




Operations::Operations()
{
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    traceNamesIsSet_ = false;
}

Operations::~Operations() = default;

void Operations::validate()
{
}

web::json::value Operations::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(traceNamesIsSet_) {
        val[utility::conversions::to_string_t("trace_names")] = ModelBase::toJson(traceNames_);
    }

    return val;
}

bool Operations::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trace_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trace_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTraceNames(refVal);
        }
    }
    return ok;
}


std::string Operations::getServiceType() const
{
    return serviceType_;
}

void Operations::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool Operations::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void Operations::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string Operations::getResourceType() const
{
    return resourceType_;
}

void Operations::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool Operations::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void Operations::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::vector<std::string>& Operations::getTraceNames()
{
    return traceNames_;
}

void Operations::setTraceNames(const std::vector<std::string>& value)
{
    traceNames_ = value;
    traceNamesIsSet_ = true;
}

bool Operations::traceNamesIsSet() const
{
    return traceNamesIsSet_;
}

void Operations::unsettraceNames()
{
    traceNamesIsSet_ = false;
}

}
}
}
}
}


