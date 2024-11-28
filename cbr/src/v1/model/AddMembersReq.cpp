

#include "huaweicloud/cbr/v1/model/AddMembersReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




AddMembersReq::AddMembersReq()
{
    membersIsSet_ = false;
    domainsIsSet_ = false;
}

AddMembersReq::~AddMembersReq() = default;

void AddMembersReq::validate()
{
}

web::json::value AddMembersReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(membersIsSet_) {
        val[utility::conversions::to_string_t("members")] = ModelBase::toJson(members_);
    }
    if(domainsIsSet_) {
        val[utility::conversions::to_string_t("domains")] = ModelBase::toJson(domains_);
    }

    return val;
}
bool AddMembersReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("members"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("members"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMembers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domains"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domains"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomains(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& AddMembersReq::getMembers()
{
    return members_;
}

void AddMembersReq::setMembers(const std::vector<std::string>& value)
{
    members_ = value;
    membersIsSet_ = true;
}

bool AddMembersReq::membersIsSet() const
{
    return membersIsSet_;
}

void AddMembersReq::unsetmembers()
{
    membersIsSet_ = false;
}

std::vector<std::string>& AddMembersReq::getDomains()
{
    return domains_;
}

void AddMembersReq::setDomains(const std::vector<std::string>& value)
{
    domains_ = value;
    domainsIsSet_ = true;
}

bool AddMembersReq::domainsIsSet() const
{
    return domainsIsSet_;
}

void AddMembersReq::unsetdomains()
{
    domainsIsSet_ = false;
}

}
}
}
}
}


