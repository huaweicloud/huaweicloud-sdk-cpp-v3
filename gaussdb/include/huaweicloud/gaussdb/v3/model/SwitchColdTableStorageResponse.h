
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SwitchColdTableStorageResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SwitchColdTableStorageResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/FailedItem.h>
#include <vector>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SwitchColdTableStorageResponse
    : public ModelBase, public HttpResponse
{
public:
    SwitchColdTableStorageResponse();
    virtual ~SwitchColdTableStorageResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchColdTableStorageResponse members

    /// <summary>
    /// **参数解释**：  操作结果。  **取值范围**：  - SUCCESS：成功。 - FAILED：失败。
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

    /// <summary>
    /// **参数解释**：  校验失败的表信息。  当result取值为FAILED时，返回此参数。
    /// </summary>

    std::vector<FailedItem>& getFailedItems();
    bool failedItemsIsSet() const;
    void unsetfailedItems();
    void setFailedItems(const std::vector<FailedItem>& value);


protected:
    std::string result_;
    bool resultIsSet_;
    std::vector<FailedItem> failedItems_;
    bool failedItemsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SwitchColdTableStorageResponse_H_
