
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_InstanceBackupSummary_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_InstanceBackupSummary_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/Spaces.h>
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

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

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

    double getBackupUseSpace() const;
    bool backupUseSpaceIsSet() const;
    void unsetbackupUseSpace();
    void setBackupUseSpace(double value);

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

    Spaces getSpaces() const;
    bool spacesIsSet() const;
    void unsetspaces();
    void setSpaces(const Spaces& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    double backupUseSpace_;
    bool backupUseSpaceIsSet_;
    InstanceBackupDatastore datastore_;
    bool datastoreIsSet_;
    Spaces spaces_;
    bool spacesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_InstanceBackupSummary_H_
