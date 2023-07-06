

#include "huaweicloud/cbr/v1/model/SetVaultResourceResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




SetVaultResourceResponse::SetVaultResourceResponse()
{
    setResourceIdsIsSet_ = false;
}

SetVaultResourceResponse::~SetVaultResourceResponse() = default;

void SetVaultResourceResponse::validate()
{
}

web::json::value SetVaultResourceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(setResourceIdsIsSet_) {
        val[utility::conversions::to_string_t("set_resource_ids")] = ModelBase::toJson(setResourceIds_);
    }

    return val;
}

bool SetVaultResourceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("set_resource_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("set_resource_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetResourceIds(refVal);
        }
    }
    return ok;
}

std::vector<std::string>& SetVaultResourceResponse::getSetResourceIds()
{
    return setResourceIds_;
}

void SetVaultResourceResponse::setSetResourceIds(const std::vector<std::string>& value)
{
    setResourceIds_ = value;
    setResourceIdsIsSet_ = true;
}

bool SetVaultResourceResponse::setResourceIdsIsSet() const
{
    return setResourceIdsIsSet_;
}

void SetVaultResourceResponse::unsetsetResourceIds()
{
    setResourceIdsIsSet_ = false;
}

}
}
}
}
}


