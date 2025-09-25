

#include "huaweicloud/codeartspipeline/v2/model/StartPipelineBuildParams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




StartPipelineBuildParams::StartPipelineBuildParams()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

StartPipelineBuildParams::~StartPipelineBuildParams() = default;

void StartPipelineBuildParams::validate()
{
}

web::json::value StartPipelineBuildParams::toJson() const
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
bool StartPipelineBuildParams::fromJson(const web::json::value& val)
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


std::string StartPipelineBuildParams::getName() const
{
    return name_;
}

void StartPipelineBuildParams::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool StartPipelineBuildParams::nameIsSet() const
{
    return nameIsSet_;
}

void StartPipelineBuildParams::unsetname()
{
    nameIsSet_ = false;
}

std::string StartPipelineBuildParams::getValue() const
{
    return value_;
}

void StartPipelineBuildParams::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool StartPipelineBuildParams::valueIsSet() const
{
    return valueIsSet_;
}

void StartPipelineBuildParams::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


