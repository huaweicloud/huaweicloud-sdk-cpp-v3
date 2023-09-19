
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_UpdateTrackerRequestBody_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_UpdateTrackerRequestBody_H_

#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cts/v3/model/DataBucket.h>
#include <string>
#include <huaweicloud/cts/v3/model/TrackerObsInfo.h>
#include <huaweicloud/cts/v3/model/ManagementEventSelector.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  UpdateTrackerRequestBody
    : public ModelBase
{
public:
    UpdateTrackerRequestBody();
    virtual ~UpdateTrackerRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateTrackerRequestBody members

    /// <summary>
    /// 标识追踪器类型。 目前支持系统追踪器类型有管理类追踪器(system)和数据类追踪器(data)。 数据类追踪器和管理类追踪器共同参数有：is_lts_enabled, obs_info; 管理类追踪器参数：is_support_trace_files_encryption, kms_id, is_support_validate, is_support_validate; 数据类追踪器参数：tracker_name, data_bucket。
    /// </summary>

    std::string getTrackerType() const;
    bool trackerTypeIsSet() const;
    void unsettrackerType();
    void setTrackerType(const std::string& value);

    /// <summary>
    /// 标识追踪器名称。 当\&quot;tracker_type\&quot;参数值为\&quot;system\&quot;时该参数为默认值\&quot;system\&quot;。 当\&quot;tracker_type\&quot;参数值为\&quot;data\&quot;时该参数需要指定追踪器名称\&quot;。
    /// </summary>

    std::string getTrackerName() const;
    bool trackerNameIsSet() const;
    void unsettrackerName();
    void setTrackerName(const std::string& value);

    /// <summary>
    /// 标识追踪器状态，该接口中可修改的状态包括正常（enabled）和停止（disabled）。如果选择修改状态为停止，则修改成功后追踪器停止记录事件。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 是否应用到我的组织。 只针对管理类追踪器。设置为true时，ORG组织下所有成员当前区域的审计日志会转储到该追踪器配置的OBS桶或者LTS日志流，但是事件列表界面不支持查看其它组织成员的审计日志。
    /// </summary>

    bool isIsOrganizationTracker() const;
    bool isOrganizationTrackerIsSet() const;
    void unsetisOrganizationTracker();
    void setIsOrganizationTracker(bool value);

    /// <summary>
    /// 
    /// </summary>

    ManagementEventSelector getManagementEventSelector() const;
    bool managementEventSelectorIsSet() const;
    void unsetmanagementEventSelector();
    void setManagementEventSelector(const ManagementEventSelector& value);

    /// <summary>
    /// 是否打开事件分析。
    /// </summary>

    bool isIsLtsEnabled() const;
    bool isLtsEnabledIsSet() const;
    void unsetisLtsEnabled();
    void setIsLtsEnabled(bool value);

    /// <summary>
    /// 
    /// </summary>

    TrackerObsInfo getObsInfo() const;
    bool obsInfoIsSet() const;
    void unsetobsInfo();
    void setObsInfo(const TrackerObsInfo& value);

    /// <summary>
    /// 事件文件转储加密功能开关。 当\&quot;tracker_type\&quot;参数值为\&quot;system\&quot;时该参数值有效。 该参数必须与kms_id参数同时使用。
    /// </summary>

    bool isIsSupportTraceFilesEncryption() const;
    bool isSupportTraceFilesEncryptionIsSet() const;
    void unsetisSupportTraceFilesEncryption();
    void setIsSupportTraceFilesEncryption(bool value);

    /// <summary>
    /// 事件文件转储加密所采用的秘钥id（从KMS获取）。 当\&quot;tracker_type\&quot;参数值为\&quot;system\&quot;时该参数值有效。 当\&quot;is_support_trace_files_encryption\&quot;参数值为“是”时，此参数为必选项。
    /// </summary>

    std::string getKmsId() const;
    bool kmsIdIsSet() const;
    void unsetkmsId();
    void setKmsId(const std::string& value);

    /// <summary>
    /// 事件文件转储时是否打开事件文件校验。 当\&quot;tracker_type\&quot;参数值为\&quot;system\&quot;时该参数值有效。
    /// </summary>

    bool isIsSupportValidate() const;
    bool isSupportValidateIsSet() const;
    void unsetisSupportValidate();
    void setIsSupportValidate(bool value);

    /// <summary>
    /// 
    /// </summary>

    DataBucket getDataBucket() const;
    bool dataBucketIsSet() const;
    void unsetdataBucket();
    void setDataBucket(const DataBucket& value);


protected:
    std::string trackerType_;
    bool trackerTypeIsSet_;
    std::string trackerName_;
    bool trackerNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    bool isOrganizationTracker_;
    bool isOrganizationTrackerIsSet_;
    ManagementEventSelector managementEventSelector_;
    bool managementEventSelectorIsSet_;
    bool isLtsEnabled_;
    bool isLtsEnabledIsSet_;
    TrackerObsInfo obsInfo_;
    bool obsInfoIsSet_;
    bool isSupportTraceFilesEncryption_;
    bool isSupportTraceFilesEncryptionIsSet_;
    std::string kmsId_;
    bool kmsIdIsSet_;
    bool isSupportValidate_;
    bool isSupportValidateIsSet_;
    DataBucket dataBucket_;
    bool dataBucketIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_UpdateTrackerRequestBody_H_
