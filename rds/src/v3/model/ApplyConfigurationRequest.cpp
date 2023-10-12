

#include "huaweicloud/rds/v3/model/ApplyConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ApplyConfigurationRequest::ApplyConfigurationRequest()
{
    instanceIdsIsSet_ = false;
}

ApplyConfigurationRequest::~ApplyConfigurationRequest() = default;

void ApplyConfigurationRequest::validate()
{
}

web::json::value ApplyConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdsIsSet_) {
        val[utility::conversions::to_string_t("instance_ids")] = ModelBase::toJson(instanceIds_);
    }

    return val;
}
bool ApplyConfigurationRequest::fromJson(const web::json::value& val)
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


std::vector<std::string>& ApplyConfigurationRequest::getInstanceIds()
{
    return instanceIds_;
}

void ApplyConfigurationRequest::setInstanceIds(const std::vector<std::string>& value)
{
    instanceIds_ = value;
    instanceIdsIsSet_ = true;
}

bool ApplyConfigurationRequest::instanceIdsIsSet() const
{
    return instanceIdsIsSet_;
}

void ApplyConfigurationRequest::unsetinstanceIds()
{
    instanceIdsIsSet_ = false;
}

}
}
}
}
}


