

#include "huaweicloud/modelarts/v1/model/AssetActionReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AssetActionReq::AssetActionReq()
{
    actionType_ = "";
    actionTypeIsSet_ = false;
    actionDir_ = "";
    actionDirIsSet_ = false;
}

AssetActionReq::~AssetActionReq() = default;

void AssetActionReq::validate()
{
}

web::json::value AssetActionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionTypeIsSet_) {
        val[utility::conversions::to_string_t("action_type")] = ModelBase::toJson(actionType_);
    }
    if(actionDirIsSet_) {
        val[utility::conversions::to_string_t("action_dir")] = ModelBase::toJson(actionDir_);
    }

    return val;
}
bool AssetActionReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionDir(refVal);
        }
    }
    return ok;
}


std::string AssetActionReq::getActionType() const
{
    return actionType_;
}

void AssetActionReq::setActionType(const std::string& value)
{
    actionType_ = value;
    actionTypeIsSet_ = true;
}

bool AssetActionReq::actionTypeIsSet() const
{
    return actionTypeIsSet_;
}

void AssetActionReq::unsetactionType()
{
    actionTypeIsSet_ = false;
}

std::string AssetActionReq::getActionDir() const
{
    return actionDir_;
}

void AssetActionReq::setActionDir(const std::string& value)
{
    actionDir_ = value;
    actionDirIsSet_ = true;
}

bool AssetActionReq::actionDirIsSet() const
{
    return actionDirIsSet_;
}

void AssetActionReq::unsetactionDir()
{
    actionDirIsSet_ = false;
}

}
}
}
}
}


