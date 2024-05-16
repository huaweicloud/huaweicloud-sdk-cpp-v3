
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StarRocksInstanceInfo_instances_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StarRocksInstanceInfo_instances_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/QueryAction.h>
#include <huaweicloud/gaussdb/v3/model/StarRocksInstanceInfo_ops_window.h>
#include <string>
#include <huaweicloud/gaussdb/v3/model/StarRocksInstanceInfo_groups.h>
#include <huaweicloud/gaussdb/v3/model/StarRocksInstanceInfo_port_info.h>
#include <vector>
#include <huaweicloud/gaussdb/v3/model/StarRocksInstanceInfo_tags_info.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  StarRocksInstanceInfo_instances
    : public ModelBase
{
public:
    StarRocksInstanceInfo_instances();
    virtual ~StarRocksInstanceInfo_instances();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StarRocksInstanceInfo_instances members

    /// <summary>
    /// 实例ID，严格匹配UUID规则。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 创建的实例名称。
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
    /// StarRocks FE节点类型数据IP（多个IP使用逗号分隔）
    /// </summary>

    std::string getDataVip() const;
    bool dataVipIsSet() const;
    void unsetdataVip();
    void setDataVip(const std::string& value);

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
    /// 部署模式。
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
    /// 是否冻结。
    /// </summary>

    int32_t getIsFrozen() const;
    bool isFrozenIsSet() const;
    void unsetisFrozen();
    void setIsFrozen(int32_t value);

    /// <summary>
    /// 冻结时间。
    /// </summary>

    int64_t getFrozenTime() const;
    bool frozenTimeIsSet() const;
    void unsetfrozenTime();
    void setFrozenTime(int64_t value);

    /// <summary>
    /// 默认用户名。
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

    int64_t getBakExpectedStartTime() const;
    bool bakExpectedStartTimeIsSet() const;
    void unsetbakExpectedStartTime();
    void setBakExpectedStartTime(int64_t value);

    /// <summary>
    /// 数据库版本ID。
    /// </summary>

    std::string getDataStoreVersionId() const;
    bool dataStoreVersionIdIsSet() const;
    void unsetdataStoreVersionId();
    void setDataStoreVersionId(const std::string& value);

    /// <summary>
    /// 数据库版本。
    /// </summary>

    std::string getDataStoreVersion() const;
    bool dataStoreVersionIsSet() const;
    void unsetdataStoreVersion();
    void setDataStoreVersion(const std::string& value);

    /// <summary>
    /// 数据库引擎。
    /// </summary>

    std::string getDataStoreType() const;
    bool dataStoreTypeIsSet() const;
    void unsetdataStoreType();
    void setDataStoreType(const std::string& value);

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
    /// 数据库端口号。
    /// </summary>

    std::string getDbPort() const;
    bool dbPortIsSet() const;
    void unsetdbPort();
    void setDbPort(const std::string& value);

    /// <summary>
    /// 参数组。
    /// </summary>

    std::string getParamGroup() const;
    bool paramGroupIsSet() const;
    void unsetparamGroup();
    void setParamGroup(const std::string& value);

    /// <summary>
    /// 实例动作。
    /// </summary>

    std::vector<QueryAction>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<QueryAction>& value);

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

    std::vector<StarRocksInstanceInfo_groups>& getGroups();
    bool groupsIsSet() const;
    void unsetgroups();
    void setGroups(const std::vector<StarRocksInstanceInfo_groups>& value);

    /// <summary>
    /// 
    /// </summary>

    StarRocksInstanceInfo_ops_window getOpsWindow() const;
    bool opsWindowIsSet() const;
    void unsetopsWindow();
    void setOpsWindow(const StarRocksInstanceInfo_ops_window& value);

    /// <summary>
    /// 
    /// </summary>

    StarRocksInstanceInfo_tags_info getTagsInfo() const;
    bool tagsInfoIsSet() const;
    void unsettagsInfo();
    void setTagsInfo(const StarRocksInstanceInfo_tags_info& value);

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
    /// 可用区模式。  取值范围：  - single：单可用区 - multi：多可用区
    /// </summary>

    std::string getAzMode() const;
    bool azModeIsSet() const;
    void unsetazMode();
    void setAzMode(const std::string& value);

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

    StarRocksInstanceInfo_port_info getPortInfo() const;
    bool portInfoIsSet() const;
    void unsetportInfo();
    void setPortInfo(const StarRocksInstanceInfo_port_info& value);

    /// <summary>
    /// FE节点磁盘类型。
    /// </summary>

    std::string getFeNodeVolumeCode() const;
    bool feNodeVolumeCodeIsSet() const;
    void unsetfeNodeVolumeCode();
    void setFeNodeVolumeCode(const std::string& value);

    /// <summary>
    /// BE节点磁盘类型。
    /// </summary>

    std::string getBeNodeVolumeCode() const;
    bool beNodeVolumeCodeIsSet() const;
    void unsetbeNodeVolumeCode();
    void setBeNodeVolumeCode(const std::string& value);

    /// <summary>
    /// FE节点磁盘大小。
    /// </summary>

    std::string getFeNodeVolumeSize() const;
    bool feNodeVolumeSizeIsSet() const;
    void unsetfeNodeVolumeSize();
    void setFeNodeVolumeSize(const std::string& value);

    /// <summary>
    /// BE节点磁盘大小。
    /// </summary>

    std::string getBeNodeVolumeSize() const;
    bool beNodeVolumeSizeIsSet() const;
    void unsetbeNodeVolumeSize();
    void setBeNodeVolumeSize(const std::string& value);

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
    /// 专属资源池ID，只有数据库实例属于专属资源池才会返回该参数。
    /// </summary>

    std::string getDedicatedResourceId() const;
    bool dedicatedResourceIdIsSet() const;
    void unsetdedicatedResourceId();
    void setDedicatedResourceId(const std::string& value);

    /// <summary>
    /// 支付模式。
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
    std::string dataVip_;
    bool dataVipIsSet_;
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
    int64_t frozenTime_;
    bool frozenTimeIsSet_;
    std::string dbUser_;
    bool dbUserIsSet_;
    std::string bakPeriod_;
    bool bakPeriodIsSet_;
    int32_t bakKeepDay_;
    bool bakKeepDayIsSet_;
    int64_t bakExpectedStartTime_;
    bool bakExpectedStartTimeIsSet_;
    std::string dataStoreVersionId_;
    bool dataStoreVersionIdIsSet_;
    std::string dataStoreVersion_;
    bool dataStoreVersionIsSet_;
    std::string dataStoreType_;
    bool dataStoreTypeIsSet_;
    int64_t createAt_;
    bool createAtIsSet_;
    int64_t updateAt_;
    bool updateAtIsSet_;
    int64_t deleteAt_;
    bool deleteAtIsSet_;
    std::string dbPort_;
    bool dbPortIsSet_;
    std::string paramGroup_;
    bool paramGroupIsSet_;
    std::vector<QueryAction> actions_;
    bool actionsIsSet_;
    std::string createFailErrorCode_;
    bool createFailErrorCodeIsSet_;
    std::vector<StarRocksInstanceInfo_groups> groups_;
    bool groupsIsSet_;
    StarRocksInstanceInfo_ops_window opsWindow_;
    bool opsWindowIsSet_;
    StarRocksInstanceInfo_tags_info tagsInfo_;
    bool tagsInfoIsSet_;
    std::string timeZone_;
    bool timeZoneIsSet_;
    std::string backupUsedSpace_;
    bool backupUsedSpaceIsSet_;
    std::string azMode_;
    bool azModeIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    StarRocksInstanceInfo_port_info portInfo_;
    bool portInfoIsSet_;
    std::string feNodeVolumeCode_;
    bool feNodeVolumeCodeIsSet_;
    std::string beNodeVolumeCode_;
    bool beNodeVolumeCodeIsSet_;
    std::string feNodeVolumeSize_;
    bool feNodeVolumeSizeIsSet_;
    std::string beNodeVolumeSize_;
    bool beNodeVolumeSizeIsSet_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StarRocksInstanceInfo_instances_H_
