

#include "huaweicloud/cbr/v1/model/AddVaultResourceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




AddVaultResourceResponse::AddVaultResourceResponse()
{
    addResourceIdsIsSet_ = false;
}

AddVaultResourceResponse::~AddVaultResourceResponse() = default;

void AddVaultResourceResponse::validate()
{
}

web::json::value AddVaultResourceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addResourceIdsIsSet_) {
        val[utility::conversions::to_string_t("add_resource_ids")] = ModelBase::toJson(addResourceIds_);
    }

    return val;
}
bool AddVaultResourceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("add_resource_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("add_resource_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddResourceIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& AddVaultResourceResponse::getAddResourceIds()
{
    return addResourceIds_;
}

void AddVaultResourceResponse::setAddResourceIds(const std::vector<std::string>& value)
{
    addResourceIds_ = value;
    addResourceIdsIsSet_ = true;
}

bool AddVaultResourceResponse::addResourceIdsIsSet() const
{
    return addResourceIdsIsSet_;
}

void AddVaultResourceResponse::unsetaddResourceIds()
{
    addResourceIdsIsSet_ = false;
}

}
}
}
}
}


