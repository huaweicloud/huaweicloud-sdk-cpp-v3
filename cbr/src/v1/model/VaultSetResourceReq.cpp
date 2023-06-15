

#include "huaweicloud/cbr/v1/model/VaultSetResourceReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




VaultSetResourceReq::VaultSetResourceReq()
{
    resourceIdsIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
}

VaultSetResourceReq::~VaultSetResourceReq() = default;

void VaultSetResourceReq::validate()
{
}

web::json::value VaultSetResourceReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdsIsSet_) {
        val[utility::conversions::to_string_t("resource_ids")] = ModelBase::toJson(resourceIds_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }

    return val;
}

bool VaultSetResourceReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& VaultSetResourceReq::getResourceIds()
{
    return resourceIds_;
}

void VaultSetResourceReq::setResourceIds(const std::vector<std::string>& value)
{
    resourceIds_ = value;
    resourceIdsIsSet_ = true;
}

bool VaultSetResourceReq::resourceIdsIsSet() const
{
    return resourceIdsIsSet_;
}

void VaultSetResourceReq::unsetresourceIds()
{
    resourceIdsIsSet_ = false;
}

std::string VaultSetResourceReq::getAction() const
{
    return action_;
}

void VaultSetResourceReq::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool VaultSetResourceReq::actionIsSet() const
{
    return actionIsSet_;
}

void VaultSetResourceReq::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


