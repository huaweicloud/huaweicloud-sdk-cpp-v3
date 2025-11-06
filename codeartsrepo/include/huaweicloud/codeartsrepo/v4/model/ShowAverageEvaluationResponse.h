
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowAverageEvaluationResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowAverageEvaluationResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/MergeRequestCustomAverageEvaluationDto.h>
#include <huaweicloud/codeartsrepo/v4/model/MergeRequestBaseEvaluationDto.h>
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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowAverageEvaluationResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAverageEvaluationResponse();
    virtual ~ShowAverageEvaluationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAverageEvaluationResponse members

    /// <summary>
    /// **参数解释：** 合并请求id。
    /// </summary>

    int32_t getMergeRequestId() const;
    bool mergeRequestIdIsSet() const;
    void unsetmergeRequestId();
    void setMergeRequestId(int32_t value);

    /// <summary>
    /// **参数解释：** 评价平均分。
    /// </summary>

    double getAverageEvaluationLevel() const;
    bool averageEvaluationLevelIsSet() const;
    void unsetaverageEvaluationLevel();
    void setAverageEvaluationLevel(double value);

    /// <summary>
    /// **参数解释：** 单人评价详情。
    /// </summary>

    std::vector<MergeRequestBaseEvaluationDto>& getEvaluations();
    bool evaluationsIsSet() const;
    void unsetevaluations();
    void setEvaluations(const std::vector<MergeRequestBaseEvaluationDto>& value);

    /// <summary>
    /// **参数解释：** 自定义评价维度详情。
    /// </summary>

    std::vector<MergeRequestCustomAverageEvaluationDto>& getCustomEvaluations();
    bool customEvaluationsIsSet() const;
    void unsetcustomEvaluations();
    void setCustomEvaluations(const std::vector<MergeRequestCustomAverageEvaluationDto>& value);


protected:
    int32_t mergeRequestId_;
    bool mergeRequestIdIsSet_;
    double averageEvaluationLevel_;
    bool averageEvaluationLevelIsSet_;
    std::vector<MergeRequestBaseEvaluationDto> evaluations_;
    bool evaluationsIsSet_;
    std::vector<MergeRequestCustomAverageEvaluationDto> customEvaluations_;
    bool customEvaluationsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowAverageEvaluationResponse_H_
