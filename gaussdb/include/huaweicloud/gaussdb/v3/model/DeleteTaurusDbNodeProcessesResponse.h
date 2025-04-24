
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteTaurusDbNodeProcessesResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteTaurusDbNodeProcessesResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DeleteTaurusDbNodeProcessesResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteTaurusDbNodeProcessesResponse();
    virtual ~DeleteTaurusDbNodeProcessesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTaurusDbNodeProcessesResponse members

    /// <summary>
    /// **参数解释**：  已终止的用户会话线程ID列表。
    /// </summary>

    std::vector<int64_t>& getProcessesKilled();
    bool processesKilledIsSet() const;
    void unsetprocessesKilled();
    void setProcessesKilled(std::vector<int64_t> value);

    /// <summary>
    /// **参数解释**：  不存在的用户会话线程ID列表。
    /// </summary>

    std::vector<int64_t>& getProcessesNotFound();
    bool processesNotFoundIsSet() const;
    void unsetprocessesNotFound();
    void setProcessesNotFound(std::vector<int64_t> value);


protected:
    std::vector<int64_t> processesKilled_;
    bool processesKilledIsSet_;
    std::vector<int64_t> processesNotFound_;
    bool processesNotFoundIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteTaurusDbNodeProcessesResponse_H_
