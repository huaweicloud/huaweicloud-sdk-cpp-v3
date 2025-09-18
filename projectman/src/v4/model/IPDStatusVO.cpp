

#include "huaweicloud/projectman/v4/model/IPDStatusVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IPDStatusVO::IPDStatusVO()
{
    code_ = "";
    codeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    belonging_ = "";
    belongingIsSet_ = false;
}

IPDStatusVO::~IPDStatusVO() = default;

void IPDStatusVO::validate()
{
}

web::json::value IPDStatusVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(belongingIsSet_) {
        val[utility::conversions::to_string_t("belonging")] = ModelBase::toJson(belonging_);
    }

    return val;
}
bool IPDStatusVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("belonging"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("belonging"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBelonging(refVal);
        }
    }
    return ok;
}


std::string IPDStatusVO::getCode() const
{
    return code_;
}

void IPDStatusVO::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool IPDStatusVO::codeIsSet() const
{
    return codeIsSet_;
}

void IPDStatusVO::unsetcode()
{
    codeIsSet_ = false;
}

std::string IPDStatusVO::getName() const
{
    return name_;
}

void IPDStatusVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IPDStatusVO::nameIsSet() const
{
    return nameIsSet_;
}

void IPDStatusVO::unsetname()
{
    nameIsSet_ = false;
}

std::string IPDStatusVO::getBelonging() const
{
    return belonging_;
}

void IPDStatusVO::setBelonging(const std::string& value)
{
    belonging_ = value;
    belongingIsSet_ = true;
}

bool IPDStatusVO::belongingIsSet() const
{
    return belongingIsSet_;
}

void IPDStatusVO::unsetbelonging()
{
    belongingIsSet_ = false;
}

}
}
}
}
}


