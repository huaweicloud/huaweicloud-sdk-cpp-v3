

#include "huaweicloud/codeartsartifact/v2/model/RepoUserPrivilegeResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




RepoUserPrivilegeResult::RepoUserPrivilegeResult()
{
    total_ = 0L;
    totalIsSet_ = false;
    listIsSet_ = false;
}

RepoUserPrivilegeResult::~RepoUserPrivilegeResult() = default;

void RepoUserPrivilegeResult::validate()
{
}

web::json::value RepoUserPrivilegeResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(listIsSet_) {
        val[utility::conversions::to_string_t("list")] = ModelBase::toJson(list_);
    }

    return val;
}
bool RepoUserPrivilegeResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list"));
        if(!fieldValue.is_null())
        {
            std::vector<RepoUserPrivilegeV5> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setList(refVal);
        }
    }
    return ok;
}


int64_t RepoUserPrivilegeResult::getTotal() const
{
    return total_;
}

void RepoUserPrivilegeResult::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool RepoUserPrivilegeResult::totalIsSet() const
{
    return totalIsSet_;
}

void RepoUserPrivilegeResult::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<RepoUserPrivilegeV5>& RepoUserPrivilegeResult::getList()
{
    return list_;
}

void RepoUserPrivilegeResult::setList(const std::vector<RepoUserPrivilegeV5>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool RepoUserPrivilegeResult::listIsSet() const
{
    return listIsSet_;
}

void RepoUserPrivilegeResult::unsetlist()
{
    listIsSet_ = false;
}

}
}
}
}
}


