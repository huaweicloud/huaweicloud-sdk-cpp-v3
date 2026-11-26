

#include "huaweicloud/modelarts/v1/model/AssetActionRsp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AssetActionRsp::AssetActionRsp()
{
    actionType_ = "";
    actionTypeIsSet_ = false;
    actionDir_ = "";
    actionDirIsSet_ = false;
}

AssetActionRsp::~AssetActionRsp() = default;

void AssetActionRsp::validate()
{
}

web::json::value AssetActionRsp::toJson() const
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
bool AssetActionRsp::fromJson(const web::json::value& val)
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


std::string AssetActionRsp::getActionType() const
{
    return actionType_;
}

void AssetActionRsp::setActionType(const std::string& value)
{
    actionType_ = value;
    actionTypeIsSet_ = true;
}

bool AssetActionRsp::actionTypeIsSet() const
{
    return actionTypeIsSet_;
}

void AssetActionRsp::unsetactionType()
{
    actionTypeIsSet_ = false;
}

std::string AssetActionRsp::getActionDir() const
{
    return actionDir_;
}

void AssetActionRsp::setActionDir(const std::string& value)
{
    actionDir_ = value;
    actionDirIsSet_ = true;
}

bool AssetActionRsp::actionDirIsSet() const
{
    return actionDirIsSet_;
}

void AssetActionRsp::unsetactionDir()
{
    actionDirIsSet_ = false;
}

}
}
}
}
}


