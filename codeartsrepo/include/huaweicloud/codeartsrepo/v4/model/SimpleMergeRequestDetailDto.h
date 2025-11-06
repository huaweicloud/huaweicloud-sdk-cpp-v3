
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_SimpleMergeRequestDetailDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_SimpleMergeRequestDetailDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsrepo/v4/model/UserBasicDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  SimpleMergeRequestDetailDto
    : public ModelBase
{
public:
    SimpleMergeRequestDetailDto();
    virtual ~SimpleMergeRequestDetailDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SimpleMergeRequestDetailDto members

    /// <summary>
    /// **参数解释：** 合并请求id。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 合并请求iid。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getIid() const;
    bool iidIsSet() const;
    void unsetiid();
    void setIid(int32_t value);

    /// <summary>
    /// **参数解释：** 标题。 **取值范围：** 不涉及。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// **参数解释：** 描述。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 源分支。 **取值范围：** 不涉及。
    /// </summary>

    std::string getSourceBranch() const;
    bool sourceBranchIsSet() const;
    void unsetsourceBranch();
    void setSourceBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** 目标分支。 **取值范围：** 不涉及。
    /// </summary>

    std::string getTargetBranch() const;
    bool targetBranchIsSet() const;
    void unsettargetBranch();
    void setTargetBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** 状态。 **取值范围：** 不涉及。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建时间。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 审核模式。 **取值范围：** 不涉及。
    /// </summary>

    std::string getReviewMode() const;
    bool reviewModeIsSet() const;
    void unsetreviewMode();
    void setReviewMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserBasicDto getAuthor() const;
    bool authorIsSet() const;
    void unsetauthor();
    void setAuthor(const UserBasicDto& value);

    /// <summary>
    /// **参数解释：** 合并请求类型。 **取值范围：** 不涉及。
    /// </summary>

    std::string getMergeRequestType() const;
    bool mergeRequestTypeIsSet() const;
    void unsetmergeRequestType();
    void setMergeRequestType(const std::string& value);

    /// <summary>
    /// **参数解释：** 送审结果。 **取值范围：** - true，成功。 - false，失败
    /// </summary>

    bool isModerationResult() const;
    bool moderationResultIsSet() const;
    void unsetmoderationResult();
    void setModerationResult(bool value);

    /// <summary>
    /// **参数解释：** 送审时间时间戳。 **取值范围：** 不涉及。
    /// </summary>

    int64_t getModerationTime() const;
    bool moderationTimeIsSet() const;
    void unsetmoderationTime();
    void setModerationTime(int64_t value);

    /// <summary>
    /// **参数解释：** 送审状态码。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getModerationStatus() const;
    bool moderationStatusIsSet() const;
    void unsetmoderationStatus();
    void setModerationStatus(int32_t value);

    /// <summary>
    /// **参数解释：** 是否使用临时分支。 **取值范围：** - true，使用。 - false，不使用
    /// </summary>

    bool isIsUseTempBranch() const;
    bool isUseTempBranchIsSet() const;
    void unsetisUseTempBranch();
    void setIsUseTempBranch(bool value);


protected:
    int32_t id_;
    bool idIsSet_;
    int32_t iid_;
    bool iidIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string sourceBranch_;
    bool sourceBranchIsSet_;
    std::string targetBranch_;
    bool targetBranchIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string reviewMode_;
    bool reviewModeIsSet_;
    UserBasicDto author_;
    bool authorIsSet_;
    std::string mergeRequestType_;
    bool mergeRequestTypeIsSet_;
    bool moderationResult_;
    bool moderationResultIsSet_;
    int64_t moderationTime_;
    bool moderationTimeIsSet_;
    int32_t moderationStatus_;
    bool moderationStatusIsSet_;
    bool isUseTempBranch_;
    bool isUseTempBranchIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_SimpleMergeRequestDetailDto_H_
