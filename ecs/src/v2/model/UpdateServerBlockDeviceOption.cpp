

#include "huaweicloud/ecs/v2/model/UpdateServerBlockDeviceOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateServerBlockDeviceOption::UpdateServerBlockDeviceOption()
{
    deleteOnTermination_ = false;
    deleteOnTerminationIsSet_ = false;
}

UpdateServerBlockDeviceOption::~UpdateServerBlockDeviceOption() = default;

void UpdateServerBlockDeviceOption::validate()
{
}

web::json::value UpdateServerBlockDeviceOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deleteOnTerminationIsSet_) {
        val[utility::conversions::to_string_t("delete_on_termination")] = ModelBase::toJson(deleteOnTermination_);
    }

    return val;
}
bool UpdateServerBlockDeviceOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delete_on_termination"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_on_termination"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteOnTermination(refVal);
        }
    }
    return ok;
}


bool UpdateServerBlockDeviceOption::isDeleteOnTermination() const
{
    return deleteOnTermination_;
}

void UpdateServerBlockDeviceOption::setDeleteOnTermination(bool value)
{
    deleteOnTermination_ = value;
    deleteOnTerminationIsSet_ = true;
}

bool UpdateServerBlockDeviceOption::deleteOnTerminationIsSet() const
{
    return deleteOnTerminationIsSet_;
}

void UpdateServerBlockDeviceOption::unsetdeleteOnTermination()
{
    deleteOnTerminationIsSet_ = false;
}

}
}
}
}
}


