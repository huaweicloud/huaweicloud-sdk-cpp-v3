
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChInstancesInfoRsponse_instance_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChInstancesInfoRsponse_instance_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ChQueryActionInfo.h>
#include <huaweicloud/gaussdb/v3/model/CreateChInstanceInfo_tags_info.h>
#include <string>
#include <huaweicloud/gaussdb/v3/model/ChInstancesInfoRsponse_instance_groups.h>
#include <huaweicloud/gaussdb/v3/model/ChInstancesInfoRsponse_instance_port_info.h>
#include <huaweicloud/gaussdb/v3/model/ChInstancesInfoRsponse_instance_ops_window.h>
#include <huaweicloud/gaussdb/v3/model/ChInstancesInfoRsponse_instance_param_group.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实例信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ChInstancesInfoRsponse_instance
    : public ModelBase
{
public:
    ChInstancesInfoRsponse_instance();
    virtual ~ChInstancesInfoRsponse_instance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChInstancesInfoRsponse_instance members

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 实例名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 租户在某一Region下的project ID。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 公网访问IP。
    /// </summary>

    std::string getPublicIp() const;
    bool publicIpIsSet() const;
    void unsetpublicIp();
    void setPublicIp(const std::string& value);

    /// <summary>
    /// 是否可公网访问。
    /// </summary>

    bool isCanEnablePublicAccess() const;
    bool canEnablePublicAccessIsSet() const;
    void unsetcanEnablePublicAccess();
    void setCanEnablePublicAccess(bool value);

    /// <summary>
    /// 备份节点ID。
    /// </summary>

    std::string getCurrentBackupNodeId() const;
    bool currentBackupNodeIdIsSet() const;
    void unsetcurrentBackupNodeId();
    void setCurrentBackupNodeId(const std::string& value);

    /// <summary>
    /// 部署模式。 取值范围： - Single：单机 - Ha：主备
    /// </summary>

    std::string getClusterMode() const;
    bool clusterModeIsSet() const;
    void unsetclusterMode();
    void setClusterMode(const std::string& value);

    /// <summary>
    /// 实例状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 是否冻结。 取值范围： - 0：不冻结 - 1：冻结
    /// </summary>

    int32_t getIsFrozen() const;
    bool isFrozenIsSet() const;
    void unsetisFrozen();
    void setIsFrozen(int32_t value);

    /// <summary>
    /// 冻结时间。
    /// </summary>

    std::string getFrozenTime() const;
    bool frozenTimeIsSet() const;
    void unsetfrozenTime();
    void setFrozenTime(const std::string& value);

    /// <summary>
    /// 默认用户。
    /// </summary>

    std::string getDbUser() const;
    bool dbUserIsSet() const;
    void unsetdbUser();
    void setDbUser(const std::string& value);

    /// <summary>
    /// 备份周期。
    /// </summary>

    std::string getBakPeriod() const;
    bool bakPeriodIsSet() const;
    void unsetbakPeriod();
    void setBakPeriod(const std::string& value);

    /// <summary>
    /// 备份保存天数。
    /// </summary>

    int32_t getBakKeepDay() const;
    bool bakKeepDayIsSet() const;
    void unsetbakKeepDay();
    void setBakKeepDay(int32_t value);

    /// <summary>
    /// 备份预计开始时间。
    /// </summary>

    std::string getBakExpectedStartTime() const;
    bool bakExpectedStartTimeIsSet() const;
    void unsetbakExpectedStartTime();
    void setBakExpectedStartTime(const std::string& value);

    /// <summary>
    /// 数据库版本ID。
    /// </summary>

    std::string getDatastoreVersionId() const;
    bool datastoreVersionIdIsSet() const;
    void unsetdatastoreVersionId();
    void setDatastoreVersionId(const std::string& value);

    /// <summary>
    /// 数据库版本。
    /// </summary>

    std::string getDatastoreVersion() const;
    bool datastoreVersionIsSet() const;
    void unsetdatastoreVersion();
    void setDatastoreVersion(const std::string& value);

    /// <summary>
    /// 数据库引擎。
    /// </summary>

    std::string getDatastoreType() const;
    bool datastoreTypeIsSet() const;
    void unsetdatastoreType();
    void setDatastoreType(const std::string& value);

    /// <summary>
    /// 实例创建时间。
    /// </summary>

    int64_t getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(int64_t value);

    /// <summary>
    /// 实例更新时间。
    /// </summary>

    int64_t getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(int64_t value);

    /// <summary>
    /// 实例删除时间。
    /// </summary>

    int64_t getDeleteAt() const;
    bool deleteAtIsSet() const;
    void unsetdeleteAt();
    void setDeleteAt(int64_t value);

    /// <summary>
    /// 数据库端口号。取值范围0~65535。
    /// </summary>

    std::string getDbPort() const;
    bool dbPortIsSet() const;
    void unsetdbPort();
    void setDbPort(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ChInstancesInfoRsponse_instance_param_group getParamGroup() const;
    bool paramGroupIsSet() const;
    void unsetparamGroup();
    void setParamGroup(const ChInstancesInfoRsponse_instance_param_group& value);

    /// <summary>
    /// 实例动作。
    /// </summary>

    std::vector<ChQueryActionInfo>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<ChQueryActionInfo>& value);

    /// <summary>
    /// 实例创建失败错误码。
    /// </summary>

    std::string getCreateFailErrorCode() const;
    bool createFailErrorCodeIsSet() const;
    void unsetcreateFailErrorCode();
    void setCreateFailErrorCode(const std::string& value);

    /// <summary>
    /// 实例分组。
    /// </summary>

    std::vector<ChInstancesInfoRsponse_instance_groups>& getGroups();
    bool groupsIsSet() const;
    void unsetgroups();
    void setGroups(const std::vector<ChInstancesInfoRsponse_instance_groups>& value);

    /// <summary>
    /// 
    /// </summary>

    ChInstancesInfoRsponse_instance_ops_window getOpsWindow() const;
    bool opsWindowIsSet() const;
    void unsetopsWindow();
    void setOpsWindow(const ChInstancesInfoRsponse_instance_ops_window& value);

    /// <summary>
    /// 
    /// </summary>

    CreateChInstanceInfo_tags_info getTagsInfo() const;
    bool tagsInfoIsSet() const;
    void unsettagsInfo();
    void setTagsInfo(const CreateChInstanceInfo_tags_info& value);

    /// <summary>
    /// 时区。
    /// </summary>

    std::string getTimeZone() const;
    bool timeZoneIsSet() const;
    void unsettimeZone();
    void setTimeZone(const std::string& value);

    /// <summary>
    /// 备份使用空间。
    /// </summary>

    std::string getBackupUsedSpace() const;
    bool backupUsedSpaceIsSet() const;
    void unsetbackupUsedSpace();
    void setBackupUsedSpace(const std::string& value);

    /// <summary>
    /// 可用区模式。 取值范围： - single：单可用区 - double：多可用区-
    /// </summary>

    std::string getAzMode() const;
    bool azModeIsSet() const;
    void unsetazMode();
    void setAzMode(const std::string& value);

    /// <summary>
    /// 主可用区。
    /// </summary>

    std::string getMasterAzCode() const;
    bool masterAzCodeIsSet() const;
    void unsetmasterAzCode();
    void setMasterAzCode(const std::string& value);

    /// <summary>
    /// 企业项目ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ChInstancesInfoRsponse_instance_port_info getPortInfo() const;
    bool portInfoIsSet() const;
    void unsetportInfo();
    void setPortInfo(const ChInstancesInfoRsponse_instance_port_info& value);

    /// <summary>
    /// 磁盘规格码。
    /// </summary>

    std::string getVolumeCode() const;
    bool volumeCodeIsSet() const;
    void unsetvolumeCode();
    void setVolumeCode(const std::string& value);

    /// <summary>
    /// 是否支持副本。
    /// </summary>

    bool isSupportDataReplication() const;
    bool supportDataReplicationIsSet() const;
    void unsetsupportDataReplication();
    void setSupportDataReplication(bool value);

    /// <summary>
    /// 是否有数据库新版本。
    /// </summary>

    bool isNewVersionAvailable() const;
    bool newVersionAvailableIsSet() const;
    void unsetnewVersionAvailable();
    void setNewVersionAvailable(bool value);

    /// <summary>
    /// SSL开关。
    /// </summary>

    bool isSslOption() const;
    bool sslOptionIsSet() const;
    void unsetsslOption();
    void setSslOption(bool value);

    /// <summary>
    /// 专属资源池ID。
    /// </summary>

    std::string getDedicatedResourceId() const;
    bool dedicatedResourceIdIsSet() const;
    void unsetdedicatedResourceId();
    void setDedicatedResourceId(const std::string& value);

    /// <summary>
    /// 支付模式。 取值范围： - 0：按需计费 - 1：包周期-
    /// </summary>

    std::string getPayModel() const;
    bool payModelIsSet() const;
    void unsetpayModel();
    void setPayModel(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string publicIp_;
    bool publicIpIsSet_;
    bool canEnablePublicAccess_;
    bool canEnablePublicAccessIsSet_;
    std::string currentBackupNodeId_;
    bool currentBackupNodeIdIsSet_;
    std::string clusterMode_;
    bool clusterModeIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t isFrozen_;
    bool isFrozenIsSet_;
    std::string frozenTime_;
    bool frozenTimeIsSet_;
    std::string dbUser_;
    bool dbUserIsSet_;
    std::string bakPeriod_;
    bool bakPeriodIsSet_;
    int32_t bakKeepDay_;
    bool bakKeepDayIsSet_;
    std::string bakExpectedStartTime_;
    bool bakExpectedStartTimeIsSet_;
    std::string datastoreVersionId_;
    bool datastoreVersionIdIsSet_;
    std::string datastoreVersion_;
    bool datastoreVersionIsSet_;
    std::string datastoreType_;
    bool datastoreTypeIsSet_;
    int64_t createAt_;
    bool createAtIsSet_;
    int64_t updateAt_;
    bool updateAtIsSet_;
    int64_t deleteAt_;
    bool deleteAtIsSet_;
    std::string dbPort_;
    bool dbPortIsSet_;
    ChInstancesInfoRsponse_instance_param_group paramGroup_;
    bool paramGroupIsSet_;
    std::vector<ChQueryActionInfo> actions_;
    bool actionsIsSet_;
    std::string createFailErrorCode_;
    bool createFailErrorCodeIsSet_;
    std::vector<ChInstancesInfoRsponse_instance_groups> groups_;
    bool groupsIsSet_;
    ChInstancesInfoRsponse_instance_ops_window opsWindow_;
    bool opsWindowIsSet_;
    CreateChInstanceInfo_tags_info tagsInfo_;
    bool tagsInfoIsSet_;
    std::string timeZone_;
    bool timeZoneIsSet_;
    std::string backupUsedSpace_;
    bool backupUsedSpaceIsSet_;
    std::string azMode_;
    bool azModeIsSet_;
    std::string masterAzCode_;
    bool masterAzCodeIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    ChInstancesInfoRsponse_instance_port_info portInfo_;
    bool portInfoIsSet_;
    std::string volumeCode_;
    bool volumeCodeIsSet_;
    bool supportDataReplication_;
    bool supportDataReplicationIsSet_;
    bool newVersionAvailable_;
    bool newVersionAvailableIsSet_;
    bool sslOption_;
    bool sslOptionIsSet_;
    std::string dedicatedResourceId_;
    bool dedicatedResourceIdIsSet_;
    std::string payModel_;
    bool payModelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChInstancesInfoRsponse_instance_H_
