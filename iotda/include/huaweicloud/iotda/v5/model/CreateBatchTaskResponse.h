
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateBatchTaskResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateBatchTaskResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/iotda/v5/model/TaskPolicy.h>
#include <string>
#include <map>
#include <huaweicloud/iotda/v5/model/TaskProgress.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  CreateBatchTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateBatchTaskResponse();
    virtual ~CreateBatchTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateBatchTaskResponse members

    /// <summary>
    /// 批量任务ID，创建批量任务时由物联网平台分配获得。
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 批量任务名称。
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// 批量任务类型，取值范围：firmwareUpgrade，softwareUpgrade，createDevices，deleteDevices，freezeDevices，unfreezeDevices，createCommands，createAsyncCommands，createMessages，updateDeviceShadows。 - softwareUpgrade: 软件升级任务 - firmwareUpgrade: 固件升级任务 - createDevices: 批量创建设备任务 - deleteDevices: 批量删除设备任务 - freezeDevices: 批量冻结设备任务 - unfreezeDevices: 批量解冻设备任务 - createCommands: 批量创建同步命令任务 - createAsyncCommands: 批量创建异步命令任务 - createMessages: 批量创建消息任务 - updateDeviceShadows: 批量配置设备影子任务 - updateDevices：批量更新设备任务
    /// </summary>

    std::string getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const std::string& value);

    /// <summary>
    /// **参数说明**：批量任务的模式，当前只支持网关模式，当task_type为firmwareUpgrade，softwareUpgrade支持该参数。软固件升级的场景下，若升级的设备为某个网关的子设备，则平台下发获取版本信息通知和平台下发升级通知将携带task_id（软固件升级批量任务的任务ID）和sub_device_count（批量任务中网关设备包含的升级子设备数量）字段。 **取值范围**：GATEWAY: 网关模式。
    /// </summary>

    std::string getTaskMode() const;
    bool taskModeIsSet() const;
    void unsettaskMode();
    void setTaskMode(const std::string& value);

    /// <summary>
    /// **参数说明**：批量任务额外扩展信息，当task_type为firmwareUpgrade，softwareUpgrade支持该参数。软固件升级的场景下，平台下发获取版本信息通知和平台下发升级通知将携带该字段。 **取值范围**：最长不超过512个字符。
    /// </summary>

    Object getTaskExtInfo() const;
    bool taskExtInfoIsSet() const;
    void unsettaskExtInfo();
    void setTaskExtInfo(const Object& value);

    /// <summary>
    /// 执行批量任务的目标，当task_type为firmwareUpgrade，softwareUpgrade，deleteDevices，freezeDevices，unfreezeDevices，createCommands，createAsyncCommands，createMessages，updateDeviceShadows，此处填写device_id列表。
    /// </summary>

    std::vector<std::string>& getTargets();
    bool targetsIsSet() const;
    void unsettargets();
    void setTargets(const std::vector<std::string>& value);

    /// <summary>
    /// 任务目标筛选参数。Json格式，里面是一个个键值对，（K,V）格式标识筛选targets需要的参数，目前支持的K有group_ids（V填写group_id数组，eg:[\&quot;e495cf17-ff79-4294-8f64-4d367919d665\&quot;]，任务则会筛选出来符合该群组条件的设备作为目标）
    /// </summary>

    std::map<std::string, Object>& getTargetsFilter();
    bool targetsFilterIsSet() const;
    void unsettargetsFilter();
    void setTargetsFilter(const std::map<std::string, Object>& value);

    /// <summary>
    /// 执行任务数据文档，Json格式。(当task_type为softwareUpgrade|firmwareUpgrade，也就是软固件升级任务时，Json里面是(K,V)键值对，需要填写key为package_id，value为在平台上传的软固件附件id，id由portal软件库包管理上传并查询获得。当task_type为createCommands，也就是批量创建同步命令任务时，Json里面是命令相关参数，eg：{\&quot;service_id\&quot;:\&quot;water\&quot;,\&quot;command_name\&quot;:\&quot;ON_OFF\&quot;,\&quot;paras\&quot;:{\&quot;value\&quot;:\&quot;ON\&quot;}}，参考[[设备同步命令](https://support.huaweicloud.com/api-iothub/iot_06_v5_0038.html)](tag:hws)[[设备同步命令](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_0038.html)](tag:hws_hk))。当task_type为createAsyncCommands，也就是批量创建异步命令任务时，Json里面是命令相关参数，eg：{\&quot;service_id\&quot;:\&quot;water\&quot;,\&quot;command_name\&quot;:\&quot;ON_OFF\&quot;,\&quot;paras\&quot;:{\&quot;value\&quot;:\&quot;ON\&quot;},\&quot;expire_time\&quot;:0,\&quot;send_strategy\&quot;:\&quot;immediately\&quot;}，参考[[设备异步命令](https://support.huaweicloud.com/api-iothub/iot_06_v5_0040.html)](tag:hws)[[设备异步命令](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_0040.html)](tag:hws_hk))。当task_type为updateDeviceShadows，也就是批量配置设备影子任务时，Json里面是命令相关参数，eg：{\&quot;shadow\&quot;: [{\&quot;service_id\&quot;: \&quot;WaterMeter\&quot;,\&quot;desired\&quot;: {\&quot;temperature\&quot;: \&quot;60\&quot;}}]}，参考[[配置设备影子预期数据](https://support.huaweicloud.com/api-iothub/iot_06_v5_0072.html)](tag:hws)[[配置设备影子预期数据](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_0072.html)](tag:hws_hk))。
    /// </summary>

    Object getDocument() const;
    bool documentIsSet() const;
    void unsetdocument();
    void setDocument(const Object& value);

    /// <summary>
    /// 
    /// </summary>

    TaskPolicy getTaskPolicy() const;
    bool taskPolicyIsSet() const;
    void unsettaskPolicy();
    void setTaskPolicy(const TaskPolicy& value);

    /// <summary>
    /// 批量任务的状态，可选参数，取值范围：Success|Fail|Processing|PartialSuccess|Stopped|Waitting|Initializing|Stopping。 - Initializing: 初始化中。 - Waitting: 等待中。 - Processing: 执行中。 - Success: 成功。 - Fail: 失败。 - PartialSuccess: 部分成功。 - Stopped: 停止。 - Stopping 停止中。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 批量任务状态描述(包含主任务失败错误信息)
    /// </summary>

    std::string getStatusDesc() const;
    bool statusDescIsSet() const;
    void unsetstatusDesc();
    void setStatusDesc(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TaskProgress getTaskProgress() const;
    bool taskProgressIsSet() const;
    void unsettaskProgress();
    void setTaskProgress(const TaskProgress& value);

    /// <summary>
    /// 批量任务的创建时间。格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如20151212T121212Z。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;
    std::string taskType_;
    bool taskTypeIsSet_;
    std::string taskMode_;
    bool taskModeIsSet_;
    Object taskExtInfo_;
    bool taskExtInfoIsSet_;
    std::vector<std::string> targets_;
    bool targetsIsSet_;
    std::map<std::string, Object> targetsFilter_;
    bool targetsFilterIsSet_;
    Object document_;
    bool documentIsSet_;
    TaskPolicy taskPolicy_;
    bool taskPolicyIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string statusDesc_;
    bool statusDescIsSet_;
    TaskProgress taskProgress_;
    bool taskProgressIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateBatchTaskResponse_H_
