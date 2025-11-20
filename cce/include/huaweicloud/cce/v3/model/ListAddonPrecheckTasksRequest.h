
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAddonPrecheckTasksRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAddonPrecheckTasksRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ListAddonPrecheckTasksRequest
    : public ModelBase
{
public:
    ListAddonPrecheckTasksRequest();
    virtual ~ListAddonPrecheckTasksRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAddonPrecheckTasksRequest members

    /// <summary>
    /// 集群ID，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// **参数解释：** 根据插件检查类型筛选结果 **约束限制：** 不涉及 **取值范围：** - addonStatic: 运行中插件巡检 - addonUpgrade: 插件升级前检查  **默认取值：** 不涉及 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 根据插件检查任务ID筛选结果，插件检查任务ID可以通过[批量创建插件检查任务](BatchCreateAddonPrecheck.xml)中的status.items[].metadata.taskID字段获取 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及 
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// **参数解释：** 根据插件实例ID筛选结果，实例ID可以通过[获取AddonInstance列表](cce_02_0326.xml)中的items[].metadata.uid字段获取 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及 
    /// </summary>

    std::string getAddonInstanceId() const;
    bool addonInstanceIdIsSet() const;
    void unsetaddonInstanceId();
    void setAddonInstanceId(const std::string& value);


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::string addonInstanceId_;
    bool addonInstanceIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAddonPrecheckTasksRequest& dereference_from_shared_ptr(std::shared_ptr<ListAddonPrecheckTasksRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAddonPrecheckTasksRequest_H_
