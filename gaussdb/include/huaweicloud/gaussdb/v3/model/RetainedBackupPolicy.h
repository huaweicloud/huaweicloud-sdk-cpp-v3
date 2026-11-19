
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RetainedBackupPolicy_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RetainedBackupPolicy_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 保留策略信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  RetainedBackupPolicy
    : public ModelBase
{
public:
    RetainedBackupPolicy();
    virtual ~RetainedBackupPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RetainedBackupPolicy members

    /// <summary>
    /// **参数解释**：  实例释放保留策略。  **约束限制**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getBackupRetentionStrategy() const;
    bool backupRetentionStrategyIsSet() const;
    void unsetbackupRetentionStrategy();
    void setBackupRetentionStrategy(const std::string& value);


protected:
    std::string backupRetentionStrategy_;
    bool backupRetentionStrategyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RetainedBackupPolicy_H_
