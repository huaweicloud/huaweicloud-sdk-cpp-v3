

#include "huaweicloud/cce/v3/model/PartitionReqBody_metadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PartitionReqBody_metadata::PartitionReqBody_metadata()
{
    name_ = "";
    nameIsSet_ = false;
}

PartitionReqBody_metadata::~PartitionReqBody_metadata() = default;

void PartitionReqBody_metadata::validate()
{
}

web::json::value PartitionReqBody_metadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool PartitionReqBody_metadata::fromJson(const web::json::value& val)
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
    return ok;
}


std::string PartitionReqBody_metadata::getName() const
{
    return name_;
}

void PartitionReqBody_metadata::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PartitionReqBody_metadata::nameIsSet() const
{
    return nameIsSet_;
}

void PartitionReqBody_metadata::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


