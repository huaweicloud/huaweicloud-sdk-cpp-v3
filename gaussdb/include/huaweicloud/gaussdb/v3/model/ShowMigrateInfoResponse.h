
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowMigrateInfoResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowMigrateInfoResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowMigrateInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowMigrateInfoResponse();
    virtual ~ShowMigrateInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowMigrateInfoResponse members

    /// <summary>
    /// **参数解释**：  源实例ID。  **取值范围**：  只能由英文字母、数字组成，长度为36个字符。
    /// </summary>

    std::string getRdsInstanceId() const;
    bool rdsInstanceIdIsSet() const;
    void unsetrdsInstanceId();
    void setRdsInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  源实例状态。  **取值范围**：  不涉及。
    /// </summary>

    std::string getRdsStatus() const;
    bool rdsStatusIsSet() const;
    void unsetrdsStatus();
    void setRdsStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：  源实例名称。  **取值范围**：  不涉及。
    /// </summary>

    std::string getRdsInstanceName() const;
    bool rdsInstanceNameIsSet() const;
    void unsetrdsInstanceName();
    void setRdsInstanceName(const std::string& value);

    /// <summary>
    /// **参数解释**：  迁移任务ID。  **取值范围**：  不涉及。
    /// </summary>

    std::string getDrsJobId() const;
    bool drsJobIdIsSet() const;
    void unsetdrsJobId();
    void setDrsJobId(const std::string& value);

    /// <summary>
    /// **参数解释**：  迁移任务状态。  **取值范围**：  不涉及。
    /// </summary>

    std::string getDrsStatus() const;
    bool drsStatusIsSet() const;
    void unsetdrsStatus();
    void setDrsStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：  源实例读写状态。  **取值范围**：  - ON：读写状态。 - OFF：只读状态。
    /// </summary>

    std::string getRdsReadwriteMode() const;
    bool rdsReadwriteModeIsSet() const;
    void unsetrdsReadwriteMode();
    void setRdsReadwriteMode(const std::string& value);

    /// <summary>
    /// **参数解释**：  目标实例读写状态。  **取值范围**：  - ON：读写状态。 - OFF：只读状态。
    /// </summary>

    std::string getTaurusReadwriteMode() const;
    bool taurusReadwriteModeIsSet() const;
    void unsettaurusReadwriteMode();
    void setTaurusReadwriteMode(const std::string& value);

    /// <summary>
    /// **参数解释**：G  迁移方向。  **取值范围**：  - up：源实例到TaurusDB实例。 - down：TaurusDB实例到源实例。
    /// </summary>

    std::string getMigrationDirection() const;
    bool migrationDirectionIsSet() const;
    void unsetmigrationDirection();
    void setMigrationDirection(const std::string& value);


protected:
    std::string rdsInstanceId_;
    bool rdsInstanceIdIsSet_;
    std::string rdsStatus_;
    bool rdsStatusIsSet_;
    std::string rdsInstanceName_;
    bool rdsInstanceNameIsSet_;
    std::string drsJobId_;
    bool drsJobIdIsSet_;
    std::string drsStatus_;
    bool drsStatusIsSet_;
    std::string rdsReadwriteMode_;
    bool rdsReadwriteModeIsSet_;
    std::string taurusReadwriteMode_;
    bool taurusReadwriteModeIsSet_;
    std::string migrationDirection_;
    bool migrationDirectionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowMigrateInfoResponse_H_
