

#include "huaweicloud/modelarts/v1/model/PoolLabelsCreation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolLabelsCreation::PoolLabelsCreation()
{
    osModelartsName_ = "";
    osModelartsNameIsSet_ = false;
    osModelartsWorkspaceId_ = "";
    osModelartsWorkspaceIdIsSet_ = false;
    osModelartsNodePrefix_ = "";
    osModelartsNodePrefixIsSet_ = false;
}

PoolLabelsCreation::~PoolLabelsCreation() = default;

void PoolLabelsCreation::validate()
{
}

web::json::value PoolLabelsCreation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(osModelartsNameIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/name")] = ModelBase::toJson(osModelartsName_);
    }
    if(osModelartsWorkspaceIdIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/workspace.id")] = ModelBase::toJson(osModelartsWorkspaceId_);
    }
    if(osModelartsNodePrefixIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/node.prefix")] = ModelBase::toJson(osModelartsNodePrefix_);
    }

    return val;
}
bool PoolLabelsCreation::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/node.prefix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/node.prefix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsNodePrefix(refVal);
        }
    }
    return ok;
}


std::string PoolLabelsCreation::getOsModelartsName() const
{
    return osModelartsName_;
}

void PoolLabelsCreation::setOsModelartsName(const std::string& value)
{
    osModelartsName_ = value;
    osModelartsNameIsSet_ = true;
}

bool PoolLabelsCreation::osModelartsNameIsSet() const
{
    return osModelartsNameIsSet_;
}

void PoolLabelsCreation::unsetosModelartsName()
{
    osModelartsNameIsSet_ = false;
}

std::string PoolLabelsCreation::getOsModelartsWorkspaceId() const
{
    return osModelartsWorkspaceId_;
}

void PoolLabelsCreation::setOsModelartsWorkspaceId(const std::string& value)
{
    osModelartsWorkspaceId_ = value;
    osModelartsWorkspaceIdIsSet_ = true;
}

bool PoolLabelsCreation::osModelartsWorkspaceIdIsSet() const
{
    return osModelartsWorkspaceIdIsSet_;
}

void PoolLabelsCreation::unsetosModelartsWorkspaceId()
{
    osModelartsWorkspaceIdIsSet_ = false;
}

std::string PoolLabelsCreation::getOsModelartsNodePrefix() const
{
    return osModelartsNodePrefix_;
}

void PoolLabelsCreation::setOsModelartsNodePrefix(const std::string& value)
{
    osModelartsNodePrefix_ = value;
    osModelartsNodePrefixIsSet_ = true;
}

bool PoolLabelsCreation::osModelartsNodePrefixIsSet() const
{
    return osModelartsNodePrefixIsSet_;
}

void PoolLabelsCreation::unsetosModelartsNodePrefix()
{
    osModelartsNodePrefixIsSet_ = false;
}

}
}
}
}
}


