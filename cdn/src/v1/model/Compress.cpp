

#include "huaweicloud/cdn/v1/model/Compress.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




Compress::Compress()
{
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

Compress::~Compress() = default;

void Compress::validate()
{
}

web::json::value Compress::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}

bool Compress::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
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

std::string Compress::getStatus() const
{
    return status_;
}

void Compress::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Compress::statusIsSet() const
{
    return statusIsSet_;
}

void Compress::unsetstatus()
{
    statusIsSet_ = false;
}

std::string Compress::getType() const
{
    return type_;
}

void Compress::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Compress::typeIsSet() const
{
    return typeIsSet_;
}

void Compress::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


