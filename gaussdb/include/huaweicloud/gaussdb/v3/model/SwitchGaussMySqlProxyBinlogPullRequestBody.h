
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SwitchGaussMySqlProxyBinlogPullRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SwitchGaussMySqlProxyBinlogPullRequestBody_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SwitchGaussMySqlProxyBinlogPullRequestBody
    : public ModelBase
{
public:
    SwitchGaussMySqlProxyBinlogPullRequestBody();
    virtual ~SwitchGaussMySqlProxyBinlogPullRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchGaussMySqlProxyBinlogPullRequestBody members

    /// <summary>
    /// **参数解释**：  数据库代理模式。  **约束限制**：  不涉及。  **取值范围**： - readwrite：读写模式。 - readonly：TP只读模式。  **默认取值**：  不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：  数据库代理拉取Binlog开关。  **约束限制**：  不涉及。  **取值范围**： - true：开启。 - false：关闭。  **默认取值**：  不涉及。
    /// </summary>

    bool isSupportBinlogPull() const;
    bool supportBinlogPullIsSet() const;
    void unsetsupportBinlogPull();
    void setSupportBinlogPull(bool value);

    /// <summary>
    /// **参数解释**： 数据库代理是否从数据库主节点拉取Binlog。  **约束限制**：  - 读写代理可以设置从数据库主节点或者只读节点拉取Binlog，TP只读代理只支持从只读节点拉取Binlog。 - binlog_route_master参数仅在support_binlog_pull为true时生效。  **取值范围**： - true：从主节点拉取。 - false：从只读节点拉取。  **默认取值**：  false。
    /// </summary>

    bool isBinlogRouteMaster() const;
    bool binlogRouteMasterIsSet() const;
    void unsetbinlogRouteMaster();
    void setBinlogRouteMaster(bool value);


protected:
    std::string type_;
    bool typeIsSet_;
    bool supportBinlogPull_;
    bool supportBinlogPullIsSet_;
    bool binlogRouteMaster_;
    bool binlogRouteMasterIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SwitchGaussMySqlProxyBinlogPullRequestBody_H_
