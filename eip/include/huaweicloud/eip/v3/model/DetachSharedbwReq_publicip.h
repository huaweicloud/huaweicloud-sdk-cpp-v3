
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_DetachSharedbwReq_publicip_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_DetachSharedbwReq_publicip_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v3/model/DetachSharedbwDict.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 共享带宽移出弹性公网IP请求对象
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  DetachSharedbwReq_publicip
    : public ModelBase
{
public:
    DetachSharedbwReq_publicip();
    virtual ~DetachSharedbwReq_publicip();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DetachSharedbwReq_publicip members

    /// <summary>
    /// 
    /// </summary>

    DetachSharedbwDict getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(const DetachSharedbwDict& value);


protected:
    DetachSharedbwDict bandwidth_;
    bool bandwidthIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_DetachSharedbwReq_publicip_H_
