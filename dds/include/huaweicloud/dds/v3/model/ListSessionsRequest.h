
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListSessionsRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListSessionsRequest_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_DDS_V3_EXPORT  ListSessionsRequest
    : public ModelBase
{
public:
    ListSessionsRequest();
    virtual ~ListSessionsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListSessionsRequest members

    /// <summary>
    /// 节点ID。允许查询的节点如下： 集群下面的 mongos节点以及 副本集、单节点实例下面的所有节点。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 索引位置，偏移量。 从第一条数据偏移offset条数据后开始查询，默认为0（偏移0条数据，表示从第一条数据开始查询），必须为数字，不能为负数。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询记录数。取值范围[1, 20]，默认10 （表示返回10条数据）。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 执行计划描述。取空值表示查询所有语句类型，也可指定执行计划，例如： COLLSCAN IXSCAN FETCH SORT LIMIT SKIP COUNT COUNT_SCAN TEXT PROJECTION 等
    /// </summary>

    std::string getPlanSummary() const;
    bool planSummaryIsSet() const;
    void unsetplanSummary();
    void setPlanSummary(const std::string& value);

    /// <summary>
    /// 操作类型。取空值表示查询所有操作类型。也可指定操作类型，例如： none update insert query command getmore remove killcursors等
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 命名空间。取空值表示查询所有命名空间。也可根据当前业务进行指定。
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);

    /// <summary>
    /// 运行时间，单位为 ms。取空值表示查询所有的运行时间。也可根据当前业务需要进行配置，表示查询超出 cost_time 的会话。
    /// </summary>

    int32_t getCostTime() const;
    bool costTimeIsSet() const;
    void unsetcostTime();
    void setCostTime(int32_t value);


protected:
    std::string nodeId_;
    bool nodeIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string planSummary_;
    bool planSummaryIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string namespace_;
    bool namespaceIsSet_;
    int32_t costTime_;
    bool costTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListSessionsRequest& dereference_from_shared_ptr(std::shared_ptr<ListSessionsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListSessionsRequest_H_
