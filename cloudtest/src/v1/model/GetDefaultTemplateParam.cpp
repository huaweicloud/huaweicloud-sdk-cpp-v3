

#include "huaweicloud/cloudtest/v1/model/GetDefaultTemplateParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




GetDefaultTemplateParam::GetDefaultTemplateParam()
{
    name_ = "";
    nameIsSet_ = false;
}

GetDefaultTemplateParam::~GetDefaultTemplateParam() = default;

void GetDefaultTemplateParam::validate()
{
}

web::json::value GetDefaultTemplateParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool GetDefaultTemplateParam::fromJson(const web::json::value& val)
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


std::string GetDefaultTemplateParam::getName() const
{
    return name_;
}

void GetDefaultTemplateParam::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GetDefaultTemplateParam::nameIsSet() const
{
    return nameIsSet_;
}

void GetDefaultTemplateParam::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


