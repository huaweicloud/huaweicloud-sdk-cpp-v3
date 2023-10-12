

#include "huaweicloud/kms/v2/model/ShowUserInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ShowUserInstancesResponse::ShowUserInstancesResponse()
{
    instanceNum_ = 0;
    instanceNumIsSet_ = false;
}

ShowUserInstancesResponse::~ShowUserInstancesResponse() = default;

void ShowUserInstancesResponse::validate()
{
}

web::json::value ShowUserInstancesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceNumIsSet_) {
        val[utility::conversions::to_string_t("instance_num")] = ModelBase::toJson(instanceNum_);
    }

    return val;
}
bool ShowUserInstancesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceNum(refVal);
        }
    }
    return ok;
}


int32_t ShowUserInstancesResponse::getInstanceNum() const
{
    return instanceNum_;
}

void ShowUserInstancesResponse::setInstanceNum(int32_t value)
{
    instanceNum_ = value;
    instanceNumIsSet_ = true;
}

bool ShowUserInstancesResponse::instanceNumIsSet() const
{
    return instanceNumIsSet_;
}

void ShowUserInstancesResponse::unsetinstanceNum()
{
    instanceNumIsSet_ = false;
}

}
}
}
}
}


