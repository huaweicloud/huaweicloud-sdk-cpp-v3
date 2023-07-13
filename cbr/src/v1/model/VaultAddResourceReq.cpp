

#include "huaweicloud/cbr/v1/model/VaultAddResourceReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




VaultAddResourceReq::VaultAddResourceReq()
{
    resourcesIsSet_ = false;
}

VaultAddResourceReq::~VaultAddResourceReq() = default;

void VaultAddResourceReq::validate()
{
}

web::json::value VaultAddResourceReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}

bool VaultAddResourceReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceCreate> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}

std::vector<ResourceCreate>& VaultAddResourceReq::getResources()
{
    return resources_;
}

void VaultAddResourceReq::setResources(const std::vector<ResourceCreate>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool VaultAddResourceReq::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void VaultAddResourceReq::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


