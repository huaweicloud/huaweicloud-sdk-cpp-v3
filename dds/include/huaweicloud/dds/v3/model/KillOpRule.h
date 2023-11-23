
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_KillOpRule_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_KillOpRule_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  KillOpRule
    : public ModelBase
{
public:
    KillOpRule();
    virtual ~KillOpRule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// KillOpRule members

    /// <summary>
    /// killOp规则ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// Sql语句操作类型。 最多支持同时选择6种语句类型。同时选择多种类型时，匹配任意一种类型时规则生效。 - insert，表示插入语句。  - update，表示更新语句。  - query，表示查询语句。  - command，表示命令语句。  - remove，表示删除语句。  - getmore，表示获取更多数据语句。
    /// </summary>

    std::string getOperationTypes() const;
    bool operationTypesIsSet() const;
    void unsetoperationTypes();
    void setOperationTypes(const std::string& value);

    /// <summary>
    /// killOp规则状态。  - ENABLED，规则生效中。 - DISABLED，规则禁用中。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 表命名空间。取值格式：库名.表名。同时配置多组信息时，匹配任意一组信息时规则生效 - 目前仅支持配置一组信息 - 可为空，表示不做限制。 - 单独库名，表示对某个库下的所有集合生效。 - 库名.表名，表示对具体库下的具体的集合生效。
    /// </summary>

    std::string getNamespaces() const;
    bool namespacesIsSet() const;
    void unsetnamespaces();
    void setNamespaces(const std::string& value);

    /// <summary>
    /// 客户端连接IP。只支持IPV4。可为空，表示不做限制。最多支持配置5个IP。同时配置多个IP时，匹配任意一个IP时规则生效。
    /// </summary>

    std::string getClientIps() const;
    bool clientIpsIsSet() const;
    void unsetclientIps();
    void setClientIps(const std::string& value);

    /// <summary>
    /// 执行计划。 默认值空，表示不做限制。  - COLLSCAN。 - SORT_KEY_GENERATOR。 - SKIP。 - LIMIT。 - GEO_NEAR_2DSPHERE。 - GEO_NEAR_2D。 - AGGREGATE。 - OR。
    /// </summary>

    std::string getPlanSummary() const;
    bool planSummaryIsSet() const;
    void unsetplanSummary();
    void setPlanSummary(const std::string& value);

    /// <summary>
    /// 最大并发数。 取值： 不能为负数，可为空，默认为0，表示不做限制， 最小值为1， 最大值为100000。secs_running和max_concurrency不可同时为0。
    /// </summary>

    int32_t getMaxConcurrency() const;
    bool maxConcurrencyIsSet() const;
    void unsetmaxConcurrency();
    void setMaxConcurrency(int32_t value);

    /// <summary>
    /// 单条操作最大运行时长。取值： 不能为负数，可为空，默认为0，表示不做限制。单位：s。最小值为2， 最大值为86400。secs_running和max_concurrency不可同时为0。
    /// </summary>

    int32_t getSecsRunning() const;
    bool secsRunningIsSet() const;
    void unsetsecsRunning();
    void setSecsRunning(int32_t value);

    /// <summary>
    /// 节点类型。  - mongos_shard，表示同时在mongos和shard节点生效。 - mongos，表示只在集群mongos节点生效。 - shard，表示只在集群shard节点生效。 - replica，表示只在副本集节点生效。
    /// </summary>

    std::string getNodeType() const;
    bool nodeTypeIsSet() const;
    void unsetnodeType();
    void setNodeType(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string operationTypes_;
    bool operationTypesIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string namespaces_;
    bool namespacesIsSet_;
    std::string clientIps_;
    bool clientIpsIsSet_;
    std::string planSummary_;
    bool planSummaryIsSet_;
    int32_t maxConcurrency_;
    bool maxConcurrencyIsSet_;
    int32_t secsRunning_;
    bool secsRunningIsSet_;
    std::string nodeType_;
    bool nodeTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_KillOpRule_H_
