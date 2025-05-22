

#include "huaweicloud/codeartsbuild/v3/model/BuildInfoRecord_commit_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




BuildInfoRecord_commit_info::BuildInfoRecord_commit_info()
{
    commitId_ = "";
    commitIdIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
}

BuildInfoRecord_commit_info::~BuildInfoRecord_commit_info() = default;

void BuildInfoRecord_commit_info::validate()
{
}

web::json::value BuildInfoRecord_commit_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commitIdIsSet_) {
        val[utility::conversions::to_string_t("commit_id")] = ModelBase::toJson(commitId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }

    return val;
}
bool BuildInfoRecord_commit_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("commit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    return ok;
}


std::string BuildInfoRecord_commit_info::getCommitId() const
{
    return commitId_;
}

void BuildInfoRecord_commit_info::setCommitId(const std::string& value)
{
    commitId_ = value;
    commitIdIsSet_ = true;
}

bool BuildInfoRecord_commit_info::commitIdIsSet() const
{
    return commitIdIsSet_;
}

void BuildInfoRecord_commit_info::unsetcommitId()
{
    commitIdIsSet_ = false;
}

std::string BuildInfoRecord_commit_info::getCreatedAt() const
{
    return createdAt_;
}

void BuildInfoRecord_commit_info::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool BuildInfoRecord_commit_info::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void BuildInfoRecord_commit_info::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

}
}
}
}
}


