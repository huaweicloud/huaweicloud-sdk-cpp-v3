
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
/// **参数解释：** 基于某一任务创建分支任务、MR任务时使用的参数。 **约束限制：** 不涉及。
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
    /// **参数解释：** 需要关联的任务ID。 **约束限制：** 32位UUID。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getParentTaskId() const;
    bool parentTaskIdIsSet() const;
    void unsetparentTaskId();
    void setParentTaskId(const std::string& value);

    /// <summary>
    /// **参数解释：** MR增量任务的源分支。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getGitSourceBranch() const;
    bool gitSourceBranchIsSet() const;
    void unsetgitSourceBranch();
    void setGitSourceBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** MR增量任务的目标分支。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getGitTargetBranch() const;
    bool gitTargetBranchIsSet() const;
    void unsetgitTargetBranch();
    void setGitTargetBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** MR编号。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getMergeId() const;
    bool mergeIdIsSet() const;
    void unsetmergeId();
    void setMergeId(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建MR增量任务时需传。 **约束限制：** 不涉及。 **取值范围：** merge_request。 **默认取值：** 不涉及。
    /// </summary>

    std::string getEventType() const;
    bool eventTypeIsSet() const;
    void unseteventType();
    void setEventType(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建MR增量任务时需传。 **约束限制：** 不涉及。 **取值范围：** open。 **默认取值：** 不涉及。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建MR增量任务时需传，MR标题。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
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
