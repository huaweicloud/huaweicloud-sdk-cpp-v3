
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaurusRestartInstanceRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaurusRestartInstanceRequest_H_


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
/// 重启实例
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  TaurusRestartInstanceRequest
    : public ModelBase
{
public:
    TaurusRestartInstanceRequest();
    virtual ~TaurusRestartInstanceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaurusRestartInstanceRequest members

    /// <summary>
    /// 实例是否延迟重启，默认false，立即重启。  - true: 延迟重启，实例将在运维时间窗内自动重启。 - false: 立即重启。
    /// </summary>

    bool isDelay() const;
    bool delayIsSet() const;
    void unsetdelay();
    void setDelay(bool value);

    /// <summary>
    /// **参数解释**：  实例重启后生效的max_connections内核参数配置值。max_connections用于设置允许同时连接到数据库实例的最大客户端连接数。  **约束限制**：  不涉及。  **取值范围**： 30-100000。  **默认取值**： 不涉及。
    /// </summary>

    int32_t getMaxConnections() const;
    bool maxConnectionsIsSet() const;
    void unsetmaxConnections();
    void setMaxConnections(int32_t value);


protected:
    bool delay_;
    bool delayIsSet_;
    int32_t maxConnections_;
    bool maxConnectionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaurusRestartInstanceRequest_H_
