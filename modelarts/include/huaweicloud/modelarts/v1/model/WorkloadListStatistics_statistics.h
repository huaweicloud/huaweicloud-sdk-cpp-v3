
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkloadListStatistics_statistics_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkloadListStatistics_statistics_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/WorkloadStatistics.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数描述**：作业的统计信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkloadListStatistics_statistics
    : public ModelBase
{
public:
    WorkloadListStatistics_statistics();
    virtual ~WorkloadListStatistics_statistics();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkloadListStatistics_statistics members

    /// <summary>
    /// **参数描述**：统计信息列表数量。 **取值范围**：不涉及。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// **参数描述**：特定作业类型统计信息。
    /// </summary>

    std::vector<WorkloadStatistics>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<WorkloadStatistics>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<WorkloadStatistics> items_;
    bool itemsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkloadListStatistics_statistics_H_
