
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UpgradeDbVersionFinalConfirmRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UpgradeDbVersionFinalConfirmRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**  小版本升级成功后，确认是否完成升级请求体。  **约束限制**  不涉及。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  UpgradeDbVersionFinalConfirmRequestBody
    : public ModelBase
{
public:
    UpgradeDbVersionFinalConfirmRequestBody();
    virtual ~UpgradeDbVersionFinalConfirmRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeDbVersionFinalConfirmRequestBody members

    /// <summary>
    /// **参数解释**  要进行的操作。confirm表示确认完成升级，rollback表示要回滚至原始版本  **取值范围**  confirm,rollback  **约束限制**  不涉及  **默认取值**  不涉及
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释**  回滚时是否强制回滚  **取值范围**  true,false  **约束限制**  不涉及  **默认取值**  false
    /// </summary>

    bool isForceRollback() const;
    bool forceRollbackIsSet() const;
    void unsetforceRollback();
    void setForceRollback(bool value);


protected:
    std::string action_;
    bool actionIsSet_;
    bool forceRollback_;
    bool forceRollbackIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UpgradeDbVersionFinalConfirmRequestBody_H_
