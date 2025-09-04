
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapLTSConfigResponse_lts_configs_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapLTSConfigResponse_lts_configs_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  HtapLTSConfigResponse_lts_configs
    : public ModelBase
{
public:
    HtapLTSConfigResponse_lts_configs();
    virtual ~HtapLTSConfigResponse_lts_configs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HtapLTSConfigResponse_lts_configs members

    /// <summary>
    /// **参数解释**： 日志类型。  **取值范围**：  不涉及。
    /// </summary>

    std::string getLogType() const;
    bool logTypeIsSet() const;
    void unsetlogType();
    void setLogType(const std::string& value);

    /// <summary>
    /// **参数解释**： LTS日志组ID。  **取值范围**：  不涉及。
    /// </summary>

    std::string getLtsGroupId() const;
    bool ltsGroupIdIsSet() const;
    void unsetltsGroupId();
    void setLtsGroupId(const std::string& value);

    /// <summary>
    /// **参数解释**： LTS日志流ID。  **取值范围**：  不涉及。
    /// </summary>

    std::string getLtsStreamId() const;
    bool ltsStreamIdIsSet() const;
    void unsetltsStreamId();
    void setLtsStreamId(const std::string& value);

    /// <summary>
    /// **参数解释**： LTS配置开关状态。  **取值范围**：  不涉及。
    /// </summary>

    std::string getEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(const std::string& value);


protected:
    std::string logType_;
    bool logTypeIsSet_;
    std::string ltsGroupId_;
    bool ltsGroupIdIsSet_;
    std::string ltsStreamId_;
    bool ltsStreamIdIsSet_;
    std::string enabled_;
    bool enabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapLTSConfigResponse_lts_configs_H_
