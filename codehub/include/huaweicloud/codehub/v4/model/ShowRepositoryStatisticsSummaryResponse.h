
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowRepositoryStatisticsSummaryResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowRepositoryStatisticsSummaryResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ShowRepositoryStatisticsSummaryResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRepositoryStatisticsSummaryResponse();
    virtual ~ShowRepositoryStatisticsSummaryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRepositoryStatisticsSummaryResponse members

    /// <summary>
    /// **参数解释：** 分支数量。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getBranchesCount() const;
    bool branchesCountIsSet() const;
    void unsetbranchesCount();
    void setBranchesCount(int32_t value);

    /// <summary>
    /// **参数解释：** 提交数量。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getCommitsCount() const;
    bool commitsCountIsSet() const;
    void unsetcommitsCount();
    void setCommitsCount(int32_t value);

    /// <summary>
    /// **参数解释：** 成员数量。
    /// </summary>

    int32_t getMembersCount() const;
    bool membersCountIsSet() const;
    void unsetmembersCount();
    void setMembersCount(int32_t value);

    /// <summary>
    /// **参数解释：** Tag数量。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getTagsCount() const;
    bool tagsCountIsSet() const;
    void unsettagsCount();
    void setTagsCount(int32_t value);

    /// <summary>
    /// **参数解释：** 合并请求数量。 **取值范围：** 不涉及。
    /// </summary>

    int64_t getMergeRequestCount() const;
    bool mergeRequestCountIsSet() const;
    void unsetmergeRequestCount();
    void setMergeRequestCount(int64_t value);

    /// <summary>
    /// **参数解释：** 备注数量。 **取值范围：** 不涉及。
    /// </summary>

    int64_t getNoteCount() const;
    bool noteCountIsSet() const;
    void unsetnoteCount();
    void setNoteCount(int64_t value);


protected:
    int32_t branchesCount_;
    bool branchesCountIsSet_;
    int32_t commitsCount_;
    bool commitsCountIsSet_;
    int32_t membersCount_;
    bool membersCountIsSet_;
    int32_t tagsCount_;
    bool tagsCountIsSet_;
    int64_t mergeRequestCount_;
    bool mergeRequestCountIsSet_;
    int64_t noteCount_;
    bool noteCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowRepositoryStatisticsSummaryResponse_H_
