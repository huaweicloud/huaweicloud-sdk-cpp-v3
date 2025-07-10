

#include "huaweicloud/codeartsbuild/v3/model/JobPipelineInfoParamsItems.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




JobPipelineInfoParamsItems::JobPipelineInfoParamsItems()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

JobPipelineInfoParamsItems::~JobPipelineInfoParamsItems() = default;

void JobPipelineInfoParamsItems::validate()
{
}

web::json::value JobPipelineInfoParamsItems::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool JobPipelineInfoParamsItems::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string JobPipelineInfoParamsItems::getName() const
{
    return name_;
}

void JobPipelineInfoParamsItems::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool JobPipelineInfoParamsItems::nameIsSet() const
{
    return nameIsSet_;
}

void JobPipelineInfoParamsItems::unsetname()
{
    nameIsSet_ = false;
}

std::string JobPipelineInfoParamsItems::getValue() const
{
    return value_;
}

void JobPipelineInfoParamsItems::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool JobPipelineInfoParamsItems::valueIsSet() const
{
    return valueIsSet_;
}

void JobPipelineInfoParamsItems::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


