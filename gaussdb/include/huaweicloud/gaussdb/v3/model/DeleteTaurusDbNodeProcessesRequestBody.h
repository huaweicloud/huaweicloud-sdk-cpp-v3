
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteTaurusDbNodeProcessesRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteTaurusDbNodeProcessesRequestBody_H_


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
/// 终止TaurusDB节点用户会话线程请求
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DeleteTaurusDbNodeProcessesRequestBody
    : public ModelBase
{
public:
    DeleteTaurusDbNodeProcessesRequestBody();
    virtual ~DeleteTaurusDbNodeProcessesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTaurusDbNodeProcessesRequestBody members

    /// <summary>
    /// **参数解释**：  待终止用户会话线程ID列表。  通过查询节点用户会话线程接口，或show processlist命令获取。
    /// </summary>

    std::vector<int64_t>& getProcesses();
    bool processesIsSet() const;
    void unsetprocesses();
    void setProcesses(std::vector<int64_t> value);


protected:
    std::vector<int64_t> processes_;
    bool processesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteTaurusDbNodeProcessesRequestBody_H_
