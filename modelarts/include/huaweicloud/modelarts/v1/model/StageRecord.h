
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_StageRecord_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_StageRecord_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/StageInfoWithSub.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 作业流程阶段记录。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  StageRecord
    : public ModelBase
{
public:
    StageRecord();
    virtual ~StageRecord();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StageRecord members

    /// <summary>
    /// **参数解释**：阶段记录序号，顺序递增，最大序号记录为当前最新记录。  **取值范围**：不涉及。
    /// </summary>

    int32_t getRecordOrder() const;
    bool recordOrderIsSet() const;
    void unsetrecordOrder();
    void setRecordOrder(int32_t value);

    /// <summary>
    /// **参数解释**：主阶段信息列表。
    /// </summary>

    std::vector<StageInfoWithSub>& getStages();
    bool stagesIsSet() const;
    void unsetstages();
    void setStages(const std::vector<StageInfoWithSub>& value);


protected:
    int32_t recordOrder_;
    bool recordOrderIsSet_;
    std::vector<StageInfoWithSub> stages_;
    bool stagesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_StageRecord_H_
