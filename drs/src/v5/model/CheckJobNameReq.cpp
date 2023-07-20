

#include "huaweicloud/drs/v5/model/CheckJobNameReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CheckJobNameReq::CheckJobNameReq()
{
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

CheckJobNameReq::~CheckJobNameReq() = default;

void CheckJobNameReq::validate()
{
}

web::json::value CheckJobNameReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}

bool CheckJobNameReq::fromJson(const web::json::value& val)
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

std::string CheckJobNameReq::getName() const
{
    return name_;
}

void CheckJobNameReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CheckJobNameReq::nameIsSet() const
{
    return nameIsSet_;
}

void CheckJobNameReq::unsetname()
{
    nameIsSet_ = false;
}

std::string CheckJobNameReq::getType() const
{
    return type_;
}

void CheckJobNameReq::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CheckJobNameReq::typeIsSet() const
{
    return typeIsSet_;
}

void CheckJobNameReq::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


