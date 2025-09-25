

#include "huaweicloud/codehub/v3/model/MergeResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




MergeResult::MergeResult()
{
    closed_ = 0.0;
    closedIsSet_ = false;
    mergeRequestsIsSet_ = false;
    merged_ = 0.0;
    mergedIsSet_ = false;
    opened_ = 0.0;
    openedIsSet_ = false;
    total_ = 0.0;
    totalIsSet_ = false;
}

MergeResult::~MergeResult() = default;

void MergeResult::validate()
{
}

web::json::value MergeResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(closedIsSet_) {
        val[utility::conversions::to_string_t("closed")] = ModelBase::toJson(closed_);
    }
    if(mergeRequestsIsSet_) {
        val[utility::conversions::to_string_t("merge_requests")] = ModelBase::toJson(mergeRequests_);
    }
    if(mergedIsSet_) {
        val[utility::conversions::to_string_t("merged")] = ModelBase::toJson(merged_);
    }
    if(openedIsSet_) {
        val[utility::conversions::to_string_t("opened")] = ModelBase::toJson(opened_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool MergeResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("closed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("closed"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClosed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_requests"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_requests"));
        if(!fieldValue.is_null())
        {
            std::vector<MergeRequestsItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequests(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merged"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merged"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMerged(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("opened"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("opened"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpened(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


double MergeResult::getClosed() const
{
    return closed_;
}

void MergeResult::setClosed(double value)
{
    closed_ = value;
    closedIsSet_ = true;
}

bool MergeResult::closedIsSet() const
{
    return closedIsSet_;
}

void MergeResult::unsetclosed()
{
    closedIsSet_ = false;
}

std::vector<MergeRequestsItem>& MergeResult::getMergeRequests()
{
    return mergeRequests_;
}

void MergeResult::setMergeRequests(const std::vector<MergeRequestsItem>& value)
{
    mergeRequests_ = value;
    mergeRequestsIsSet_ = true;
}

bool MergeResult::mergeRequestsIsSet() const
{
    return mergeRequestsIsSet_;
}

void MergeResult::unsetmergeRequests()
{
    mergeRequestsIsSet_ = false;
}

double MergeResult::getMerged() const
{
    return merged_;
}

void MergeResult::setMerged(double value)
{
    merged_ = value;
    mergedIsSet_ = true;
}

bool MergeResult::mergedIsSet() const
{
    return mergedIsSet_;
}

void MergeResult::unsetmerged()
{
    mergedIsSet_ = false;
}

double MergeResult::getOpened() const
{
    return opened_;
}

void MergeResult::setOpened(double value)
{
    opened_ = value;
    openedIsSet_ = true;
}

bool MergeResult::openedIsSet() const
{
    return openedIsSet_;
}

void MergeResult::unsetopened()
{
    openedIsSet_ = false;
}

double MergeResult::getTotal() const
{
    return total_;
}

void MergeResult::setTotal(double value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool MergeResult::totalIsSet() const
{
    return totalIsSet_;
}

void MergeResult::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


