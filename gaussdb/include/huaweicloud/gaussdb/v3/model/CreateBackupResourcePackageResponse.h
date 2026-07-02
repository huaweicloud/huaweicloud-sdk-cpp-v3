
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateBackupResourcePackageResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateBackupResourcePackageResponse_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CreateBackupResourcePackageResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateBackupResourcePackageResponse();
    virtual ~CreateBackupResourcePackageResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateBackupResourcePackageResponse members

    /// <summary>
    /// **参数解释**：  创建备份资源包订单ID。  **取值范围**：  不涉及。
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// **参数解释**：  备份资源包规格码。  **取值范围**：  不涉及。
    /// </summary>

    std::string getSpecCode() const;
    bool specCodeIsSet() const;
    void unsetspecCode();
    void setSpecCode(const std::string& value);

    /// <summary>
    /// **参数解释**：  备份资源包数量。  **取值范围**：  1-10。
    /// </summary>

    int32_t getNum() const;
    bool numIsSet() const;
    void unsetnum();
    void setNum(int32_t value);

    /// <summary>
    /// **参数解释**：  订购周期类型。  **取值范围**：  - month：包月。 - year：包年。
    /// </summary>

    std::string getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(const std::string& value);

    /// <summary>
    /// **参数解释**：  订购时间长度。  **取值范围**：  - \&quot;period_type\&quot;为\&quot;month\&quot;时，取值为1~9。 - \&quot;period_type\&quot;为\&quot;year\&quot;时，取值为1~3。
    /// </summary>

    int32_t getPeriodNum() const;
    bool periodNumIsSet() const;
    void unsetperiodNum();
    void setPeriodNum(int32_t value);


protected:
    std::string orderId_;
    bool orderIdIsSet_;
    std::string specCode_;
    bool specCodeIsSet_;
    int32_t num_;
    bool numIsSet_;
    std::string periodType_;
    bool periodTypeIsSet_;
    int32_t periodNum_;
    bool periodNumIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateBackupResourcePackageResponse_H_
