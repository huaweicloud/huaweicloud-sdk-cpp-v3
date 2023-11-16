

#include "huaweicloud/aad/v1/model/UpdatePackageNameRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




UpdatePackageNameRequestBody::UpdatePackageNameRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
}

UpdatePackageNameRequestBody::~UpdatePackageNameRequestBody() = default;

void UpdatePackageNameRequestBody::validate()
{
}

web::json::value UpdatePackageNameRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool UpdatePackageNameRequestBody::fromJson(const web::json::value& val)
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
    return ok;
}


std::string UpdatePackageNameRequestBody::getName() const
{
    return name_;
}

void UpdatePackageNameRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdatePackageNameRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void UpdatePackageNameRequestBody::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


