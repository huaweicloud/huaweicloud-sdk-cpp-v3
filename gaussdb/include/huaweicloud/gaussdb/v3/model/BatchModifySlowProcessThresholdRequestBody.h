
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchModifySlowProcessThresholdRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchModifySlowProcessThresholdRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：  批量修改实例慢会话阈值请求体。  **约束限制**：  不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  BatchModifySlowProcessThresholdRequestBody
    : public ModelBase
{
public:
    BatchModifySlowProcessThresholdRequestBody();
    virtual ~BatchModifySlowProcessThresholdRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchModifySlowProcessThresholdRequestBody members

    /// <summary>
    /// **参数解释**：  批量修改慢会话阈值的实例ID列表。实例ID只能由英文字母、数字组成，后缀为in07，长度为36个字符。  获取方法请参见[查询实例列表](https://support.huaweicloud.com/api-taurusdb/ListGaussMySqlInstancesUnifyStatus.html)。  **约束限制**：  列表不能为空，且列表长度小于等于100。
    /// </summary>

    std::vector<std::string>& getInstanceIds();
    bool instanceIdsIsSet() const;
    void unsetinstanceIds();
    void setInstanceIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：  实例慢会话阈值。单位为秒。  **约束限制**：   不涉及。  **取值范围**：  1-86400。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getSlowProcessThreshold() const;
    bool slowProcessThresholdIsSet() const;
    void unsetslowProcessThreshold();
    void setSlowProcessThreshold(int32_t value);


protected:
    std::vector<std::string> instanceIds_;
    bool instanceIdsIsSet_;
    int32_t slowProcessThreshold_;
    bool slowProcessThresholdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchModifySlowProcessThresholdRequestBody_H_
