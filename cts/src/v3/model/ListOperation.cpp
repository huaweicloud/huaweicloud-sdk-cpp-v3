

#include "huaweicloud/cts/v3/model/ListOperation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




ListOperation::ListOperation()
{
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    operationListIsSet_ = false;
}

ListOperation::~ListOperation() = default;

void ListOperation::validate()
{
}

web::json::value ListOperation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(operationListIsSet_) {
        val[utility::conversions::to_string_t("operation_list")] = ModelBase::toJson(operationList_);
    }

    return val;
}
bool ListOperation::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("operation_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationList(refVal);
        }
    }
    return ok;
}


std::string ListOperation::getServiceType() const
{
    return serviceType_;
}

void ListOperation::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool ListOperation::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void ListOperation::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string ListOperation::getResourceType() const
{
    return resourceType_;
}

void ListOperation::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ListOperation::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ListOperation::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::vector<std::string>& ListOperation::getOperationList()
{
    return operationList_;
}

void ListOperation::setOperationList(const std::vector<std::string>& value)
{
    operationList_ = value;
    operationListIsSet_ = true;
}

bool ListOperation::operationListIsSet() const
{
    return operationListIsSet_;
}

void ListOperation::unsetoperationList()
{
    operationListIsSet_ = false;
}

}
}
}
}
}


