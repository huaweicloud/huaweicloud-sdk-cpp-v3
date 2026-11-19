
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateServerlessScaleToZeroPolicy_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateServerlessScaleToZeroPolicy_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设置Serverless自动启停策略请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpdateServerlessScaleToZeroPolicy
    : public ModelBase
{
public:
    UpdateServerlessScaleToZeroPolicy();
    virtual ~UpdateServerlessScaleToZeroPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateServerlessScaleToZeroPolicy members

    /// <summary>
    /// **参数解释**：  是否开启Scale to Zero自动启停。  **约束限制**：  仅Serverless实例支持。  **取值范围**：  - true：开启。实例空闲达idle_duration_seconds阈值时算力自动缩容到零（停止VM计费），有新连接时自动唤醒恢复。 - false：关闭。实例正常计费。  **默认取值**：  false。
    /// </summary>

    bool isScaleToZero() const;
    bool scaleToZeroIsSet() const;
    void unsetscaleToZero();
    void setScaleToZero(bool value);

    /// <summary>
    /// **参数解释**：  触发缩容到零的空闲检测时长（秒）。实例所有节点无活跃用户连接达到该时长后，自动缩容到零。  **约束限制**：  - 当scale_to_zero为true时，该参数必填。 - 当scale_to_zero为false时，该参数可不传。  **取值范围**：  300～3600。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getIdleDurationSeconds() const;
    bool idleDurationSecondsIsSet() const;
    void unsetidleDurationSeconds();
    void setIdleDurationSeconds(int32_t value);


protected:
    bool scaleToZero_;
    bool scaleToZeroIsSet_;
    int32_t idleDurationSeconds_;
    bool idleDurationSecondsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateServerlessScaleToZeroPolicy_H_
