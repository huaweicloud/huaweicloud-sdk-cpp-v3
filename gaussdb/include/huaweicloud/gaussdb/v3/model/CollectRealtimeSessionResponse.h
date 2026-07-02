
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CollectRealtimeSessionResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CollectRealtimeSessionResponse_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CollectRealtimeSessionResponse
    : public ModelBase, public HttpResponse
{
public:
    CollectRealtimeSessionResponse();
    virtual ~CollectRealtimeSessionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CollectRealtimeSessionResponse members

    /// <summary>
    /// **参数解释**：  收集全部实时会话信息的任务ID。  **取值范围**：  不涉及。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);


protected:
    std::string requestId_;
    bool requestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CollectRealtimeSessionResponse_H_
