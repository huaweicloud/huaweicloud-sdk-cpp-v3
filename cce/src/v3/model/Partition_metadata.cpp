

#include "huaweicloud/cce/v3/model/Partition_metadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




Partition_metadata::Partition_metadata()
{
    name_ = "";
    nameIsSet_ = false;
    creationTimestamp_ = "";
    creationTimestampIsSet_ = false;
}

Partition_metadata::~Partition_metadata() = default;

void Partition_metadata::validate()
{
}

web::json::value Partition_metadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(creationTimestampIsSet_) {
        val[utility::conversions::to_string_t("creationTimestamp")] = ModelBase::toJson(creationTimestamp_);
    }

    return val;
}
bool Partition_metadata::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("creationTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creationTimestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationTimestamp(refVal);
        }
    }
    return ok;
}


std::string Partition_metadata::getName() const
{
    return name_;
}

void Partition_metadata::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Partition_metadata::nameIsSet() const
{
    return nameIsSet_;
}

void Partition_metadata::unsetname()
{
    nameIsSet_ = false;
}

std::string Partition_metadata::getCreationTimestamp() const
{
    return creationTimestamp_;
}

void Partition_metadata::setCreationTimestamp(const std::string& value)
{
    creationTimestamp_ = value;
    creationTimestampIsSet_ = true;
}

bool Partition_metadata::creationTimestampIsSet() const
{
    return creationTimestampIsSet_;
}

void Partition_metadata::unsetcreationTimestamp()
{
    creationTimestampIsSet_ = false;
}

}
}
}
}
}


