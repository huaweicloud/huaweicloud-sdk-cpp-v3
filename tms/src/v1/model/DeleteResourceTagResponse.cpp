

#include "huaweicloud/tms/v1/model/DeleteResourceTagResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




DeleteResourceTagResponse::DeleteResourceTagResponse()
{
    failedResourcesIsSet_ = false;
}

DeleteResourceTagResponse::~DeleteResourceTagResponse() = default;

void DeleteResourceTagResponse::validate()
{
}

web::json::value DeleteResourceTagResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(failedResourcesIsSet_) {
        val[utility::conversions::to_string_t("failed_resources")] = ModelBase::toJson(failedResources_);
    }

    return val;
}

bool DeleteResourceTagResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("failed_resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed_resources"));
        if(!fieldValue.is_null())
        {
            std::vector<TagDeleteResponseItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedResources(refVal);
        }
    }
    return ok;
}


std::vector<TagDeleteResponseItem>& DeleteResourceTagResponse::getFailedResources()
{
    return failedResources_;
}

void DeleteResourceTagResponse::setFailedResources(const std::vector<TagDeleteResponseItem>& value)
{
    failedResources_ = value;
    failedResourcesIsSet_ = true;
}

bool DeleteResourceTagResponse::failedResourcesIsSet() const
{
    return failedResourcesIsSet_;
}

void DeleteResourceTagResponse::unsetfailedResources()
{
    failedResourcesIsSet_ = false;
}

}
}
}
}
}


