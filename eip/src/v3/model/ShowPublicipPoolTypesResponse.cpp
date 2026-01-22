

#include "huaweicloud/eip/v3/model/ShowPublicipPoolTypesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ShowPublicipPoolTypesResponse::ShowPublicipPoolTypesResponse()
{
    publicipPoolTypesIsSet_ = false;
}

ShowPublicipPoolTypesResponse::~ShowPublicipPoolTypesResponse() = default;

void ShowPublicipPoolTypesResponse::validate()
{
}

web::json::value ShowPublicipPoolTypesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipPoolTypesIsSet_) {
        val[utility::conversions::to_string_t("publicip-pool-types")] = ModelBase::toJson(publicipPoolTypes_);
    }

    return val;
}
bool ShowPublicipPoolTypesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip-pool-types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip-pool-types"));
        if(!fieldValue.is_null())
        {
            PublicPoolType refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipPoolTypes(refVal);
        }
    }
    return ok;
}


PublicPoolType ShowPublicipPoolTypesResponse::getPublicipPoolTypes() const
{
    return publicipPoolTypes_;
}

void ShowPublicipPoolTypesResponse::setPublicipPoolTypes(const PublicPoolType& value)
{
    publicipPoolTypes_ = value;
    publicipPoolTypesIsSet_ = true;
}

bool ShowPublicipPoolTypesResponse::publicipPoolTypesIsSet() const
{
    return publicipPoolTypesIsSet_;
}

void ShowPublicipPoolTypesResponse::unsetpublicipPoolTypes()
{
    publicipPoolTypesIsSet_ = false;
}

}
}
}
}
}


