

#include "huaweicloud/dds/v3/model/Az2Migrate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




Az2Migrate::Az2Migrate()
{
    code_ = "";
    codeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

Az2Migrate::~Az2Migrate() = default;

void Az2Migrate::validate()
{
}

web::json::value Az2Migrate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool Az2Migrate::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string Az2Migrate::getCode() const
{
    return code_;
}

void Az2Migrate::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool Az2Migrate::codeIsSet() const
{
    return codeIsSet_;
}

void Az2Migrate::unsetcode()
{
    codeIsSet_ = false;
}

std::string Az2Migrate::getDescription() const
{
    return description_;
}

void Az2Migrate::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool Az2Migrate::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void Az2Migrate::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string Az2Migrate::getStatus() const
{
    return status_;
}

void Az2Migrate::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Az2Migrate::statusIsSet() const
{
    return statusIsSet_;
}

void Az2Migrate::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


