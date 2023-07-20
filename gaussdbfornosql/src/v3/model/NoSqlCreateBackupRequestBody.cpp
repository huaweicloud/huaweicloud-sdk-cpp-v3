

#include "huaweicloud/gaussdbfornosql/v3/model/NoSqlCreateBackupRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




NoSqlCreateBackupRequestBody::NoSqlCreateBackupRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

NoSqlCreateBackupRequestBody::~NoSqlCreateBackupRequestBody() = default;

void NoSqlCreateBackupRequestBody::validate()
{
}

web::json::value NoSqlCreateBackupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}

bool NoSqlCreateBackupRequestBody::fromJson(const web::json::value& val)
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

std::string NoSqlCreateBackupRequestBody::getName() const
{
    return name_;
}

void NoSqlCreateBackupRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NoSqlCreateBackupRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void NoSqlCreateBackupRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string NoSqlCreateBackupRequestBody::getDescription() const
{
    return description_;
}

void NoSqlCreateBackupRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NoSqlCreateBackupRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NoSqlCreateBackupRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


