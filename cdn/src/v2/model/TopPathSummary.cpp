

#include "huaweicloud/cdn/v2/model/TopPathSummary.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




TopPathSummary::TopPathSummary()
{
    path_ = "";
    pathIsSet_ = false;
    value_ = 0L;
    valueIsSet_ = false;
}

TopPathSummary::~TopPathSummary() = default;

void TopPathSummary::validate()
{
}

web::json::value TopPathSummary::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool TopPathSummary::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string TopPathSummary::getPath() const
{
    return path_;
}

void TopPathSummary::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool TopPathSummary::pathIsSet() const
{
    return pathIsSet_;
}

void TopPathSummary::unsetpath()
{
    pathIsSet_ = false;
}

int64_t TopPathSummary::getValue() const
{
    return value_;
}

void TopPathSummary::setValue(int64_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TopPathSummary::valueIsSet() const
{
    return valueIsSet_;
}

void TopPathSummary::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


