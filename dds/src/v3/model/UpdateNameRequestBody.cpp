

#include "huaweicloud/dds/v3/model/UpdateNameRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UpdateNameRequestBody::UpdateNameRequestBody()
{
    newInstanceName_ = "";
    newInstanceNameIsSet_ = false;
}

UpdateNameRequestBody::~UpdateNameRequestBody() = default;

void UpdateNameRequestBody::validate()
{
}

web::json::value UpdateNameRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(newInstanceNameIsSet_) {
        val[utility::conversions::to_string_t("new_instance_name")] = ModelBase::toJson(newInstanceName_);
    }

    return val;
}

bool UpdateNameRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("new_instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewInstanceName(refVal);
        }
    }
    return ok;
}

std::string UpdateNameRequestBody::getNewInstanceName() const
{
    return newInstanceName_;
}

void UpdateNameRequestBody::setNewInstanceName(const std::string& value)
{
    newInstanceName_ = value;
    newInstanceNameIsSet_ = true;
}

bool UpdateNameRequestBody::newInstanceNameIsSet() const
{
    return newInstanceNameIsSet_;
}

void UpdateNameRequestBody::unsetnewInstanceName()
{
    newInstanceNameIsSet_ = false;
}

}
}
}
}
}


