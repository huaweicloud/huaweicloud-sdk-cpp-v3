

#include "huaweicloud/eip/v2/model/ResourceResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ResourceResp::ResourceResp()
{
    resourcesIsSet_ = false;
}

ResourceResp::~ResourceResp() = default;

void ResourceResp::validate()
{
}

web::json::value ResourceResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}
bool ResourceResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<QuotaShowResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}


std::vector<QuotaShowResp>& ResourceResp::getResources()
{
    return resources_;
}

void ResourceResp::setResources(const std::vector<QuotaShowResp>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ResourceResp::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ResourceResp::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


