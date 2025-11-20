
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TransAcceptResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TransAcceptResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/BillResources.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  TransAcceptResponse
    : public ModelBase
{
public:
    TransAcceptResponse();
    virtual ~TransAcceptResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TransAcceptResponse members

    /// <summary>
    /// 资产转移时，是否需要从接收方扣减资源（产生计费话单)
    /// </summary>

    bool isIsNeedBilling() const;
    bool isNeedBillingIsSet() const;
    void unsetisNeedBilling();
    void setIsNeedBilling(bool value);

    /// <summary>
    /// 需要扣减的资源列表。
    /// </summary>

    std::vector<BillResources>& getRequiredResources();
    bool requiredResourcesIsSet() const;
    void unsetrequiredResources();
    void setRequiredResources(const std::vector<BillResources>& value);


protected:
    bool isNeedBilling_;
    bool isNeedBillingIsSet_;
    std::vector<BillResources> requiredResources_;
    bool requiredResourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TransAcceptResponse_H_
