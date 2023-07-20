
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_DetachSharedbwReq_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_DetachSharedbwReq_H_

#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v3/model/DetachSharedbwReq_publicip.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 共享带宽移出弹性公网IP请求参数
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  DetachSharedbwReq
    : public ModelBase
{
public:
    DetachSharedbwReq();
    virtual ~DetachSharedbwReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DetachSharedbwReq members

    /// <summary>
    /// 
    /// </summary>

    DetachSharedbwReq_publicip getPublicip() const;
    bool publicipIsSet() const;
    void unsetpublicip();
    void setPublicip(const DetachSharedbwReq_publicip& value);


protected:
    DetachSharedbwReq_publicip publicip_;
    bool publicipIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_DetachSharedbwReq_H_
