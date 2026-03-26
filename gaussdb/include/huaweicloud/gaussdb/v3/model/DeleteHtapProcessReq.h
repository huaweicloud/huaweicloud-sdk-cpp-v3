
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteHtapProcessReq_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteHtapProcessReq_H_


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
/// **参数解释**：  删除HTAP实例会话请求体。  **约束限制**：  不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DeleteHtapProcessReq
    : public ModelBase
{
public:
    DeleteHtapProcessReq();
    virtual ~DeleteHtapProcessReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteHtapProcessReq members

    /// <summary>
    /// **参数解释**：  HTAP实例会话ID列表，可通过调用[查询HTAP实例当前会话](https://support.huaweicloud.com/api-taurusdb/ShowHtapProcessList.html)。  **约束限制**：  实例会话ID小于等于20个。  **取值范围**：  不涉及。  **默认值**：  不涉及。
    /// </summary>

    std::vector<std::string>& getProcessList();
    bool processListIsSet() const;
    void unsetprocessList();
    void setProcessList(const std::vector<std::string>& value);


protected:
    std::vector<std::string> processList_;
    bool processListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteHtapProcessReq_H_
