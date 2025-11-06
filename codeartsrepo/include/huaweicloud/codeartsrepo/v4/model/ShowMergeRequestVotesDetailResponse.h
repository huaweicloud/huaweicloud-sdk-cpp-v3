
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowMergeRequestVotesDetailResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowMergeRequestVotesDetailResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsrepo/v4/model/MergeRequestVotesDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowMergeRequestVotesDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowMergeRequestVotesDetailResponse();
    virtual ~ShowMergeRequestVotesDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowMergeRequestVotesDetailResponse members

    /// <summary>
    /// **参数解释：** 多人合计总分数。
    /// </summary>

    int32_t getScores() const;
    bool scoresIsSet() const;
    void unsetscores();
    void setScores(int32_t value);

    /// <summary>
    /// **参数解释：** 合并请求id。
    /// </summary>

    int32_t getMergeRequestId() const;
    bool mergeRequestIdIsSet() const;
    void unsetmergeRequestId();
    void setMergeRequestId(int32_t value);

    /// <summary>
    /// **参数解释：** 合并请求作者名。
    /// </summary>

    std::string getMergeRequestCreator() const;
    bool mergeRequestCreatorIsSet() const;
    void unsetmergeRequestCreator();
    void setMergeRequestCreator(const std::string& value);

    /// <summary>
    /// **参数解释：** 个人打分详情。
    /// </summary>

    std::vector<MergeRequestVotesDto>& getVotes();
    bool votesIsSet() const;
    void unsetvotes();
    void setVotes(const std::vector<MergeRequestVotesDto>& value);


protected:
    int32_t scores_;
    bool scoresIsSet_;
    int32_t mergeRequestId_;
    bool mergeRequestIdIsSet_;
    std::string mergeRequestCreator_;
    bool mergeRequestCreatorIsSet_;
    std::vector<MergeRequestVotesDto> votes_;
    bool votesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowMergeRequestVotesDetailResponse_H_
