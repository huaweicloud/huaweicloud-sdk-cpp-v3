
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_PrepaidParamForBatchResizeVolume_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_PrepaidParamForBatchResizeVolume_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// The billing policy parameter for the yearly/monthly disk capacity expansion.
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  PrepaidParamForBatchResizeVolume
    : public ModelBase
{
public:
    PrepaidParamForBatchResizeVolume();
    virtual ~PrepaidParamForBatchResizeVolume();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PrepaidParamForBatchResizeVolume members

    /// <summary>
    /// Whether to pay immediately. This parameter is valid only when the disk is billed on a yearly/monthly basis. The default value is **false**. Values: - **true**: An order is immediately paid from the account balance. - **false**: An order is not paid immediately after being created.
    /// </summary>

    std::string getIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(const std::string& value);


protected:
    std::string isAutoPay_;
    bool isAutoPayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_PrepaidParamForBatchResizeVolume_H_
