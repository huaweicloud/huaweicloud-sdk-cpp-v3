
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_IncConfigV2_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_IncConfigV2_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 增量检查相关的参数
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  IncConfigV2
    : public ModelBase
{
public:
    IncConfigV2();
    virtual ~IncConfigV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IncConfigV2 members

    /// <summary>
    /// 需要关联的父任务ID，流水线创建或MR创建任务需要该参数
    /// </summary>

    std::string getParentTaskId() const;
    bool parentTaskIdIsSet() const;
    void unsetparentTaskId();
    void setParentTaskId(const std::string& value);

    /// <summary>
    /// 增量检查代码源分支
    /// </summary>

    std::string getGitSourceBranch() const;
    bool gitSourceBranchIsSet() const;
    void unsetgitSourceBranch();
    void setGitSourceBranch(const std::string& value);

    /// <summary>
    /// 增量检查代码目标分支
    /// </summary>

    std::string getGitTargetBranch() const;
    bool gitTargetBranchIsSet() const;
    void unsetgitTargetBranch();
    void setGitTargetBranch(const std::string& value);

    /// <summary>
    /// MR唯一标示ID
    /// </summary>

    std::string getMergeId() const;
    bool mergeIdIsSet() const;
    void unsetmergeId();
    void setMergeId(const std::string& value);

    /// <summary>
    /// webhook触发事件类型,merge_request/push_request
    /// </summary>

    std::string getEventType() const;
    bool eventTypeIsSet() const;
    void unseteventType();
    void setEventType(const std::string& value);

    /// <summary>
    /// webhook事件状态，open/close/update
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// MR标题
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);


protected:
    std::string parentTaskId_;
    bool parentTaskIdIsSet_;
    std::string gitSourceBranch_;
    bool gitSourceBranchIsSet_;
    std::string gitTargetBranch_;
    bool gitTargetBranchIsSet_;
    std::string mergeId_;
    bool mergeIdIsSet_;
    std::string eventType_;
    bool eventTypeIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::string title_;
    bool titleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_IncConfigV2_H_
