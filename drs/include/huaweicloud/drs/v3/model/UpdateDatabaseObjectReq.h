
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_UpdateDatabaseObjectReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_UpdateDatabaseObjectReq_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/drs/v3/model/DatabaseInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新对象选择信息体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  UpdateDatabaseObjectReq
    : public ModelBase
{
public:
    UpdateDatabaseObjectReq();
    virtual ~UpdateDatabaseObjectReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDatabaseObjectReq members

    /// <summary>
    /// **参数解释**：  迁移任务ID，用于唯一标识一个数据复制任务，在查询、修改、删除等操作中作为任务的识别凭证。  **约束限制**：  不涉及。  **取值范围**：  UUID格式字符串。  **默认取值**：  不涉及
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// **参数解释**：  是否进行对象选择，决定是自定义选择迁移对象还是迁移全部对象。  **约束限制**：  不涉及。  **取值范围**：  - true：自定义迁移对象，需要通过job字段指定具体迁移对象 - false：全部迁移，迁移源库所有对象  **默认取值**：  false
    /// </summary>

    bool isSelected() const;
    bool selectedIsSet() const;
    void unsetselected();
    void setSelected(bool value);

    /// <summary>
    /// **参数解释**：  是否库级同步，指定同步任务是否以库为粒度进行对象选择。  **约束限制**：  不涉及。  **取值范围**：  - true：库级同步 - false：非库级同步  **默认取值**：  不涉及
    /// </summary>

    bool isSyncDatabase() const;
    bool syncDatabaseIsSet() const;
    void unsetsyncDatabase();
    void setSyncDatabase(bool value);

    /// <summary>
    /// **参数解释**：  数据对象选择信息列表，包含需要迁移的数据库、表、视图等对象的详细配置。  **约束限制**：  - selected为true时必填。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::vector<DatabaseInfo>& getJob();
    bool jobIsSet() const;
    void unsetjob();
    void setJob(const std::vector<DatabaseInfo>& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    bool selected_;
    bool selectedIsSet_;
    bool syncDatabase_;
    bool syncDatabaseIsSet_;
    std::vector<DatabaseInfo> job_;
    bool jobIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_UpdateDatabaseObjectReq_H_
