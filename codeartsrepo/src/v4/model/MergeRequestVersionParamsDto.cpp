

#include "huaweicloud/codeartsrepo/v4/model/MergeRequestVersionParamsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




MergeRequestVersionParamsDto::MergeRequestVersionParamsDto()
{
    diffId_ = 0;
    diffIdIsSet_ = false;
    startSha_ = "";
    startShaIsSet_ = false;
    commitId_ = "";
    commitIdIsSet_ = false;
}

MergeRequestVersionParamsDto::~MergeRequestVersionParamsDto() = default;

void MergeRequestVersionParamsDto::validate()
{
}

web::json::value MergeRequestVersionParamsDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(diffIdIsSet_) {
        val[utility::conversions::to_string_t("diff_id")] = ModelBase::toJson(diffId_);
    }
    if(startShaIsSet_) {
        val[utility::conversions::to_string_t("start_sha")] = ModelBase::toJson(startSha_);
    }
    if(commitIdIsSet_) {
        val[utility::conversions::to_string_t("commit_id")] = ModelBase::toJson(commitId_);
    }

    return val;
}
bool MergeRequestVersionParamsDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("diff_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diff_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiffId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartSha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitId(refVal);
        }
    }
    return ok;
}


int32_t MergeRequestVersionParamsDto::getDiffId() const
{
    return diffId_;
}

void MergeRequestVersionParamsDto::setDiffId(int32_t value)
{
    diffId_ = value;
    diffIdIsSet_ = true;
}

bool MergeRequestVersionParamsDto::diffIdIsSet() const
{
    return diffIdIsSet_;
}

void MergeRequestVersionParamsDto::unsetdiffId()
{
    diffIdIsSet_ = false;
}

std::string MergeRequestVersionParamsDto::getStartSha() const
{
    return startSha_;
}

void MergeRequestVersionParamsDto::setStartSha(const std::string& value)
{
    startSha_ = value;
    startShaIsSet_ = true;
}

bool MergeRequestVersionParamsDto::startShaIsSet() const
{
    return startShaIsSet_;
}

void MergeRequestVersionParamsDto::unsetstartSha()
{
    startShaIsSet_ = false;
}

std::string MergeRequestVersionParamsDto::getCommitId() const
{
    return commitId_;
}

void MergeRequestVersionParamsDto::setCommitId(const std::string& value)
{
    commitId_ = value;
    commitIdIsSet_ = true;
}

bool MergeRequestVersionParamsDto::commitIdIsSet() const
{
    return commitIdIsSet_;
}

void MergeRequestVersionParamsDto::unsetcommitId()
{
    commitIdIsSet_ = false;
}

}
}
}
}
}


