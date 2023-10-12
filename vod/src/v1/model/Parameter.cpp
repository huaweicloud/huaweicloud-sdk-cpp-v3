

#include "huaweicloud/vod/v1/model/Parameter.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




Parameter::Parameter()
{
    format_ = "";
    formatIsSet_ = false;
}

Parameter::~Parameter() = default;

void Parameter::validate()
{
}

web::json::value Parameter::toJson() const
{
    web::json::value val = web::json::value::object();

    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }

    return val;
}
bool Parameter::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    return ok;
}


std::string Parameter::getFormat() const
{
    return format_;
}

void Parameter::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool Parameter::formatIsSet() const
{
    return formatIsSet_;
}

void Parameter::unsetformat()
{
    formatIsSet_ = false;
}

}
}
}
}
}


