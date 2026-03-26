
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowHtapProcessListResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowHtapProcessListResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/HtapProcessInfo.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowHtapProcessListResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowHtapProcessListResponse();
    virtual ~ShowHtapProcessListResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowHtapProcessListResponse members

    /// <summary>
    /// **参数解释**：  HTAP标准版查询的会话信息。  **默认值**：  不涉及。
    /// </summary>

    std::vector<HtapProcessInfo>& getProcessList();
    bool processListIsSet() const;
    void unsetprocessList();
    void setProcessList(const std::vector<HtapProcessInfo>& value);


protected:
    std::vector<HtapProcessInfo> processList_;
    bool processListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowHtapProcessListResponse_H_
