

#include "huaweicloud/gaussdbforopengauss/v3/model/UpdateNameRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpdateNameRequestBody::UpdateNameRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
}

UpdateNameRequestBody::~UpdateNameRequestBody() = default;

void UpdateNameRequestBody::validate()
{
}

web::json::value UpdateNameRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool UpdateNameRequestBody::fromJson(const web::json::value& val)
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


std::string UpdateNameRequestBody::getName() const
{
    return name_;
}

void UpdateNameRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateNameRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateNameRequestBody::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


