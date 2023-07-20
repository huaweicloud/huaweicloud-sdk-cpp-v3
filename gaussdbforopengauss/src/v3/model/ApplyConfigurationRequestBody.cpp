

#include "huaweicloud/gaussdbforopengauss/v3/model/ApplyConfigurationRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ApplyConfigurationRequestBody::ApplyConfigurationRequestBody()
{
    instanceIdsIsSet_ = false;
}

ApplyConfigurationRequestBody::~ApplyConfigurationRequestBody() = default;

void ApplyConfigurationRequestBody::validate()
{
}

web::json::value ApplyConfigurationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdsIsSet_) {
        val[utility::conversions::to_string_t("instance_ids")] = ModelBase::toJson(instanceIds_);
    }

    return val;
}

bool ApplyConfigurationRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceIds(refVal);
        }
    }
    return ok;
}

std::vector<std::string>& ApplyConfigurationRequestBody::getInstanceIds()
{
    return instanceIds_;
}

void ApplyConfigurationRequestBody::setInstanceIds(const std::vector<std::string>& value)
{
    instanceIds_ = value;
    instanceIdsIsSet_ = true;
}

bool ApplyConfigurationRequestBody::instanceIdsIsSet() const
{
    return instanceIdsIsSet_;
}

void ApplyConfigurationRequestBody::unsetinstanceIds()
{
    instanceIdsIsSet_ = false;
}

}
}
}
}
}


