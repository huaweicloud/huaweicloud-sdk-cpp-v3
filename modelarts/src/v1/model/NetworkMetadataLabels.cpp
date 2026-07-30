

#include "huaweicloud/modelarts/v1/model/NetworkMetadataLabels.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NetworkMetadataLabels::NetworkMetadataLabels()
{
    osModelartsName_ = "";
    osModelartsNameIsSet_ = false;
    osModelartsWorkspaceId_ = "";
    osModelartsWorkspaceIdIsSet_ = false;
}

NetworkMetadataLabels::~NetworkMetadataLabels() = default;

void NetworkMetadataLabels::validate()
{
}

web::json::value NetworkMetadataLabels::toJson() const
{
    web::json::value val = web::json::value::object();

    if(osModelartsNameIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/name")] = ModelBase::toJson(osModelartsName_);
    }
    if(osModelartsWorkspaceIdIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/workspace.id")] = ModelBase::toJson(osModelartsWorkspaceId_);
    }

    return val;
}
bool NetworkMetadataLabels::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/workspace.id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/workspace.id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsWorkspaceId(refVal);
        }
    }
    return ok;
}


std::string NetworkMetadataLabels::getOsModelartsName() const
{
    return osModelartsName_;
}

void NetworkMetadataLabels::setOsModelartsName(const std::string& value)
{
    osModelartsName_ = value;
    osModelartsNameIsSet_ = true;
}

bool NetworkMetadataLabels::osModelartsNameIsSet() const
{
    return osModelartsNameIsSet_;
}

void NetworkMetadataLabels::unsetosModelartsName()
{
    osModelartsNameIsSet_ = false;
}

std::string NetworkMetadataLabels::getOsModelartsWorkspaceId() const
{
    return osModelartsWorkspaceId_;
}

void NetworkMetadataLabels::setOsModelartsWorkspaceId(const std::string& value)
{
    osModelartsWorkspaceId_ = value;
    osModelartsWorkspaceIdIsSet_ = true;
}

bool NetworkMetadataLabels::osModelartsWorkspaceIdIsSet() const
{
    return osModelartsWorkspaceIdIsSet_;
}

void NetworkMetadataLabels::unsetosModelartsWorkspaceId()
{
    osModelartsWorkspaceIdIsSet_ = false;
}

}
}
}
}
}


