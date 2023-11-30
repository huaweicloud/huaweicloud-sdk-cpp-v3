
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_ModifyBandwidthRequestBody_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_ModifyBandwidthRequestBody_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/ModifyBandwidthOption.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量更新带宽对象的请求体
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  ModifyBandwidthRequestBody
    : public ModelBase
{
public:
    ModifyBandwidthRequestBody();
    virtual ~ModifyBandwidthRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyBandwidthRequestBody members

    /// <summary>
    /// 更新带宽列表
    /// </summary>

    std::vector<ModifyBandwidthOption>& getBandwidths();
    bool bandwidthsIsSet() const;
    void unsetbandwidths();
    void setBandwidths(const std::vector<ModifyBandwidthOption>& value);


protected:
    std::vector<ModifyBandwidthOption> bandwidths_;
    bool bandwidthsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_ModifyBandwidthRequestBody_H_
