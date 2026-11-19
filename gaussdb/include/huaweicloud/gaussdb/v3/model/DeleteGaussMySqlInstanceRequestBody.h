
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteGaussMySqlInstanceRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteGaussMySqlInstanceRequestBody_H_


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
/// 删除/退订实例请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DeleteGaussMySqlInstanceRequestBody
    : public ModelBase
{
public:
    DeleteGaussMySqlInstanceRequestBody();
    virtual ~DeleteGaussMySqlInstanceRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteGaussMySqlInstanceRequestBody members

    /// <summary>
    /// **参数解释**：  释放实例时的备份保留策略。  **约束限制**：  不涉及。  **取值范围**：  - retain_all：永久保留全部备份，包含回收站备份、自动全量备份、自动差量备份、手动备份，不包含增量备份。实例删除后，永久保留的备份会产生费用。 - retain_last：保留回收站备份和手动备份。超过回收站策略的保留天数后，系统将删除回收站备份，仅保留手动备份。手动备份会产生费用，其余保留的备份不收费。 - delete_all：删除全部备份。  **默认取值**：  retain_last。
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteGaussMySqlInstanceRequestBody_H_
