
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListAutoScalingHistoryResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListAutoScalingHistoryResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/rds/v3/model/MysqlAutoScalingRecord.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListAutoScalingHistoryResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAutoScalingHistoryResponse();
    virtual ~ListAutoScalingHistoryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAutoScalingHistoryResponse members

    /// <summary>
    /// **参数解释**：  记录条数。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// **参数解释**：  记录数组。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::vector<MysqlAutoScalingRecord>& getRecords();
    bool recordsIsSet() const;
    void unsetrecords();
    void setRecords(const std::vector<MysqlAutoScalingRecord>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<MysqlAutoScalingRecord> records_;
    bool recordsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListAutoScalingHistoryResponse_H_
