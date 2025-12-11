
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchDeleteBackupRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchDeleteBackupRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量删除手动备份请求体
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  BatchDeleteBackupRequestBody
    : public ModelBase
{
public:
    BatchDeleteBackupRequestBody();
    virtual ~BatchDeleteBackupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteBackupRequestBody members

    /// <summary>
    /// **参数解释**：  需要删除的手动备份ID列表。 通过调用备份管理[查询全量备份列表](https://support.huaweicloud.com/api-taurusdb/ShowGaussMySqlBackupList.html)接口获取。  **约束限制**：   列表数量小于等于50。  **取值范围**：  不涉及。   **默认取值**：   不涉及。
    /// </summary>

    std::vector<std::string>& getBackupIds();
    bool backupIdsIsSet() const;
    void unsetbackupIds();
    void setBackupIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> backupIds_;
    bool backupIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchDeleteBackupRequestBody_H_
