
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultCreateParameters_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultCreateParameters_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/CombinedOrder.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 存储库创建参数
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  VaultCreateParameters
    : public ModelBase
{
public:
    VaultCreateParameters();
    virtual ~VaultCreateParameters();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// VaultCreateParameters members

    /// <summary>
    /// 
    /// </summary>

    CombinedOrder getCombinedOrder() const;
    bool combinedOrderIsSet() const;
    void unsetcombinedOrder();
    void setCombinedOrder(const CombinedOrder& value);


protected:
    CombinedOrder combinedOrder_;
    bool combinedOrderIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultCreateParameters_H_
