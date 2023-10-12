

#include "huaweicloud/gaussdb/v3/model/MysqlProxyAvailable.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlProxyAvailable::MysqlProxyAvailable()
{
    code_ = "";
    codeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

MysqlProxyAvailable::~MysqlProxyAvailable() = default;

void MysqlProxyAvailable::validate()
{
}

web::json::value MysqlProxyAvailable::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool MysqlProxyAvailable::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string MysqlProxyAvailable::getCode() const
{
    return code_;
}

void MysqlProxyAvailable::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool MysqlProxyAvailable::codeIsSet() const
{
    return codeIsSet_;
}

void MysqlProxyAvailable::unsetcode()
{
    codeIsSet_ = false;
}

std::string MysqlProxyAvailable::getDescription() const
{
    return description_;
}

void MysqlProxyAvailable::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool MysqlProxyAvailable::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void MysqlProxyAvailable::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


