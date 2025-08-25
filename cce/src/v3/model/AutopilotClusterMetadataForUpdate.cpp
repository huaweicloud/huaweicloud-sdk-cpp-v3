

#include "huaweicloud/cce/v3/model/AutopilotClusterMetadataForUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AutopilotClusterMetadataForUpdate::AutopilotClusterMetadataForUpdate()
{
    alias_ = "";
    aliasIsSet_ = false;
}

AutopilotClusterMetadataForUpdate::~AutopilotClusterMetadataForUpdate() = default;

void AutopilotClusterMetadataForUpdate::validate()
{
}

web::json::value AutopilotClusterMetadataForUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }

    return val;
}
bool AutopilotClusterMetadataForUpdate::fromJson(const web::json::value& val)
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


std::string AutopilotClusterMetadataForUpdate::getAlias() const
{
    return alias_;
}

void AutopilotClusterMetadataForUpdate::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool AutopilotClusterMetadataForUpdate::aliasIsSet() const
{
    return aliasIsSet_;
}

void AutopilotClusterMetadataForUpdate::unsetalias()
{
    aliasIsSet_ = false;
}

}
}
}
}
}


