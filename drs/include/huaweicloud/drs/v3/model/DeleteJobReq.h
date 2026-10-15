
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_DeleteJobReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_DeleteJobReq_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 删除在线迁移任务请求体。
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  DeleteJobReq
    : public ModelBase
{
public:
    DeleteJobReq();
    virtual ~DeleteJobReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteJobReq members

    /// <summary>
    /// **参数解释**：  批量结束或删除任务的操作类型，指定对任务执行结束还是删除操作。  **约束限制**：  包年/包月任务需要先手动退订，然后delete_type参数设置为delete调用该接口删除任务。  **取值范围**：  - terminate：结束任务 - force_terminate：强制结束任务 - delete：删除任务 - roll_back_upgrade_active_standby：转主备任务回滚  **默认取值**：  不涉及
    /// </summary>

    std::string getDeleteType() const;
    bool deleteTypeIsSet() const;
    void unsetdeleteType();
    void setDeleteType(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务ID，用于唯一标识需要结束或删除的数据复制任务。  **约束限制**：  不涉及。  **取值范围**：  UUID格式字符串。  **默认取值**：  不涉及
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// **参数解释**：  MySQL为源的数据复制任务，结束任务时是否展示断点信息。  **约束限制**：  仅MySQL为源的实时迁移、实时同步、实时灾备任务适用。  **取值范围**：  - true：展示断点信息 - false：不展示断点信息  **默认取值**：  不涉及
    /// </summary>

    bool isIsShowBreakpointPosition() const;
    bool isShowBreakpointPositionIsSet() const;
    void unsetisShowBreakpointPosition();
    void setIsShowBreakpointPosition(bool value);


protected:
    std::string deleteType_;
    bool deleteTypeIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    bool isShowBreakpointPosition_;
    bool isShowBreakpointPositionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_DeleteJobReq_H_
