

#include "huaweicloud/codeartsrepo/v3/model/CreateCommitResponseBody_stats.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




CreateCommitResponseBody_stats::CreateCommitResponseBody_stats()
{
    additions_ = 0;
    additionsIsSet_ = false;
    deletions_ = 0;
    deletionsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

CreateCommitResponseBody_stats::~CreateCommitResponseBody_stats() = default;

void CreateCommitResponseBody_stats::validate()
{
}

web::json::value CreateCommitResponseBody_stats::toJson() const
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
bool CreateCommitResponseBody_stats::fromJson(const web::json::value& val)
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


int32_t CreateCommitResponseBody_stats::getAdditions() const
{
    return additions_;
}

void CreateCommitResponseBody_stats::setAdditions(int32_t value)
{
    additions_ = value;
    additionsIsSet_ = true;
}

bool CreateCommitResponseBody_stats::additionsIsSet() const
{
    return additionsIsSet_;
}

void CreateCommitResponseBody_stats::unsetadditions()
{
    additionsIsSet_ = false;
}

int32_t CreateCommitResponseBody_stats::getDeletions() const
{
    return deletions_;
}

void CreateCommitResponseBody_stats::setDeletions(int32_t value)
{
    deletions_ = value;
    deletionsIsSet_ = true;
}

bool CreateCommitResponseBody_stats::deletionsIsSet() const
{
    return deletionsIsSet_;
}

void CreateCommitResponseBody_stats::unsetdeletions()
{
    deletionsIsSet_ = false;
}

int32_t CreateCommitResponseBody_stats::getTotal() const
{
    return total_;
}

void CreateCommitResponseBody_stats::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool CreateCommitResponseBody_stats::totalIsSet() const
{
    return totalIsSet_;
}

void CreateCommitResponseBody_stats::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


