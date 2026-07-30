
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListTrainingJobStagesResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListTrainingJobStagesResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/StageRecord.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListTrainingJobStagesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTrainingJobStagesResponse();
    virtual ~ListTrainingJobStagesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTrainingJobStagesResponse members

    /// <summary>
    /// **参数解释**：总条数。 **取值范围**：不涉及。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// **参数解释**：阶段记录。
    /// </summary>

    std::vector<StageRecord>& getRunningRecords();
    bool runningRecordsIsSet() const;
    void unsetrunningRecords();
    void setRunningRecords(const std::vector<StageRecord>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<StageRecord> runningRecords_;
    bool runningRecordsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListTrainingJobStagesResponse_H_
