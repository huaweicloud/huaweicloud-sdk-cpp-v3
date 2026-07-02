
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchChangeInstanceSpecificationResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchChangeInstanceSpecificationResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  BatchChangeInstanceSpecificationResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchChangeInstanceSpecificationResponse();
    virtual ~BatchChangeInstanceSpecificationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchChangeInstanceSpecificationResponse members

    /// <summary>
    /// **参数解释**：  批量规格变更的任务ID列表，仅变更按需实例时会返回该参数。  **取值范围**：  不涉及。
    /// </summary>

    std::vector<std::string>& getJobIds();
    bool jobIdsIsSet() const;
    void unsetjobIds();
    void setJobIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：  批量规格变更订单ID列表，仅变更包年/包月实例时会返回该参数。  **取值范围**：  不涉及。
    /// </summary>

    std::vector<std::string>& getOrderIds();
    bool orderIdsIsSet() const;
    void unsetorderIds();
    void setOrderIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> jobIds_;
    bool jobIdsIsSet_;
    std::vector<std::string> orderIds_;
    bool orderIdsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchChangeInstanceSpecificationResponse_H_
