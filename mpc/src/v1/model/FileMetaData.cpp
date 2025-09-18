

#include "huaweicloud/mpc/v1/model/FileMetaData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




FileMetaData::FileMetaData()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

FileMetaData::~FileMetaData() = default;

void FileMetaData::validate()
{
}

web::json::value FileMetaData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool FileMetaData::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string FileMetaData::getName() const
{
    return name_;
}

void FileMetaData::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool FileMetaData::nameIsSet() const
{
    return nameIsSet_;
}

void FileMetaData::unsetname()
{
    nameIsSet_ = false;
}

std::string FileMetaData::getValue() const
{
    return value_;
}

void FileMetaData::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool FileMetaData::valueIsSet() const
{
    return valueIsSet_;
}

void FileMetaData::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


