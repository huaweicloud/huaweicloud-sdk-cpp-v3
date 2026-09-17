

#include "huaweicloud/projectman/v4/model/IssueBatchOperateEntitiesResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueBatchOperateEntitiesResult::IssueBatchOperateEntitiesResult()
{
    successIsSet_ = false;
    failedIsSet_ = false;
    undeletedTreesIsSet_ = false;
}

IssueBatchOperateEntitiesResult::~IssueBatchOperateEntitiesResult() = default;

void IssueBatchOperateEntitiesResult::validate()
{
}

web::json::value IssueBatchOperateEntitiesResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }
    if(failedIsSet_) {
        val[utility::conversions::to_string_t("failed")] = ModelBase::toJson(failed_);
    }
    if(undeletedTreesIsSet_) {
        val[utility::conversions::to_string_t("undeleted_trees")] = ModelBase::toJson(undeletedTrees_);
    }

    return val;
}
bool IssueBatchOperateEntitiesResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueOperateResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueOperateResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("undeleted_trees"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("undeleted_trees"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueOperateResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUndeletedTrees(refVal);
        }
    }
    return ok;
}


std::vector<IssueOperateResult>& IssueBatchOperateEntitiesResult::getSuccess()
{
    return success_;
}

void IssueBatchOperateEntitiesResult::setSuccess(const std::vector<IssueOperateResult>& value)
{
    success_ = value;
    successIsSet_ = true;
}

bool IssueBatchOperateEntitiesResult::successIsSet() const
{
    return successIsSet_;
}

void IssueBatchOperateEntitiesResult::unsetsuccess()
{
    successIsSet_ = false;
}

std::vector<IssueOperateResult>& IssueBatchOperateEntitiesResult::getFailed()
{
    return failed_;
}

void IssueBatchOperateEntitiesResult::setFailed(const std::vector<IssueOperateResult>& value)
{
    failed_ = value;
    failedIsSet_ = true;
}

bool IssueBatchOperateEntitiesResult::failedIsSet() const
{
    return failedIsSet_;
}

void IssueBatchOperateEntitiesResult::unsetfailed()
{
    failedIsSet_ = false;
}

std::vector<IssueOperateResult>& IssueBatchOperateEntitiesResult::getUndeletedTrees()
{
    return undeletedTrees_;
}

void IssueBatchOperateEntitiesResult::setUndeletedTrees(const std::vector<IssueOperateResult>& value)
{
    undeletedTrees_ = value;
    undeletedTreesIsSet_ = true;
}

bool IssueBatchOperateEntitiesResult::undeletedTreesIsSet() const
{
    return undeletedTreesIsSet_;
}

void IssueBatchOperateEntitiesResult::unsetundeletedTrees()
{
    undeletedTreesIsSet_ = false;
}

}
}
}
}
}


