

#include "huaweicloud/cce/v3/model/DeleteStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeleteStatus::DeleteStatus()
{
    previousTotal_ = 0;
    previousTotalIsSet_ = false;
    currentTotal_ = 0;
    currentTotalIsSet_ = false;
    updated_ = 0;
    updatedIsSet_ = false;
    added_ = 0;
    addedIsSet_ = false;
    deleted_ = 0;
    deletedIsSet_ = false;
}

DeleteStatus::~DeleteStatus() = default;

void DeleteStatus::validate()
{
}

web::json::value DeleteStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(previousTotalIsSet_) {
        val[utility::conversions::to_string_t("previous_total")] = ModelBase::toJson(previousTotal_);
    }
    if(currentTotalIsSet_) {
        val[utility::conversions::to_string_t("current_total")] = ModelBase::toJson(currentTotal_);
    }
    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }
    if(addedIsSet_) {
        val[utility::conversions::to_string_t("added")] = ModelBase::toJson(added_);
    }
    if(deletedIsSet_) {
        val[utility::conversions::to_string_t("deleted")] = ModelBase::toJson(deleted_);
    }

    return val;
}
bool DeleteStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("previous_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("previous_total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreviousTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("added"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("added"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdded(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleted"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleted(refVal);
        }
    }
    return ok;
}


int32_t DeleteStatus::getPreviousTotal() const
{
    return previousTotal_;
}

void DeleteStatus::setPreviousTotal(int32_t value)
{
    previousTotal_ = value;
    previousTotalIsSet_ = true;
}

bool DeleteStatus::previousTotalIsSet() const
{
    return previousTotalIsSet_;
}

void DeleteStatus::unsetpreviousTotal()
{
    previousTotalIsSet_ = false;
}

int32_t DeleteStatus::getCurrentTotal() const
{
    return currentTotal_;
}

void DeleteStatus::setCurrentTotal(int32_t value)
{
    currentTotal_ = value;
    currentTotalIsSet_ = true;
}

bool DeleteStatus::currentTotalIsSet() const
{
    return currentTotalIsSet_;
}

void DeleteStatus::unsetcurrentTotal()
{
    currentTotalIsSet_ = false;
}

int32_t DeleteStatus::getUpdated() const
{
    return updated_;
}

void DeleteStatus::setUpdated(int32_t value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool DeleteStatus::updatedIsSet() const
{
    return updatedIsSet_;
}

void DeleteStatus::unsetupdated()
{
    updatedIsSet_ = false;
}

int32_t DeleteStatus::getAdded() const
{
    return added_;
}

void DeleteStatus::setAdded(int32_t value)
{
    added_ = value;
    addedIsSet_ = true;
}

bool DeleteStatus::addedIsSet() const
{
    return addedIsSet_;
}

void DeleteStatus::unsetadded()
{
    addedIsSet_ = false;
}

int32_t DeleteStatus::getDeleted() const
{
    return deleted_;
}

void DeleteStatus::setDeleted(int32_t value)
{
    deleted_ = value;
    deletedIsSet_ = true;
}

bool DeleteStatus::deletedIsSet() const
{
    return deletedIsSet_;
}

void DeleteStatus::unsetdeleted()
{
    deletedIsSet_ = false;
}

}
}
}
}
}


