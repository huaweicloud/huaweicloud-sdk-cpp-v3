

#include "huaweicloud/dds/v3/model/ApplyConfigurationRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ApplyConfigurationRequestBody::ApplyConfigurationRequestBody()
{
    entityIdsIsSet_ = false;
}

ApplyConfigurationRequestBody::~ApplyConfigurationRequestBody() = default;

void ApplyConfigurationRequestBody::validate()
{
}

web::json::value ApplyConfigurationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(entityIdsIsSet_) {
        val[utility::conversions::to_string_t("entity_ids")] = ModelBase::toJson(entityIds_);
    }

    return val;
}

bool ApplyConfigurationRequestBody::fromJson(const web::json::value& val)
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

std::vector<std::string>& ApplyConfigurationRequestBody::getEntityIds()
{
    return entityIds_;
}

void ApplyConfigurationRequestBody::setEntityIds(const std::vector<std::string>& value)
{
    entityIds_ = value;
    entityIdsIsSet_ = true;
}

bool ApplyConfigurationRequestBody::entityIdsIsSet() const
{
    return entityIdsIsSet_;
}

void ApplyConfigurationRequestBody::unsetentityIds()
{
    entityIdsIsSet_ = false;
}

}
}
}
}
}


