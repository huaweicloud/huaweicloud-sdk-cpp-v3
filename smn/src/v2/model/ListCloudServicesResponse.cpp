

#include "huaweicloud/smn/v2/model/ListCloudServicesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListCloudServicesResponse::ListCloudServicesResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    cloudServicesIsSet_ = false;
}

ListCloudServicesResponse::~ListCloudServicesResponse() = default;

void ListCloudServicesResponse::validate()
{
}

web::json::value ListCloudServicesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(cloudServicesIsSet_) {
        val[utility::conversions::to_string_t("cloud_services")] = ModelBase::toJson(cloudServices_);
    }

    return val;
}
bool ListCloudServicesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cloud_services"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloud_services"));
        if(!fieldValue.is_null())
        {
            std::vector<ListCloudServiceResponseItemInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudServices(refVal);
        }
    }
    return ok;
}


std::string ListCloudServicesResponse::getRequestId() const
{
    return requestId_;
}

void ListCloudServicesResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListCloudServicesResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListCloudServicesResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::vector<ListCloudServiceResponseItemInfo>& ListCloudServicesResponse::getCloudServices()
{
    return cloudServices_;
}

void ListCloudServicesResponse::setCloudServices(const std::vector<ListCloudServiceResponseItemInfo>& value)
{
    cloudServices_ = value;
    cloudServicesIsSet_ = true;
}

bool ListCloudServicesResponse::cloudServicesIsSet() const
{
    return cloudServicesIsSet_;
}

void ListCloudServicesResponse::unsetcloudServices()
{
    cloudServicesIsSet_ = false;
}

}
}
}
}
}


