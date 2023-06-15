

#include "huaweicloud/cbr/v1/model/VaultRemoveResourceReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




VaultRemoveResourceReq::VaultRemoveResourceReq()
{
    resourceIdsIsSet_ = false;
}

VaultRemoveResourceReq::~VaultRemoveResourceReq() = default;

void VaultRemoveResourceReq::validate()
{
}

web::json::value VaultRemoveResourceReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdsIsSet_) {
        val[utility::conversions::to_string_t("resource_ids")] = ModelBase::toJson(resourceIds_);
    }

    return val;
}

bool VaultRemoveResourceReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& VaultRemoveResourceReq::getResourceIds()
{
    return resourceIds_;
}

void VaultRemoveResourceReq::setResourceIds(const std::vector<std::string>& value)
{
    resourceIds_ = value;
    resourceIdsIsSet_ = true;
}

bool VaultRemoveResourceReq::resourceIdsIsSet() const
{
    return resourceIdsIsSet_;
}

void VaultRemoveResourceReq::unsetresourceIds()
{
    resourceIdsIsSet_ = false;
}

}
}
}
}
}


