

#include "huaweicloud/cce/v3/model/ClusterNodeInformationMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ClusterNodeInformationMetadata::ClusterNodeInformationMetadata()
{
    name_ = "";
    nameIsSet_ = false;
}

ClusterNodeInformationMetadata::~ClusterNodeInformationMetadata() = default;

void ClusterNodeInformationMetadata::validate()
{
}

web::json::value ClusterNodeInformationMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ClusterNodeInformationMetadata::fromJson(const web::json::value& val)
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


std::string ClusterNodeInformationMetadata::getName() const
{
    return name_;
}

void ClusterNodeInformationMetadata::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ClusterNodeInformationMetadata::nameIsSet() const
{
    return nameIsSet_;
}

void ClusterNodeInformationMetadata::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


