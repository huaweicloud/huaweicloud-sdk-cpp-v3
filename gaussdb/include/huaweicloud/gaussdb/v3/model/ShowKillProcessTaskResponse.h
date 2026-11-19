
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowKillProcessTaskResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowKillProcessTaskResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/KillProcessItem.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowKillProcessTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowKillProcessTaskResponse();
    virtual ~ShowKillProcessTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowKillProcessTaskResponse members

    /// <summary>
    /// **参数解释**  Kill会话任务列表。
    /// </summary>

    std::vector<KillProcessItem>& getProcesses();
    bool processesIsSet() const;
    void unsetprocesses();
    void setProcesses(const std::vector<KillProcessItem>& value);


protected:
    std::vector<KillProcessItem> processes_;
    bool processesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowKillProcessTaskResponse_H_
