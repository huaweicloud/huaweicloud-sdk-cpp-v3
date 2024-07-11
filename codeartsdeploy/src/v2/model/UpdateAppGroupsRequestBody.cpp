

#include "huaweicloud/codeartsdeploy/v2/model/UpdateAppGroupsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




UpdateAppGroupsRequestBody::UpdateAppGroupsRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
}

UpdateAppGroupsRequestBody::~UpdateAppGroupsRequestBody() = default;

void UpdateAppGroupsRequestBody::validate()
{
}

web::json::value UpdateAppGroupsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool UpdateAppGroupsRequestBody::fromJson(const web::json::value& val)
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


std::string UpdateAppGroupsRequestBody::getName() const
{
    return name_;
}

void UpdateAppGroupsRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateAppGroupsRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateAppGroupsRequestBody::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


