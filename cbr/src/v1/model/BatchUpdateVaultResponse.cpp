

#include "huaweicloud/cbr/v1/model/BatchUpdateVaultResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




BatchUpdateVaultResponse::BatchUpdateVaultResponse()
{
    updatedVaultsIdIsSet_ = false;
}

BatchUpdateVaultResponse::~BatchUpdateVaultResponse() = default;

void BatchUpdateVaultResponse::validate()
{
}

web::json::value BatchUpdateVaultResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(updatedVaultsIdIsSet_) {
        val[utility::conversions::to_string_t("updated_vaults_id")] = ModelBase::toJson(updatedVaultsId_);
    }

    return val;
}

bool BatchUpdateVaultResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("updated_vaults_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_vaults_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedVaultsId(refVal);
        }
    }
    return ok;
}

std::vector<std::string>& BatchUpdateVaultResponse::getUpdatedVaultsId()
{
    return updatedVaultsId_;
}

void BatchUpdateVaultResponse::setUpdatedVaultsId(const std::vector<std::string>& value)
{
    updatedVaultsId_ = value;
    updatedVaultsIdIsSet_ = true;
}

bool BatchUpdateVaultResponse::updatedVaultsIdIsSet() const
{
    return updatedVaultsIdIsSet_;
}

void BatchUpdateVaultResponse::unsetupdatedVaultsId()
{
    updatedVaultsIdIsSet_ = false;
}

}
}
}
}
}


