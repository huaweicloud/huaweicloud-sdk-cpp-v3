
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowAutoCesAlarmResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowAutoCesAlarmResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/AutoCesAlarmInfo.h>
#include <vector>

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
class HUAWEICLOUD_RDS_V3_EXPORT  ShowAutoCesAlarmResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAutoCesAlarmResponse();
    virtual ~ShowAutoCesAlarmResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAutoCesAlarmResponse members

    /// <summary>
    /// **参数解释**：  自动告警列表  **约束限制**：  不涉及。
    /// </summary>

    std::vector<AutoCesAlarmInfo>& getEntities();
    bool entitiesIsSet() const;
    void unsetentities();
    void setEntities(const std::vector<AutoCesAlarmInfo>& value);

    /// <summary>
    /// **参数解释**：  总数量。  **约束限制**：  不涉及。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::vector<AutoCesAlarmInfo> entities_;
    bool entitiesIsSet_;
    int32_t count_;
    bool countIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowAutoCesAlarmResponse_H_
