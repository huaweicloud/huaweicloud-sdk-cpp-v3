
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_InstanceBackupSummary_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_InstanceBackupSummary_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/Space.h>
#include <huaweicloud/rds/v3/model/InstanceBackupDatastore.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实例备份概览
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  InstanceBackupSummary
    : public ModelBase
{
public:
    InstanceBackupSummary();
    virtual ~InstanceBackupSummary();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstanceBackupSummary members

    /// <summary>
    /// **参数解释**：  实例ID。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  实例名称。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：  备份用量，单位MB。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    double getBackupUsedSpace() const;
    bool backupUsedSpaceIsSet() const;
    void unsetbackupUsedSpace();
    void setBackupUsedSpace(double value);

    /// <summary>
    /// 
    /// </summary>

    InstanceBackupDatastore getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const InstanceBackupDatastore& value);

    /// <summary>
    /// 
    /// </summary>

    Space getSpace() const;
    bool spaceIsSet() const;
    void unsetspace();
    void setSpace(const Space& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    double backupUsedSpace_;
    bool backupUsedSpaceIsSet_;
    InstanceBackupDatastore datastore_;
    bool datastoreIsSet_;
    Space space_;
    bool spaceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_InstanceBackupSummary_H_
