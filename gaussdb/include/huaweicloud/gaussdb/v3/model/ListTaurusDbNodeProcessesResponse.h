
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListTaurusDbNodeProcessesResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListTaurusDbNodeProcessesResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/TaurusDbProcessInfo.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListTaurusDbNodeProcessesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTaurusDbNodeProcessesResponse();
    virtual ~ListTaurusDbNodeProcessesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTaurusDbNodeProcessesResponse members

    /// <summary>
    /// **参数解释**：  用户会话线程信息列表。
    /// </summary>

    std::vector<TaurusDbProcessInfo>& getProcesses();
    bool processesIsSet() const;
    void unsetprocesses();
    void setProcesses(const std::vector<TaurusDbProcessInfo>& value);

    /// <summary>
    /// **参数解释**：  节点中的用户会话线程总数。  **取值范围**：  ≥0 
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<TaurusDbProcessInfo> processes_;
    bool processesIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListTaurusDbNodeProcessesResponse_H_
