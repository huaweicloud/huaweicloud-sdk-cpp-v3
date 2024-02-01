

#include "huaweicloud/rds/v3/model/MysqlAvailableZoneInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




MysqlAvailableZoneInfo::MysqlAvailableZoneInfo()
{
    code_ = "";
    codeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

MysqlAvailableZoneInfo::~MysqlAvailableZoneInfo() = default;

void MysqlAvailableZoneInfo::validate()
{
}

web::json::value MysqlAvailableZoneInfo::toJson() const
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
bool MysqlAvailableZoneInfo::fromJson(const web::json::value& val)
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


std::string MysqlAvailableZoneInfo::getCode() const
{
    return code_;
}

void MysqlAvailableZoneInfo::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool MysqlAvailableZoneInfo::codeIsSet() const
{
    return codeIsSet_;
}

void MysqlAvailableZoneInfo::unsetcode()
{
    codeIsSet_ = false;
}

std::string MysqlAvailableZoneInfo::getDescription() const
{
    return description_;
}

void MysqlAvailableZoneInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool MysqlAvailableZoneInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void MysqlAvailableZoneInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


