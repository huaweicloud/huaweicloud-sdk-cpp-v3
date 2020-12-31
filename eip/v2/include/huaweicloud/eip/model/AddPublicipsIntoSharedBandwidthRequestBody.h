
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_AddPublicipsIntoSharedBandwidthRequestBody_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_AddPublicipsIntoSharedBandwidthRequestBody_H_

#include <huaweicloud/eip/EipExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/eip/model/AddPublicipsIntoSharedBandwidthOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 将弹性公网IP插入共享带宽的请求体
/// </summary>
class HUAWEICLOUD_EIP_EXPORT  AddPublicipsIntoSharedBandwidthRequestBody
    : public ModelBase
{
public:
    AddPublicipsIntoSharedBandwidthRequestBody();
    virtual ~AddPublicipsIntoSharedBandwidthRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AddPublicipsIntoSharedBandwidthRequestBody members

    /// <summary>
    /// 
    /// </summary>

    AddPublicipsIntoSharedBandwidthOption getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(const AddPublicipsIntoSharedBandwidthOption& value);


protected:
    AddPublicipsIntoSharedBandwidthOption bandwidth_;
    bool bandwidthIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_AddPublicipsIntoSharedBandwidthRequestBody_H_
