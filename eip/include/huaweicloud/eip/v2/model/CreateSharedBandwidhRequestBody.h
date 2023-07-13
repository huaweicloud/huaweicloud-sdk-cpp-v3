
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_CreateSharedBandwidhRequestBody_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_CreateSharedBandwidhRequestBody_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/CreateSharedBandwidthOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建共享带宽请求体
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  CreateSharedBandwidhRequestBody
    : public ModelBase
{
public:
    CreateSharedBandwidhRequestBody();
    virtual ~CreateSharedBandwidhRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateSharedBandwidhRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateSharedBandwidthOption getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(const CreateSharedBandwidthOption& value);


protected:
    CreateSharedBandwidthOption bandwidth_;
    bool bandwidthIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_CreateSharedBandwidhRequestBody_H_
