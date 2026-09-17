

#include "huaweicloud/projectman/v4/model/RelateAction.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




RelateAction::RelateAction()
{
    action_ = "";
    actionIsSet_ = false;
    actionDisplayName_ = "";
    actionDisplayNameIsSet_ = false;
    relateObjectListIsSet_ = false;
}

RelateAction::~RelateAction() = default;

void RelateAction::validate()
{
}

web::json::value RelateAction::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(actionDisplayNameIsSet_) {
        val[utility::conversions::to_string_t("action_display_name")] = ModelBase::toJson(actionDisplayName_);
    }
    if(relateObjectListIsSet_) {
        val[utility::conversions::to_string_t("relate_object_list")] = ModelBase::toJson(relateObjectList_);
    }

    return val;
}
bool RelateAction::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action_display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relate_object_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relate_object_list"));
        if(!fieldValue.is_null())
        {
            std::vector<RelationObject> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelateObjectList(refVal);
        }
    }
    return ok;
}


std::string RelateAction::getAction() const
{
    return action_;
}

void RelateAction::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool RelateAction::actionIsSet() const
{
    return actionIsSet_;
}

void RelateAction::unsetaction()
{
    actionIsSet_ = false;
}

std::string RelateAction::getActionDisplayName() const
{
    return actionDisplayName_;
}

void RelateAction::setActionDisplayName(const std::string& value)
{
    actionDisplayName_ = value;
    actionDisplayNameIsSet_ = true;
}

bool RelateAction::actionDisplayNameIsSet() const
{
    return actionDisplayNameIsSet_;
}

void RelateAction::unsetactionDisplayName()
{
    actionDisplayNameIsSet_ = false;
}

std::vector<RelationObject>& RelateAction::getRelateObjectList()
{
    return relateObjectList_;
}

void RelateAction::setRelateObjectList(const std::vector<RelationObject>& value)
{
    relateObjectList_ = value;
    relateObjectListIsSet_ = true;
}

bool RelateAction::relateObjectListIsSet() const
{
    return relateObjectListIsSet_;
}

void RelateAction::unsetrelateObjectList()
{
    relateObjectListIsSet_ = false;
}

}
}
}
}
}


