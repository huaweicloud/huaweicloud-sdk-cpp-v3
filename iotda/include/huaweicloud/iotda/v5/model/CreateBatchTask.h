
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateBatchTask_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateBatchTask_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/iotda/v5/model/TaskPolicy.h>
#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 添加任务结构体
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  CreateBatchTask
    : public ModelBase
{
public:
    CreateBatchTask();
    virtual ~CreateBatchTask();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateBatchTask members

    /// <summary>
    /// **参数说明**：资源空间ID。此参数为非必选参数，存在多资源空间的用户需要使用该接口时，建议携带该参数指定创建的批量任务归属到哪个资源空间下，否则创建的批量任务将会归属到[[默认资源空间](https://support.huaweicloud.com/usermanual-iothub/iot_01_0006.html#section0)](tag:hws)[[默认资源空间](https://support.huaweicloud.com/intl/zh-cn/usermanual-iothub/iot_01_0006.html#section0)](tag:hws_hk)下。 **取值范围**：长度不超过36，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// **参数说明**：批量任务名称。 **取值范围**：长度不超过128，只允许中文、字母、数字、下划线（_）的组合。
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// **参数说明**：批量任务类型。 **取值范围**： - softwareUpgrade: 软件升级任务 - firmwareUpgrade: 固件升级任务 - moduleUpgrade: 模块升级任务 - createDevices: 批量创建设备任务 - deleteDevices: 批量删除设备任务 - freezeDevices: 批量冻结设备任务 - unfreezeDevices: 批量解冻设备任务 - createCommands: 批量创建同步命令任务 - createAsyncCommands: 批量创建异步命令任务 - createMessages: 批量创建消息任务 - updateDeviceShadows：批量配置设备影子任务 - updateDevices：批量更新设备任务
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
    /// **参数说明**：执行批量任务的目标，此处填写device_id列表，且最多支持3万个device_id。当task_type为firmwareUpgrade，softwareUpgrade，deleteDevices，freezeDevices，unfreezeDevices，createCommands，createAsyncCommands，createMessages，updateDeviceShadows，支持该参数。同时使用targets、targets_filter、document_source参数时，只有一个参数会生效，且平台优先使用targets，其次是targets_filter，最后是document_source。 **取值范围**：device_id列表。device_id支持长度不超过128，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::vector<std::string>& getTargets();
    bool targetsIsSet() const;
    void unsettargets();
    void setTargets(const std::vector<std::string>& value);

    /// <summary>
    /// **参数说明**：任务目标筛选参数。Json格式，里面是一个个键值对，（K,V）格式标识筛选targets需要的参数，目前支持的K有group_ids（V填写group_id数组，eg:[\&quot;e495cf17-ff79-4294-8f64-4d367919d665\&quot;]，任务则会筛选出来符合该群组条件的设备作为目标）。当task_type为firmwareUpgrade，softwareUpgrade，deleteDevices，freezeDevices，unfreezeDevices，createCommands，createAsyncCommands，createMessages，updateDeviceShadows，支持该参数。同时使用targets、targets_filter、document_source参数时，只有一个参数会生效，且平台优先使用targets，其次是targets_filter，最后是document_source。
    /// </summary>

    std::map<std::string, Object>& getTargetsFilter();
    bool targetsFilterIsSet() const;
    void unsettargetsFilter();
    void setTargetsFilter(const std::map<std::string, Object>& value);

    /// <summary>
    /// **参数说明**：执行任务数据文档，Json格式，Json里面是(K,V)键值对。当task_type为firmwareUpgrade，softwareUpgrade，createCommands，createAsyncCommands，createMessages，updateDeviceShadows，支持该参数。 - softwareUpgrade|firmwareUpgrade|moduleUpgrade，需要填写key为package_ids，value为在平台上传的软固件附件id，id由portal软件库包管理上传并查询获得。eg：“{\&quot;package_ids\&quot;: [\&quot;32822e5744a45ede319d2c50\&quot;]}”。 - createCommands，需要填写同步命令相关参数，eg：“{\&quot;service_id\&quot;:\&quot;water\&quot;,\&quot;command_name\&quot;:\&quot;ON_OFF\&quot;,\&quot;paras\&quot;:{\&quot;value\&quot;:\&quot;ON\&quot;}}”，参考[[设备同步命令](https://support.huaweicloud.com/api-iothub/iot_06_v5_0038.html)](tag:hws)[[设备同步命令](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_0038.html)](tag:hws_hk))。 - createAsyncCommands，需要填写异步命令相关参数，eg：“{\&quot;service_id\&quot;:\&quot;water\&quot;,\&quot;command_name\&quot;:\&quot;ON_OFF\&quot;,\&quot;paras\&quot;:{\&quot;value\&quot;:\&quot;ON\&quot;},\&quot;expire_time\&quot;:0,\&quot;send_strategy\&quot;:\&quot;immediately\&quot;}”，参考[[设备异步命令](https://support.huaweicloud.com/api-iothub/iot_06_v5_0040.html)](tag:hws)[[设备异步命令](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_0040.html)](tag:hws_hk))。 - createMessages，需要填写消息下发相关参数，eg：“{\&quot;message_id\&quot;:\&quot;99b32da9-cd17-4cdf-a286-f6e849cbc364\&quot;,\&quot;name\&quot;:\&quot;messageName\&quot;,\&quot;message\&quot;:\&quot;HelloWorld\&quot;,\&quot;encoding\&quot;:\&quot;none\&quot;,\&quot;payload_format\&quot;:\&quot;standard\&quot;,\&quot;topic\&quot;:\&quot;messageDown\&quot;,\&quot;topic_full_name\&quot;:\&quot;/device/message/down\&quot;}”，参考[[下发设备消息](https://support.huaweicloud.com/api-iothub/iot_06_v5_0059.html)](tag:hws)[[下发设备消息](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_0059.html)](tag:hws_hk))。 - updateDeviceShadows，需要填写配置设备影子相关参数，eg：“{\&quot;shadow\&quot;: [{\&quot;service_id\&quot;: \&quot;WaterMeter\&quot;,\&quot;desired\&quot;: {\&quot;temperature\&quot;: \&quot;60\&quot;}}]}”，参考[[配置设备影子预期数据](https://support.huaweicloud.com/api-iothub/iot_06_v5_0072.html)](tag:hws)[[配置设备影子预期数据](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_0072.html)](tag:hws_hk))。限制说明：1. service_id和desired参数必填。2. 配置的service_id数量不大于5个且service_id不能重复。3. 配置参数内容大小不超过10K。
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
    /// **参数说明**：上传的批量任务文件ID。当task_type为createDevices，updateDevices，deleteDevices，freezeDevices，unfreezeDevices时，支持该参数。使用该参数时，需要先调用批量任务的文件管理接口上传文件来获取文件ID，文件样例请参见 [批量注册设备模板](https://iot-developer.obs.cn-north-4.myhuaweicloud.com/IoTM/2023-3/BatchCreateDevices_Template.xlsx)，[批量更新设备模板](https://iot-developer.obs.cn-north-4.myhuaweicloud.com/IoTM/2023-3/BatchUpdateDevices_Template.xlsx)，[批量删除设备模板](https://developer.obs.cn-north-4.myhuaweicloud.com/template/BatchDeleteDevices_Template.xlsx)，[批量冻结设备模板](https://developer.obs.cn-north-4.myhuaweicloud.com/template/BatchFreezeDevices_Template.xlsx)，[批量解冻设备模板](https://developer.obs.cn-north-4.myhuaweicloud.com/template/BatchUnfreezeDevices_Template.xlsx)。同时使用targets、targets_filter、document_source参数时，只有一个参数会生效，且平台优先使用targets，其次是targets_filter，最后是document_source。
    /// </summary>

    std::string getDocumentSource() const;
    bool documentSourceIsSet() const;
    void unsetdocumentSource();
    void setDocumentSource(const std::string& value);


protected:
    std::string appId_;
    bool appIdIsSet_;
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
    std::string documentSource_;
    bool documentSourceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateBatchTask_H_
