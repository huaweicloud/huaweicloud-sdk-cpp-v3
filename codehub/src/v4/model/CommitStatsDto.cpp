

#include "huaweicloud/codehub/v4/model/CommitStatsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CommitStatsDto::CommitStatsDto()
{
    additions_ = 0;
    additionsIsSet_ = false;
    deletions_ = 0;
    deletionsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

CommitStatsDto::~CommitStatsDto() = default;

void CommitStatsDto::validate()
{
}

web::json::value CommitStatsDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(additionsIsSet_) {
        val[utility::conversions::to_string_t("additions")] = ModelBase::toJson(additions_);
    }
    if(deletionsIsSet_) {
        val[utility::conversions::to_string_t("deletions")] = ModelBase::toJson(deletions_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool CommitStatsDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("additions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("additions"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdditions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deletions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deletions"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeletions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


int32_t CommitStatsDto::getAdditions() const
{
    return additions_;
}

void CommitStatsDto::setAdditions(int32_t value)
{
    additions_ = value;
    additionsIsSet_ = true;
}

bool CommitStatsDto::additionsIsSet() const
{
    return additionsIsSet_;
}

void CommitStatsDto::unsetadditions()
{
    additionsIsSet_ = false;
}

int32_t CommitStatsDto::getDeletions() const
{
    return deletions_;
}

void CommitStatsDto::setDeletions(int32_t value)
{
    deletions_ = value;
    deletionsIsSet_ = true;
}

bool CommitStatsDto::deletionsIsSet() const
{
    return deletionsIsSet_;
}

void CommitStatsDto::unsetdeletions()
{
    deletionsIsSet_ = false;
}

int32_t CommitStatsDto::getTotal() const
{
    return total_;
}

void CommitStatsDto::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool CommitStatsDto::totalIsSet() const
{
    return totalIsSet_;
}

void CommitStatsDto::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


