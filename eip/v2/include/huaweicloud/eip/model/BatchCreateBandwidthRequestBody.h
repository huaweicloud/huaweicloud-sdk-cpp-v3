
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchCreateBandwidthRequestBody_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchCreateBandwidthRequestBody_H_

#include <huaweicloud/eip/EipExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/eip/model/BatchCreateBandwidthOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 批量创建带宽的请求体
/// </summary>
class HUAWEICLOUD_EIP_EXPORT  BatchCreateBandwidthRequestBody
    : public ModelBase
{
public:
    BatchCreateBandwidthRequestBody();
    virtual ~BatchCreateBandwidthRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchCreateBandwidthRequestBody members

    /// <summary>
    /// 
    /// </summary>

    BatchCreateBandwidthOption getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(const BatchCreateBandwidthOption& value);


protected:
    BatchCreateBandwidthOption bandwidth_;
    bool bandwidthIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchCreateBandwidthRequestBody_H_
