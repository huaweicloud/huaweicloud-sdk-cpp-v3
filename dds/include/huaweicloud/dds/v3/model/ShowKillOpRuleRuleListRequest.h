
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowKillOpRuleRuleListRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowKillOpRuleRuleListRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ShowKillOpRuleRuleListRequest
    : public ModelBase
{
public:
    ShowKillOpRuleRuleListRequest();
    virtual ~ShowKillOpRuleRuleListRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowKillOpRuleRuleListRequest members

    /// <summary>
    /// 实例ID，可以调用“[查询实例列表和详情](x-wc://file&#x3D;zh-cn_topic_0000001369935045.xml)”接口获取。如果未申请实例，可以调用“[创建实例](x-wc://file&#x3D;zh-cn_topic_0000001369734929.xml)”接口创建。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// Sql语句操作类型。  - insert，表示插入语句。  - update，表示更新语句。  - query，表示查询语句。  - command，表示命令语句。  - remove，表示删除语句。  - getmore，表示获取更多数据语句。
    /// </summary>

    std::string getOperationTypes() const;
    bool operationTypesIsSet() const;
    void unsetoperationTypes();
    void setOperationTypes(const std::string& value);

    /// <summary>
    /// 表命名空间。取值格式：库名.表名。 - 可为空，表示不做限制。 - 单独库名，表示对某个库下的所有集合生效。 - 库名.表名，表示对具体库下的具体的集合生效。
    /// </summary>

    std::string getNamespaces() const;
    bool namespacesIsSet() const;
    void unsetnamespaces();
    void setNamespaces(const std::string& value);

    /// <summary>
    /// killOp规则状态。  - ENABLED，规则生效中。 - DISABLED，规则禁用中。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 执行计划。 默认值空，表示不做限制。  - COLLSCAN。 - SORT_KEY_GENERATOR。 - SKIP。 - LIMIT。 - GEO_NEAR_2DSPHERE。 - GEO_NEAR_2D。 - AGGREGATE。 - OR。
    /// </summary>

    std::string getPlanSummary() const;
    bool planSummaryIsSet() const;
    void unsetplanSummary();
    void setPlanSummary(const std::string& value);

    /// <summary>
    /// 索引位置，偏移量。  从第一条数据偏移offset条数据后开始查询，默认为0（偏移0条数据，表示从第一条数据开始查询）。 取值必须为数字，不能为负数。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询个数上限值。 - 取值范围: 1~100。 - 不传该参数时，默认查询前100条信息。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string operationTypes_;
    bool operationTypesIsSet_;
    std::string namespaces_;
    bool namespacesIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string planSummary_;
    bool planSummaryIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowKillOpRuleRuleListRequest& dereference_from_shared_ptr(std::shared_ptr<ShowKillOpRuleRuleListRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowKillOpRuleRuleListRequest_H_
