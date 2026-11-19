

#include "huaweicloud/gaussdbforopengauss/v3/model/ApplyConfigurationEntityRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ApplyConfigurationEntityRequestBody::ApplyConfigurationEntityRequestBody()
{
    entityIdsIsSet_ = false;
}

ApplyConfigurationEntityRequestBody::~ApplyConfigurationEntityRequestBody() = default;

void ApplyConfigurationEntityRequestBody::validate()
{
}

web::json::value ApplyConfigurationEntityRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(entityIdsIsSet_) {
        val[utility::conversions::to_string_t("entity_ids")] = ModelBase::toJson(entityIds_);
    }

    return val;
}
bool ApplyConfigurationEntityRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("entity_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entity_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntityIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ApplyConfigurationEntityRequestBody::getEntityIds()
{
    return entityIds_;
}

void ApplyConfigurationEntityRequestBody::setEntityIds(const std::vector<std::string>& value)
{
    entityIds_ = value;
    entityIdsIsSet_ = true;
}

bool ApplyConfigurationEntityRequestBody::entityIdsIsSet() const
{
    return entityIdsIsSet_;
}

void ApplyConfigurationEntityRequestBody::unsetentityIds()
{
    entityIdsIsSet_ = false;
}

}
}
}
}
}


