

#include "huaweicloud/cloudtable/v2/model/ActionProgress.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




ActionProgress::ActionProgress()
{
    creating_ = "";
    creatingIsSet_ = false;
    growing_ = "";
    growingIsSet_ = false;
    restoring_ = "";
    restoringIsSet_ = false;
    snapshotting_ = "";
    snapshottingIsSet_ = false;
    repairing_ = "";
    repairingIsSet_ = false;
}

ActionProgress::~ActionProgress() = default;

void ActionProgress::validate()
{
}

web::json::value ActionProgress::toJson() const
{
    web::json::value val = web::json::value::object();

    if(creatingIsSet_) {
        val[utility::conversions::to_string_t("CREATING")] = ModelBase::toJson(creating_);
    }
    if(growingIsSet_) {
        val[utility::conversions::to_string_t("GROWING")] = ModelBase::toJson(growing_);
    }
    if(restoringIsSet_) {
        val[utility::conversions::to_string_t("RESTORING")] = ModelBase::toJson(restoring_);
    }
    if(snapshottingIsSet_) {
        val[utility::conversions::to_string_t("SNAPSHOTTING")] = ModelBase::toJson(snapshotting_);
    }
    if(repairingIsSet_) {
        val[utility::conversions::to_string_t("REPAIRING")] = ModelBase::toJson(repairing_);
    }

    return val;
}

bool ActionProgress::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("CREATING"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("CREATING"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreating(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("GROWING"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("GROWING"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGrowing(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("RESTORING"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("RESTORING"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoring(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("SNAPSHOTTING"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("SNAPSHOTTING"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotting(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("REPAIRING"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("REPAIRING"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepairing(refVal);
        }
    }
    return ok;
}

std::string ActionProgress::getCreating() const
{
    return creating_;
}

void ActionProgress::setCreating(const std::string& value)
{
    creating_ = value;
    creatingIsSet_ = true;
}

bool ActionProgress::creatingIsSet() const
{
    return creatingIsSet_;
}

void ActionProgress::unsetcreating()
{
    creatingIsSet_ = false;
}

std::string ActionProgress::getGrowing() const
{
    return growing_;
}

void ActionProgress::setGrowing(const std::string& value)
{
    growing_ = value;
    growingIsSet_ = true;
}

bool ActionProgress::growingIsSet() const
{
    return growingIsSet_;
}

void ActionProgress::unsetgrowing()
{
    growingIsSet_ = false;
}

std::string ActionProgress::getRestoring() const
{
    return restoring_;
}

void ActionProgress::setRestoring(const std::string& value)
{
    restoring_ = value;
    restoringIsSet_ = true;
}

bool ActionProgress::restoringIsSet() const
{
    return restoringIsSet_;
}

void ActionProgress::unsetrestoring()
{
    restoringIsSet_ = false;
}

std::string ActionProgress::getSnapshotting() const
{
    return snapshotting_;
}

void ActionProgress::setSnapshotting(const std::string& value)
{
    snapshotting_ = value;
    snapshottingIsSet_ = true;
}

bool ActionProgress::snapshottingIsSet() const
{
    return snapshottingIsSet_;
}

void ActionProgress::unsetsnapshotting()
{
    snapshottingIsSet_ = false;
}

std::string ActionProgress::getRepairing() const
{
    return repairing_;
}

void ActionProgress::setRepairing(const std::string& value)
{
    repairing_ = value;
    repairingIsSet_ = true;
}

bool ActionProgress::repairingIsSet() const
{
    return repairingIsSet_;
}

void ActionProgress::unsetrepairing()
{
    repairingIsSet_ = false;
}

}
}
}
}
}


