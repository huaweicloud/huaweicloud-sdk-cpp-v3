

#include "huaweicloud/identitycenter/v1/model/ListInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListInstancesResponse::ListInstancesResponse()
{
    instancesIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListInstancesResponse::~ListInstancesResponse() = default;

void ListInstancesResponse::validate()
{
}

web::json::value ListInstancesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListInstancesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<InstanceMetadataEntryDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfoDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<InstanceMetadataEntryDto>& ListInstancesResponse::getInstances()
{
    return instances_;
}

void ListInstancesResponse::setInstances(const std::vector<InstanceMetadataEntryDto>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListInstancesResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListInstancesResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

PageInfoDto ListInstancesResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListInstancesResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListInstancesResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListInstancesResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


