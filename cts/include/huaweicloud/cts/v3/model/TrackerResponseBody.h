
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_TrackerResponseBody_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_TrackerResponseBody_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cts/v3/model/Lts.h>
#include <huaweicloud/cts/v3/model/DataBucketQuery.h>
#include <huaweicloud/cts/v3/model/ManagementEventSelector.h>
#include <huaweicloud/cts/v3/model/ObsInfo.h>

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
class HUAWEICLOUD_CTS_V3_EXPORT  TrackerResponseBody
    : public ModelBase
{
public:
    TrackerResponseBody();
    virtual ~TrackerResponseBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TrackerResponseBody members

    /// <summary>
    /// 追踪器唯一标识。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 追踪器创建时间戳。
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 事件文件转储加密所采用的秘钥id（从KMS获取）。 当\&quot;tracker_type\&quot;参数值为\&quot;system\&quot;和\&quot;is_support_trace_files_encryption\&quot;参数值为“是”时，此参数为必选项。
    /// </summary>

    std::string getKmsId() const;
    bool kmsIdIsSet() const;
    void unsetkmsId();
    void setKmsId(const std::string& value);

    /// <summary>
    /// 是否打开事件文件校验。
    /// </summary>

    bool isIsSupportValidate() const;
    bool isSupportValidateIsSet() const;
    void unsetisSupportValidate();
    void setIsSupportValidate(bool value);

    /// <summary>
    /// 是否应用到我的组织。 只针对管理类追踪器。设置为true时，ORG组织下所有成员当前区域的审计日志会转储到该追踪器配置的OBS桶或者LTS日志流，但是事件列表界面不支持查看其它组织成员的审计日志。
    /// </summary>

    bool isIsOrganizationTracker() const;
    bool isOrganizationTrackerIsSet() const;
    void unsetisOrganizationTracker();
    void setIsOrganizationTracker(bool value);

    /// <summary>
    /// 云服务委托名称。
    /// </summary>

    std::string getAgencyName() const;
    bool agencyNameIsSet() const;
    void unsetagencyName();
    void setAgencyName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ManagementEventSelector getManagementEventSelector() const;
    bool managementEventSelectorIsSet() const;
    void unsetmanagementEventSelector();
    void setManagementEventSelector(const ManagementEventSelector& value);

    /// <summary>
    /// 
    /// </summary>

    Lts getLts() const;
    bool ltsIsSet() const;
    void unsetlts();
    void setLts(const Lts& value);

    /// <summary>
    /// 标识追踪器类型。 目前支持系统追踪器类型有管理类追踪器（system）和数据类追踪器（data）。
    /// </summary>

    std::string getTrackerType() const;
    bool trackerTypeIsSet() const;
    void unsettrackerType();
    void setTrackerType(const std::string& value);

    /// <summary>
    /// 账号ID，参见《云审计服务API参考》“获取账号ID和项目ID”章节。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 项目ID。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 标识追踪器名称，当前版本默认为“system”。
    /// </summary>

    std::string getTrackerName() const;
    bool trackerNameIsSet() const;
    void unsettrackerName();
    void setTrackerName(const std::string& value);

    /// <summary>
    /// 标识追踪器状态，包括正常（enabled），停止（disabled）和异常（error）三种状态，状态为异常时需通过明细（detail）字段说明错误来源。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 该参数仅在追踪器状态异常时返回，用于标识追踪器异常的原因，包括桶策略异常（bucketPolicyError），桶不存在（noBucket）和欠费或冻结（arrears）三种原因。
    /// </summary>

    std::string getDetail() const;
    bool detailIsSet() const;
    void unsetdetail();
    void setDetail(const std::string& value);

    /// <summary>
    /// 事件文件转储加密功能开关。 该参数必须与kms_id参数同时使用。 当前环境仅\&quot;tracker_type\&quot;参数值为\&quot;system\&quot;时支持该功能。
    /// </summary>

    bool isIsSupportTraceFilesEncryption() const;
    bool isSupportTraceFilesEncryptionIsSet() const;
    void unsetisSupportTraceFilesEncryption();
    void setIsSupportTraceFilesEncryption(bool value);

    /// <summary>
    /// LTS服务日志组的ID。
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// LTS服务日志流的ID。
    /// </summary>

    std::string getStreamId() const;
    bool streamIdIsSet() const;
    void unsetstreamId();
    void setStreamId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ObsInfo getObsInfo() const;
    bool obsInfoIsSet() const;
    void unsetobsInfo();
    void setObsInfo(const ObsInfo& value);

    /// <summary>
    /// 
    /// </summary>

    DataBucketQuery getDataBucket() const;
    bool dataBucketIsSet() const;
    void unsetdataBucket();
    void setDataBucket(const DataBucketQuery& value);


protected:
    std::string id_;
    bool idIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    std::string kmsId_;
    bool kmsIdIsSet_;
    bool isSupportValidate_;
    bool isSupportValidateIsSet_;
    bool isOrganizationTracker_;
    bool isOrganizationTrackerIsSet_;
    std::string agencyName_;
    bool agencyNameIsSet_;
    ManagementEventSelector managementEventSelector_;
    bool managementEventSelectorIsSet_;
    Lts lts_;
    bool ltsIsSet_;
    std::string trackerType_;
    bool trackerTypeIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string trackerName_;
    bool trackerNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string detail_;
    bool detailIsSet_;
    bool isSupportTraceFilesEncryption_;
    bool isSupportTraceFilesEncryptionIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;
    std::string streamId_;
    bool streamIdIsSet_;
    ObsInfo obsInfo_;
    bool obsInfoIsSet_;
    DataBucketQuery dataBucket_;
    bool dataBucketIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_TrackerResponseBody_H_
