

#include "huaweicloud/smn/v2/model/ListCloudServiceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListCloudServiceResponse::ListCloudServiceResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    cloudServicesIsSet_ = false;
}

ListCloudServiceResponse::~ListCloudServiceResponse() = default;

void ListCloudServiceResponse::validate()
{
}

web::json::value ListCloudServiceResponse::toJson() const
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
bool ListCloudServiceResponse::fromJson(const web::json::value& val)
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


std::string ListCloudServiceResponse::getRequestId() const
{
    return requestId_;
}

void ListCloudServiceResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListCloudServiceResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListCloudServiceResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::vector<ListCloudServiceResponseItemInfo>& ListCloudServiceResponse::getCloudServices()
{
    return cloudServices_;
}

void ListCloudServiceResponse::setCloudServices(const std::vector<ListCloudServiceResponseItemInfo>& value)
{
    cloudServices_ = value;
    cloudServicesIsSet_ = true;
}

bool ListCloudServiceResponse::cloudServicesIsSet() const
{
    return cloudServicesIsSet_;
}

void ListCloudServiceResponse::unsetcloudServices()
{
    cloudServicesIsSet_ = false;
}

}
}
}
}
}


