

#include "huaweicloud/organizations/v1/model/UpdateAccountReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




UpdateAccountReqBody::UpdateAccountReqBody()
{
    description_ = "";
    descriptionIsSet_ = false;
}

UpdateAccountReqBody::~UpdateAccountReqBody() = default;

void UpdateAccountReqBody::validate()
{
}

web::json::value UpdateAccountReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool UpdateAccountReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string UpdateAccountReqBody::getDescription() const
{
    return description_;
}

void UpdateAccountReqBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateAccountReqBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateAccountReqBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


