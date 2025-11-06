

#include "huaweicloud/codeartsrepo/v3/model/CommitList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




CommitList::CommitList()
{
    commitsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

CommitList::~CommitList() = default;

void CommitList::validate()
{
}

web::json::value CommitList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commitsIsSet_) {
        val[utility::conversions::to_string_t("commits")] = ModelBase::toJson(commits_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool CommitList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("commits"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commits"));
        if(!fieldValue.is_null())
        {
            std::vector<Commit> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommits(refVal);
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


std::vector<Commit>& CommitList::getCommits()
{
    return commits_;
}

void CommitList::setCommits(const std::vector<Commit>& value)
{
    commits_ = value;
    commitsIsSet_ = true;
}

bool CommitList::commitsIsSet() const
{
    return commitsIsSet_;
}

void CommitList::unsetcommits()
{
    commitsIsSet_ = false;
}

int32_t CommitList::getTotal() const
{
    return total_;
}

void CommitList::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool CommitList::totalIsSet() const
{
    return totalIsSet_;
}

void CommitList::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


