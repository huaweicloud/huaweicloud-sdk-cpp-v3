

#include "huaweicloud/modelarts/v1/model/UpdateServerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateServerRequest::UpdateServerRequest()
{
    name_ = "";
    nameIsSet_ = false;
}

UpdateServerRequest::~UpdateServerRequest() = default;

void UpdateServerRequest::validate()
{
}

web::json::value UpdateServerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool UpdateServerRequest::fromJson(const web::json::value& val)
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


std::string UpdateServerRequest::getName() const
{
    return name_;
}

void UpdateServerRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateServerRequest::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateServerRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


