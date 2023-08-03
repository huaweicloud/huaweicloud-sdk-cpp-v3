
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SimplifiedInstanceEntry_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SimplifiedInstanceEntry_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SimplifiedInstanceEntry
    : public ModelBase
{
public:
    SimplifiedInstanceEntry();
    virtual ~SimplifiedInstanceEntry();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SimplifiedInstanceEntry members

    /// <summary>
    /// 实例id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 创建的实例名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 引擎名字
    /// </summary>

    std::string getEngineName() const;
    bool engineNameIsSet() const;
    void unsetengineName();
    void setEngineName(const std::string& value);

    /// <summary>
    /// 引擎版本
    /// </summary>

    std::string getEngineVersion() const;
    bool engineVersionIsSet() const;
    void unsetengineVersion();
    void setEngineVersion(const std::string& value);

    /// <summary>
    /// 实例状态。 normal,表示正常 abnormal,表示异常 creating,表示创建中 createfail,表示创建失败 data_disk_full,表示磁盘满 deleted,表示删除 shutdown,表示关机
    /// </summary>

    std::string getInstanceStatus() const;
    bool instanceStatusIsSet() const;
    void unsetinstanceStatus();
    void setInstanceStatus(const std::string& value);

    /// <summary>
    /// 是否冻结
    /// </summary>

    bool isFrozen() const;
    bool frozenIsSet() const;
    void unsetfrozen();
    void setFrozen(bool value);

    /// <summary>
    /// 按照实例类型查询。取值Single、Ha、Replica、Enterprise，分别对应于单实例、主备实例和只读实例、分布式实例（企业版）。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 按需还是包周期
    /// </summary>

    std::string getPayModel() const;
    bool payModelIsSet() const;
    void unsetpayModel();
    void setPayModel(const std::string& value);

    /// <summary>
    /// 规格码
    /// </summary>

    std::string getSpecCode() const;
    bool specCodeIsSet() const;
    void unsetspecCode();
    void setSpecCode(const std::string& value);

    /// <summary>
    /// 可用区集合
    /// </summary>

    std::vector<std::string>& getAvailabilityZoneIds();
    bool availabilityZoneIdsIsSet() const;
    void unsetavailabilityZoneIds();
    void setAvailabilityZoneIds(const std::vector<std::string>& value);

    /// <summary>
    /// 只读实例id集合
    /// </summary>

    std::vector<std::string>& getReadOnlyInstances();
    bool readOnlyInstancesIsSet() const;
    void unsetreadOnlyInstances();
    void setReadOnlyInstances(const std::vector<std::string>& value);

    /// <summary>
    /// 当前实例操作动作集合
    /// </summary>

    std::vector<std::string>& getCurrentActions();
    bool currentActionsIsSet() const;
    void unsetcurrentActions();
    void setCurrentActions(const std::vector<std::string>& value);

    /// <summary>
    /// 磁盘类型。
    /// </summary>

    std::string getVolumeType() const;
    bool volumeTypeIsSet() const;
    void unsetvolumeType();
    void setVolumeType(const std::string& value);

    /// <summary>
    /// 磁盘大小(单位:G)。
    /// </summary>

    int64_t getVolumeSize() const;
    bool volumeSizeIsSet() const;
    void unsetvolumeSize();
    void setVolumeSize(int64_t value);

    /// <summary>
    /// 企业项目标签ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string engineName_;
    bool engineNameIsSet_;
    std::string engineVersion_;
    bool engineVersionIsSet_;
    std::string instanceStatus_;
    bool instanceStatusIsSet_;
    bool frozen_;
    bool frozenIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string payModel_;
    bool payModelIsSet_;
    std::string specCode_;
    bool specCodeIsSet_;
    std::vector<std::string> availabilityZoneIds_;
    bool availabilityZoneIdsIsSet_;
    std::vector<std::string> readOnlyInstances_;
    bool readOnlyInstancesIsSet_;
    std::vector<std::string> currentActions_;
    bool currentActionsIsSet_;
    std::string volumeType_;
    bool volumeTypeIsSet_;
    int64_t volumeSize_;
    bool volumeSizeIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SimplifiedInstanceEntry_H_
