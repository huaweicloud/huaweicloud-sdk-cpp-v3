
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePrePaidPublicipRequestBody_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePrePaidPublicipRequestBody_H_

#include <huaweicloud/eip/EipExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/eip/model/CreatePublicipBandwidthOption.h"
#include "huaweicloud/eip/model/CreatePrePaidPublicipExtendParamOption.h"
#include "huaweicloud/eip/model/CreatePrePaidPublicipOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 创建包周期的弹性公网IP
/// </summary>
class HUAWEICLOUD_EIP_EXPORT  CreatePrePaidPublicipRequestBody
    : public ModelBase
{
public:
    CreatePrePaidPublicipRequestBody();
    virtual ~CreatePrePaidPublicipRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreatePrePaidPublicipRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreatePrePaidPublicipOption getPublicip() const;
    bool publicipIsSet() const;
    void unsetpublicip();
    void setPublicip(const CreatePrePaidPublicipOption& value);

    /// <summary>
    /// 
    /// </summary>

    CreatePublicipBandwidthOption getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(const CreatePublicipBandwidthOption& value);

    /// <summary>
    /// 
    /// </summary>

    CreatePrePaidPublicipExtendParamOption getExtendParam() const;
    bool extendParamIsSet() const;
    void unsetextendParam();
    void setExtendParam(const CreatePrePaidPublicipExtendParamOption& value);


protected:
    CreatePrePaidPublicipOption publicip_;
    bool publicipIsSet_;
    CreatePublicipBandwidthOption bandwidth_;
    bool bandwidthIsSet_;
    CreatePrePaidPublicipExtendParamOption extendParam_;
    bool extendParamIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePrePaidPublicipRequestBody_H_
