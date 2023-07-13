

#include "huaweicloud/tms/v1/model/CreateResourceTagResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




CreateResourceTagResponse::CreateResourceTagResponse()
{
    failedResourcesIsSet_ = false;
}

CreateResourceTagResponse::~CreateResourceTagResponse() = default;

void CreateResourceTagResponse::validate()
{
}

web::json::value CreateResourceTagResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(failedResourcesIsSet_) {
        val[utility::conversions::to_string_t("failed_resources")] = ModelBase::toJson(failedResources_);
    }

    return val;
}

bool CreateResourceTagResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("failed_resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed_resources"));
        if(!fieldValue.is_null())
        {
            std::vector<TagCreateResponseItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedResources(refVal);
        }
    }
    return ok;
}

std::vector<TagCreateResponseItem>& CreateResourceTagResponse::getFailedResources()
{
    return failedResources_;
}

void CreateResourceTagResponse::setFailedResources(const std::vector<TagCreateResponseItem>& value)
{
    failedResources_ = value;
    failedResourcesIsSet_ = true;
}

bool CreateResourceTagResponse::failedResourcesIsSet() const
{
    return failedResourcesIsSet_;
}

void CreateResourceTagResponse::unsetfailedResources()
{
    failedResourcesIsSet_ = false;
}

}
}
}
}
}


