

#include "huaweicloud/codeartsrepo/v4/model/DivergingCommitCounts.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




DivergingCommitCounts::DivergingCommitCounts()
{
    behind_ = 0;
    behindIsSet_ = false;
    ahead_ = 0;
    aheadIsSet_ = false;
}

DivergingCommitCounts::~DivergingCommitCounts() = default;

void DivergingCommitCounts::validate()
{
}

web::json::value DivergingCommitCounts::toJson() const
{
    web::json::value val = web::json::value::object();

    if(behindIsSet_) {
        val[utility::conversions::to_string_t("behind")] = ModelBase::toJson(behind_);
    }
    if(aheadIsSet_) {
        val[utility::conversions::to_string_t("ahead")] = ModelBase::toJson(ahead_);
    }

    return val;
}
bool DivergingCommitCounts::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("behind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("behind"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBehind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ahead"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ahead"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAhead(refVal);
        }
    }
    return ok;
}


int32_t DivergingCommitCounts::getBehind() const
{
    return behind_;
}

void DivergingCommitCounts::setBehind(int32_t value)
{
    behind_ = value;
    behindIsSet_ = true;
}

bool DivergingCommitCounts::behindIsSet() const
{
    return behindIsSet_;
}

void DivergingCommitCounts::unsetbehind()
{
    behindIsSet_ = false;
}

int32_t DivergingCommitCounts::getAhead() const
{
    return ahead_;
}

void DivergingCommitCounts::setAhead(int32_t value)
{
    ahead_ = value;
    aheadIsSet_ = true;
}

bool DivergingCommitCounts::aheadIsSet() const
{
    return aheadIsSet_;
}

void DivergingCommitCounts::unsetahead()
{
    aheadIsSet_ = false;
}

}
}
}
}
}


