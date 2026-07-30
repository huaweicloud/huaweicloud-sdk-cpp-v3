

#include "huaweicloud/modelarts/v1/model/JobDescription.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobDescription::JobDescription()
{
    description_ = "";
    descriptionIsSet_ = false;
}

JobDescription::~JobDescription() = default;

void JobDescription::validate()
{
}

web::json::value JobDescription::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool JobDescription::fromJson(const web::json::value& val)
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


std::string JobDescription::getDescription() const
{
    return description_;
}

void JobDescription::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool JobDescription::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void JobDescription::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


