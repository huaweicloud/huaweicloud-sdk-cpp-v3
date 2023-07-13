

#include "huaweicloud/frs/v2/model/TypeInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




TypeInfo::TypeInfo()
{
    type_ = "";
    typeIsSet_ = false;
}

TypeInfo::~TypeInfo() = default;

void TypeInfo::validate()
{
}

web::json::value TypeInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}

bool TypeInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}

std::string TypeInfo::getType() const
{
    return type_;
}

void TypeInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TypeInfo::typeIsSet() const
{
    return typeIsSet_;
}

void TypeInfo::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


