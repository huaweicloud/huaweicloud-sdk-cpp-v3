

#include "huaweicloud/cloudtest/v1/model/IssueListPiFilterInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




IssueListPiFilterInfo::IssueListPiFilterInfo()
{
    sprintsIsSet_ = false;
    piId_ = "";
    piIdIsSet_ = false;
}

IssueListPiFilterInfo::~IssueListPiFilterInfo() = default;

void IssueListPiFilterInfo::validate()
{
}

web::json::value IssueListPiFilterInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sprintsIsSet_) {
        val[utility::conversions::to_string_t("sprints")] = ModelBase::toJson(sprints_);
    }
    if(piIdIsSet_) {
        val[utility::conversions::to_string_t("pi_id")] = ModelBase::toJson(piId_);
    }

    return val;
}
bool IssueListPiFilterInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sprints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sprints"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSprints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pi_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pi_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPiId(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& IssueListPiFilterInfo::getSprints()
{
    return sprints_;
}

void IssueListPiFilterInfo::setSprints(const std::vector<std::string>& value)
{
    sprints_ = value;
    sprintsIsSet_ = true;
}

bool IssueListPiFilterInfo::sprintsIsSet() const
{
    return sprintsIsSet_;
}

void IssueListPiFilterInfo::unsetsprints()
{
    sprintsIsSet_ = false;
}

std::string IssueListPiFilterInfo::getPiId() const
{
    return piId_;
}

void IssueListPiFilterInfo::setPiId(const std::string& value)
{
    piId_ = value;
    piIdIsSet_ = true;
}

bool IssueListPiFilterInfo::piIdIsSet() const
{
    return piIdIsSet_;
}

void IssueListPiFilterInfo::unsetpiId()
{
    piIdIsSet_ = false;
}

}
}
}
}
}


