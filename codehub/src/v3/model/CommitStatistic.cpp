

#include "huaweicloud/codehub/v3/model/CommitStatistic.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




CommitStatistic::CommitStatistic()
{
    additions_ = 0;
    additionsIsSet_ = false;
    deletions_ = 0;
    deletionsIsSet_ = false;
}

CommitStatistic::~CommitStatistic() = default;

void CommitStatistic::validate()
{
}

web::json::value CommitStatistic::toJson() const
{
    web::json::value val = web::json::value::object();

    if(additionsIsSet_) {
        val[utility::conversions::to_string_t("additions")] = ModelBase::toJson(additions_);
    }
    if(deletionsIsSet_) {
        val[utility::conversions::to_string_t("deletions")] = ModelBase::toJson(deletions_);
    }

    return val;
}
bool CommitStatistic::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t CommitStatistic::getAdditions() const
{
    return additions_;
}

void CommitStatistic::setAdditions(int32_t value)
{
    additions_ = value;
    additionsIsSet_ = true;
}

bool CommitStatistic::additionsIsSet() const
{
    return additionsIsSet_;
}

void CommitStatistic::unsetadditions()
{
    additionsIsSet_ = false;
}

int32_t CommitStatistic::getDeletions() const
{
    return deletions_;
}

void CommitStatistic::setDeletions(int32_t value)
{
    deletions_ = value;
    deletionsIsSet_ = true;
}

bool CommitStatistic::deletionsIsSet() const
{
    return deletionsIsSet_;
}

void CommitStatistic::unsetdeletions()
{
    deletionsIsSet_ = false;
}

}
}
}
}
}


