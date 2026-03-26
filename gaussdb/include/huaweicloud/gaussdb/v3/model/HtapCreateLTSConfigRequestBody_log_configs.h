
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapCreateLTSConfigRequestBody_log_configs_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapCreateLTSConfigRequestBody_log_configs_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  HtapCreateLTSConfigRequestBody_log_configs
    : public ModelBase
{
public:
    HtapCreateLTSConfigRequestBody_log_configs();
    virtual ~HtapCreateLTSConfigRequestBody_log_configs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HtapCreateLTSConfigRequestBody_log_configs members

    /// <summary>
    /// **参数解释**：  HTAP标准版实例ID，此参数是实例的唯一标识。  **约束限制**：  不涉及。  **取值范围**：  只能由英文字母、数字组成，后缀为in17，长度为36个字符。  **默认取值**：  不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**： 查询日志类型。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**： 不涉及。
    /// </summary>

    std::string getLogType() const;
    bool logTypeIsSet() const;
    void unsetlogType();
    void setLogType(const std::string& value);

    /// <summary>
    /// **参数解释**： LTS日志组ID。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**： 不涉及。
    /// </summary>

    std::string getLtsGroupId() const;
    bool ltsGroupIdIsSet() const;
    void unsetltsGroupId();
    void setLtsGroupId(const std::string& value);

    /// <summary>
    /// **参数解释**： LTS日志流ID。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**： 不涉及。
    /// </summary>

    std::string getLtsStreamId() const;
    bool ltsStreamIdIsSet() const;
    void unsetltsStreamId();
    void setLtsStreamId(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string logType_;
    bool logTypeIsSet_;
    std::string ltsGroupId_;
    bool ltsGroupIdIsSet_;
    std::string ltsStreamId_;
    bool ltsStreamIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapCreateLTSConfigRequestBody_log_configs_H_
