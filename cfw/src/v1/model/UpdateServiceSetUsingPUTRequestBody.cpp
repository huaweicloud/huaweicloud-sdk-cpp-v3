

#include "huaweicloud/cfw/v1/model/UpdateServiceSetUsingPUTRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateServiceSetUsingPUTRequestBody::UpdateServiceSetUsingPUTRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

UpdateServiceSetUsingPUTRequestBody::~UpdateServiceSetUsingPUTRequestBody() = default;

void UpdateServiceSetUsingPUTRequestBody::validate()
{
}

web::json::value UpdateServiceSetUsingPUTRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}

bool UpdateServiceSetUsingPUTRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string UpdateServiceSetUsingPUTRequestBody::getName() const
{
    return name_;
}

void UpdateServiceSetUsingPUTRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateServiceSetUsingPUTRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateServiceSetUsingPUTRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateServiceSetUsingPUTRequestBody::getDescription() const
{
    return description_;
}

void UpdateServiceSetUsingPUTRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateServiceSetUsingPUTRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateServiceSetUsingPUTRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


