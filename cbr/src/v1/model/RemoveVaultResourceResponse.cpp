

#include "huaweicloud/cbr/v1/model/RemoveVaultResourceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




RemoveVaultResourceResponse::RemoveVaultResourceResponse()
{
    removeResourceIdsIsSet_ = false;
}

RemoveVaultResourceResponse::~RemoveVaultResourceResponse() = default;

void RemoveVaultResourceResponse::validate()
{
}

web::json::value RemoveVaultResourceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(removeResourceIdsIsSet_) {
        val[utility::conversions::to_string_t("remove_resource_ids")] = ModelBase::toJson(removeResourceIds_);
    }

    return val;
}
bool RemoveVaultResourceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("remove_resource_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remove_resource_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoveResourceIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& RemoveVaultResourceResponse::getRemoveResourceIds()
{
    return removeResourceIds_;
}

void RemoveVaultResourceResponse::setRemoveResourceIds(const std::vector<std::string>& value)
{
    removeResourceIds_ = value;
    removeResourceIdsIsSet_ = true;
}

bool RemoveVaultResourceResponse::removeResourceIdsIsSet() const
{
    return removeResourceIdsIsSet_;
}

void RemoveVaultResourceResponse::unsetremoveResourceIds()
{
    removeResourceIdsIsSet_ = false;
}

}
}
}
}
}


