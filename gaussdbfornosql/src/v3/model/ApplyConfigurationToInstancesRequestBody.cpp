

#include "huaweicloud/gaussdbfornosql/v3/model/ApplyConfigurationToInstancesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ApplyConfigurationToInstancesRequestBody::ApplyConfigurationToInstancesRequestBody()
{
    instanceIdsIsSet_ = false;
}

ApplyConfigurationToInstancesRequestBody::~ApplyConfigurationToInstancesRequestBody() = default;

void ApplyConfigurationToInstancesRequestBody::validate()
{
}

web::json::value ApplyConfigurationToInstancesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdsIsSet_) {
        val[utility::conversions::to_string_t("instance_ids")] = ModelBase::toJson(instanceIds_);
    }

    return val;
}
bool ApplyConfigurationToInstancesRequestBody::fromJson(const web::json::value& val)
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


std::vector<std::string>& ApplyConfigurationToInstancesRequestBody::getInstanceIds()
{
    return instanceIds_;
}

void ApplyConfigurationToInstancesRequestBody::setInstanceIds(const std::vector<std::string>& value)
{
    instanceIds_ = value;
    instanceIdsIsSet_ = true;
}

bool ApplyConfigurationToInstancesRequestBody::instanceIdsIsSet() const
{
    return instanceIdsIsSet_;
}

void ApplyConfigurationToInstancesRequestBody::unsetinstanceIds()
{
    instanceIdsIsSet_ = false;
}

}
}
}
}
}


