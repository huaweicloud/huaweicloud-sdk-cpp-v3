

#include "huaweicloud/drs/v5/model/SkipPreCheckInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




SkipPreCheckInfo::SkipPreCheckInfo()
{
    skippedPrecheckListIsSet_ = false;
    skipReason_ = "";
    skipReasonIsSet_ = false;
}

SkipPreCheckInfo::~SkipPreCheckInfo() = default;

void SkipPreCheckInfo::validate()
{
}

web::json::value SkipPreCheckInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(skippedPrecheckListIsSet_) {
        val[utility::conversions::to_string_t("skipped_precheck_list")] = ModelBase::toJson(skippedPrecheckList_);
    }
    if(skipReasonIsSet_) {
        val[utility::conversions::to_string_t("skip_reason")] = ModelBase::toJson(skipReason_);
    }

    return val;
}

bool SkipPreCheckInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("skipped_precheck_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("skipped_precheck_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSkippedPrecheckList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("skip_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("skip_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSkipReason(refVal);
        }
    }
    return ok;
}

std::vector<std::string>& SkipPreCheckInfo::getSkippedPrecheckList()
{
    return skippedPrecheckList_;
}

void SkipPreCheckInfo::setSkippedPrecheckList(const std::vector<std::string>& value)
{
    skippedPrecheckList_ = value;
    skippedPrecheckListIsSet_ = true;
}

bool SkipPreCheckInfo::skippedPrecheckListIsSet() const
{
    return skippedPrecheckListIsSet_;
}

void SkipPreCheckInfo::unsetskippedPrecheckList()
{
    skippedPrecheckListIsSet_ = false;
}

std::string SkipPreCheckInfo::getSkipReason() const
{
    return skipReason_;
}

void SkipPreCheckInfo::setSkipReason(const std::string& value)
{
    skipReason_ = value;
    skipReasonIsSet_ = true;
}

bool SkipPreCheckInfo::skipReasonIsSet() const
{
    return skipReasonIsSet_;
}

void SkipPreCheckInfo::unsetskipReason()
{
    skipReasonIsSet_ = false;
}

}
}
}
}
}


