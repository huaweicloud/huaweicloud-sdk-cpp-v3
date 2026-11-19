
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowKillProcessTaskPreviewResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowKillProcessTaskPreviewResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ProcessDetail.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowKillProcessTaskPreviewResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowKillProcessTaskPreviewResponse();
    virtual ~ShowKillProcessTaskPreviewResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowKillProcessTaskPreviewResponse members

    /// <summary>
    /// **参数解释**：  会话总数，最多支持预览20条会话记录。  **取值范围**：  0-20。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// **参数解释**：  会话记录。
    /// </summary>

    std::vector<ProcessDetail>& getProcesses();
    bool processesIsSet() const;
    void unsetprocesses();
    void setProcesses(const std::vector<ProcessDetail>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<ProcessDetail> processes_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowKillProcessTaskPreviewResponse_H_
