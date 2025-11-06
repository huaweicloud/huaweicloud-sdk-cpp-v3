

#include "huaweicloud/codeartsrepo/v3/model/DivergingCommitCounts.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




DivergingCommitCounts::DivergingCommitCounts()
{
    ahead_ = 0.0;
    aheadIsSet_ = false;
    behind_ = 0.0;
    behindIsSet_ = false;
}

DivergingCommitCounts::~DivergingCommitCounts() = default;

void DivergingCommitCounts::validate()
{
}

web::json::value DivergingCommitCounts::toJson() const
{
    web::json::value val = web::json::value::object();

    if(aheadIsSet_) {
        val[utility::conversions::to_string_t("ahead")] = ModelBase::toJson(ahead_);
    }
    if(behindIsSet_) {
        val[utility::conversions::to_string_t("behind")] = ModelBase::toJson(behind_);
    }

    return val;
}
bool DivergingCommitCounts::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ahead"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ahead"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAhead(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("behind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("behind"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBehind(refVal);
        }
    }
    return ok;
}


double DivergingCommitCounts::getAhead() const
{
    return ahead_;
}

void DivergingCommitCounts::setAhead(double value)
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

double DivergingCommitCounts::getBehind() const
{
    return behind_;
}

void DivergingCommitCounts::setBehind(double value)
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

}
}
}
}
}


