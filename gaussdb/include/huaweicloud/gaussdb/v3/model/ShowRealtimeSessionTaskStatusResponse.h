
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowRealtimeSessionTaskStatusResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowRealtimeSessionTaskStatusResponse_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowRealtimeSessionTaskStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRealtimeSessionTaskStatusResponse();
    virtual ~ShowRealtimeSessionTaskStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRealtimeSessionTaskStatusResponse members

    /// <summary>
    /// **参数解释**：  收集全部实时会话信息任务状态。  **取值范围**：  - running: 运行中。 - finished：已完成。 - error: 发生错误。 - unrecognized：未识别状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowRealtimeSessionTaskStatusResponse_H_
