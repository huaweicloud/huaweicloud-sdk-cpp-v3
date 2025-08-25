
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleGroupStatus_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleGroupStatus_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/NodePoolCondition.h>
#include <huaweicloud/cce/v3/model/ScaleGroupStatus_existingNodeCount.h>
#include <string>
#include <huaweicloud/cce/v3/model/ScaleGroupStatus_upcomingNodeCount.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 伸缩组当前详细状态信息
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ScaleGroupStatus
    : public ModelBase
{
public:
    ScaleGroupStatus();
    virtual ~ScaleGroupStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScaleGroupStatus members

    /// <summary>
    /// 伸缩组名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 伸缩组uuid
    /// </summary>

    std::string getUid() const;
    bool uidIsSet() const;
    void unsetuid();
    void setUid(const std::string& value);

    /// <summary>
    /// 伸缩组创建时间
    /// </summary>

    std::string getCreationTimestamp() const;
    bool creationTimestampIsSet() const;
    void unsetcreationTimestamp();
    void setCreationTimestamp(const std::string& value);

    /// <summary>
    /// 伸缩组更新时间
    /// </summary>

    std::string getUpdateTimestamp() const;
    bool updateTimestampIsSet() const;
    void unsetupdateTimestamp();
    void setUpdateTimestamp(const std::string& value);

    /// <summary>
    /// 伸缩组状态。 - 空值：可用（伸缩组当前节点数已达到预期，且无伸缩中的节点） - Synchronizing：伸缩中（伸缩组当前节点数未达到预期，且无伸缩中的节点） - Synchronized：伸缩等待中（伸缩组当前节点数未达到预期，或者存在伸缩中的节点） - SoldOut：伸缩组当前不可扩容（兼容字段，标记节点池资源售罄、资源配额不足等不可扩容状态） &gt; 上述伸缩组状态已废弃，仅兼容保留，不建议使用，替代感知方式如下： &gt; - 伸缩组扩缩状态：可通过desiredNodeCount/existingNodeCount/upcomingNodeCount节点状态统计信息，精确感知当前伸缩组扩缩状态。 &gt; - 伸缩组可扩容状态：可通过conditions感知伸缩组详细状态，其中\&quot;Scalable\&quot;可替代SoldOut语义。 - Deleting：删除中 - Error：错误 
    /// </summary>

    std::string getPhase() const;
    bool phaseIsSet() const;
    void unsetphase();
    void setPhase(const std::string& value);

    /// <summary>
    /// 伸缩组期望节点数
    /// </summary>

    int32_t getDesiredNodeCount() const;
    bool desiredNodeCountIsSet() const;
    void unsetdesiredNodeCount();
    void setDesiredNodeCount(int32_t value);

    /// <summary>
    /// 订单未支付节点个数
    /// </summary>

    int32_t getUnpaidScaleNodeCount() const;
    bool unpaidScaleNodeCountIsSet() const;
    void unsetunpaidScaleNodeCount();
    void setUnpaidScaleNodeCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ScaleGroupStatus_existingNodeCount getExistingNodeCount() const;
    bool existingNodeCountIsSet() const;
    void unsetexistingNodeCount();
    void setExistingNodeCount(const ScaleGroupStatus_existingNodeCount& value);

    /// <summary>
    /// 
    /// </summary>

    ScaleGroupStatus_upcomingNodeCount getUpcomingNodeCount() const;
    bool upcomingNodeCountIsSet() const;
    void unsetupcomingNodeCount();
    void setUpcomingNodeCount(const ScaleGroupStatus_upcomingNodeCount& value);

    /// <summary>
    /// 伸缩组禁止缩容的节点数
    /// </summary>

    int32_t getScaleDownDisabledNodeCount() const;
    bool scaleDownDisabledNodeCountIsSet() const;
    void unsetscaleDownDisabledNodeCount();
    void setScaleDownDisabledNodeCount(int32_t value);

    /// <summary>
    /// 伸缩组当前详细状态列表，详情参见Condition类型定义。
    /// </summary>

    std::vector<NodePoolCondition>& getConditions();
    bool conditionsIsSet() const;
    void unsetconditions();
    void setConditions(const std::vector<NodePoolCondition>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string uid_;
    bool uidIsSet_;
    std::string creationTimestamp_;
    bool creationTimestampIsSet_;
    std::string updateTimestamp_;
    bool updateTimestampIsSet_;
    std::string phase_;
    bool phaseIsSet_;
    int32_t desiredNodeCount_;
    bool desiredNodeCountIsSet_;
    int32_t unpaidScaleNodeCount_;
    bool unpaidScaleNodeCountIsSet_;
    ScaleGroupStatus_existingNodeCount existingNodeCount_;
    bool existingNodeCountIsSet_;
    ScaleGroupStatus_upcomingNodeCount upcomingNodeCount_;
    bool upcomingNodeCountIsSet_;
    int32_t scaleDownDisabledNodeCount_;
    bool scaleDownDisabledNodeCountIsSet_;
    std::vector<NodePoolCondition> conditions_;
    bool conditionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleGroupStatus_H_
