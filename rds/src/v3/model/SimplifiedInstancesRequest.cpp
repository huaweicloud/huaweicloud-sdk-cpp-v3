

#include "huaweicloud/rds/v3/model/SimplifiedInstancesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SimplifiedInstancesRequest::SimplifiedInstancesRequest()
{
    instanceIdsIsSet_ = false;
}

SimplifiedInstancesRequest::~SimplifiedInstancesRequest() = default;

void SimplifiedInstancesRequest::validate()
{
}

web::json::value SimplifiedInstancesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdsIsSet_) {
        val[utility::conversions::to_string_t("instance_ids")] = ModelBase::toJson(instanceIds_);
    }

    return val;
}

bool SimplifiedInstancesRequest::fromJson(const web::json::value& val)
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

std::vector<std::string>& SimplifiedInstancesRequest::getInstanceIds()
{
    return instanceIds_;
}

void SimplifiedInstancesRequest::setInstanceIds(const std::vector<std::string>& value)
{
    instanceIds_ = value;
    instanceIdsIsSet_ = true;
}

bool SimplifiedInstancesRequest::instanceIdsIsSet() const
{
    return instanceIdsIsSet_;
}

void SimplifiedInstancesRequest::unsetinstanceIds()
{
    instanceIdsIsSet_ = false;
}

}
}
}
}
}


