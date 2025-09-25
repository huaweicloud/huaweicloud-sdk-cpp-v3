
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PutMergeRequestParamsDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PutMergeRequestParamsDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  PutMergeRequestParamsDto
    : public ModelBase
{
public:
    PutMergeRequestParamsDto();
    virtual ~PutMergeRequestParamsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PutMergeRequestParamsDto members

    /// <summary>
    /// 合并请求标题
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 合并请求状态
    /// </summary>

    std::string getStateEvent() const;
    bool stateEventIsSet() const;
    void unsetstateEvent();
    void setStateEvent(const std::string& value);

    /// <summary>
    /// 合并人id列表
    /// </summary>

    std::string getAssigneeIds() const;
    bool assigneeIdsIsSet() const;
    void unsetassigneeIds();
    void setAssigneeIds(const std::string& value);

    /// <summary>
    /// 评审人id列表
    /// </summary>

    std::string getReviewerIds() const;
    bool reviewerIdsIsSet() const;
    void unsetreviewerIds();
    void setReviewerIds(const std::string& value);

    /// <summary>
    /// 合并请求描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 里程碑id
    /// </summary>

    int32_t getMilestoneId() const;
    bool milestoneIdIsSet() const;
    void unsetmilestoneId();
    void setMilestoneId(int32_t value);

    /// <summary>
    /// 标签
    /// </summary>

    Object getLabels() const;
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const Object& value);

    /// <summary>
    /// 合入后删除源分支
    /// </summary>

    bool isForceRemoveSourceBranch() const;
    bool forceRemoveSourceBranchIsSet() const;
    void unsetforceRemoveSourceBranch();
    void setForceRemoveSourceBranch(bool value);

    /// <summary>
    /// squash合入
    /// </summary>

    bool isSquash() const;
    bool squashIsSet() const;
    void unsetsquash();
    void setSquash(bool value);

    /// <summary>
    /// squash提交信息
    /// </summary>

    std::string getSquashCommitMessage() const;
    bool squashCommitMessageIsSet() const;
    void unsetsquashCommitMessage();
    void setSquashCommitMessage(const std::string& value);

    /// <summary>
    /// e2e单号
    /// </summary>

    std::vector<std::string>& getWorkItemIds();
    bool workItemIdsIsSet() const;
    void unsetworkItemIds();
    void setWorkItemIds(const std::vector<std::string>& value);


protected:
    std::string title_;
    bool titleIsSet_;
    std::string stateEvent_;
    bool stateEventIsSet_;
    std::string assigneeIds_;
    bool assigneeIdsIsSet_;
    std::string reviewerIds_;
    bool reviewerIdsIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int32_t milestoneId_;
    bool milestoneIdIsSet_;
    Object labels_;
    bool labelsIsSet_;
    bool forceRemoveSourceBranch_;
    bool forceRemoveSourceBranchIsSet_;
    bool squash_;
    bool squashIsSet_;
    std::string squashCommitMessage_;
    bool squashCommitMessageIsSet_;
    std::vector<std::string> workItemIds_;
    bool workItemIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PutMergeRequestParamsDto_H_
