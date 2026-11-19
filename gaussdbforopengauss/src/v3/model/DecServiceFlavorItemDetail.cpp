

#include "huaweicloud/gaussdbforopengauss/v3/model/DecServiceFlavorItemDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DecServiceFlavorItemDetail::DecServiceFlavorItemDetail()
{
    typeCode_ = "";
    typeCodeIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
}

DecServiceFlavorItemDetail::~DecServiceFlavorItemDetail() = default;

void DecServiceFlavorItemDetail::validate()
{
}

web::json::value DecServiceFlavorItemDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeCodeIsSet_) {
        val[utility::conversions::to_string_t("type_code")] = ModelBase::toJson(typeCode_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }

    return val;
}
bool DecServiceFlavorItemDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTypeCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    return ok;
}


std::string DecServiceFlavorItemDetail::getTypeCode() const
{
    return typeCode_;
}

void DecServiceFlavorItemDetail::setTypeCode(const std::string& value)
{
    typeCode_ = value;
    typeCodeIsSet_ = true;
}

bool DecServiceFlavorItemDetail::typeCodeIsSet() const
{
    return typeCodeIsSet_;
}

void DecServiceFlavorItemDetail::unsettypeCode()
{
    typeCodeIsSet_ = false;
}

std::string DecServiceFlavorItemDetail::getCode() const
{
    return code_;
}

void DecServiceFlavorItemDetail::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool DecServiceFlavorItemDetail::codeIsSet() const
{
    return codeIsSet_;
}

void DecServiceFlavorItemDetail::unsetcode()
{
    codeIsSet_ = false;
}

}
}
}
}
}


