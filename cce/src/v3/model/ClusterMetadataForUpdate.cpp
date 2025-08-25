

#include "huaweicloud/cce/v3/model/ClusterMetadataForUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ClusterMetadataForUpdate::ClusterMetadataForUpdate()
{
    alias_ = "";
    aliasIsSet_ = false;
}

ClusterMetadataForUpdate::~ClusterMetadataForUpdate() = default;

void ClusterMetadataForUpdate::validate()
{
}

web::json::value ClusterMetadataForUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }

    return val;
}
bool ClusterMetadataForUpdate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlias(refVal);
        }
    }
    return ok;
}


std::string ClusterMetadataForUpdate::getAlias() const
{
    return alias_;
}

void ClusterMetadataForUpdate::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool ClusterMetadataForUpdate::aliasIsSet() const
{
    return aliasIsSet_;
}

void ClusterMetadataForUpdate::unsetalias()
{
    aliasIsSet_ = false;
}

}
}
}
}
}


