
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckScheduleTaskExistRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckScheduleTaskExistRequestBody_H_


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
/// 查询任务存在性请求体
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CheckScheduleTaskExistRequestBody
    : public ModelBase
{
public:
    CheckScheduleTaskExistRequestBody();
    virtual ~CheckScheduleTaskExistRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckScheduleTaskExistRequestBody members

    /// <summary>
    /// **参数解释**： 定时任务类型。  **约束限制**： 不涉及。  **取值范围**：   - PROXY_VERSION_UPGRADE：表示升级数据库代理的内核小版本。   - VERSION_UPGRADE：表示升级实例的内核小版本。   - RESIZE_FLAVOR：表示实例规格变更。   - REBOOT_NODE：表示重启节点。   - REBOOT_INSTANCE：表示重启实例。  **默认取值**：   不涉及。
    /// </summary>

    std::string getScheduleType() const;
    bool scheduleTypeIsSet() const;
    void unsetscheduleType();
    void setScheduleType(const std::string& value);

    /// <summary>
    /// **参数解释**： 数据库代理ID。 获取方法请参见[查询数据库代理信息列表](https://support.huaweicloud.com/api-taurusdb/ShowGaussMySqlProxyList.html)。  **约束限制**： 不涉及。  **取值范围**： 不涉及。  **默认取值**： 不涉及。
    /// </summary>

    std::string getProxyId() const;
    bool proxyIdIsSet() const;
    void unsetproxyId();
    void setProxyId(const std::string& value);


protected:
    std::string scheduleType_;
    bool scheduleTypeIsSet_;
    std::string proxyId_;
    bool proxyIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckScheduleTaskExistRequestBody_H_
