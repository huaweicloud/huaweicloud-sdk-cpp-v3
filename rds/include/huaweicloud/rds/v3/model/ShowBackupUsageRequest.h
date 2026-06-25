
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowBackupUsageRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowBackupUsageRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowBackupUsageRequest
    : public ModelBase
{
public:
    ShowBackupUsageRequest();
    virtual ~ShowBackupUsageRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBackupUsageRequest members

    /// <summary>
    /// **参数解释**：  引擎名称, 只支持筛选RDS for MySQL, RDS for MariaDB  **约束限制**：  不涉及。  **取值范围**：  - mysql - mariadb  **默认取值**：  不涉及。
    /// </summary>

    std::string getEngine() const;
    bool engineIsSet() const;
    void unsetengine();
    void setEngine(const std::string& value);

    /// <summary>
    /// **参数解释**：  请求语言类型。  **约束限制**：  不涉及。  **取值范围**：  - en-us - zh-cn **默认取值**：  en-us。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);


protected:
    std::string engine_;
    bool engineIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowBackupUsageRequest& dereference_from_shared_ptr(std::shared_ptr<ShowBackupUsageRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowBackupUsageRequest_H_
