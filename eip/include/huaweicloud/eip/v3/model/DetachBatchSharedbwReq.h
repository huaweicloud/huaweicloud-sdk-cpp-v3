
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_DetachBatchSharedbwReq_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_DetachBatchSharedbwReq_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v3/model/DetachBatchSharedbwReq_publicips.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 共享带宽批量移出弹性公网IP请求参数
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  DetachBatchSharedbwReq
    : public ModelBase
{
public:
    DetachBatchSharedbwReq();
    virtual ~DetachBatchSharedbwReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DetachBatchSharedbwReq members

    /// <summary>
    /// 共享带宽批量移出弹性公网IP请求对象
    /// </summary>

    std::vector<DetachBatchSharedbwReq_publicips>& getPublicips();
    bool publicipsIsSet() const;
    void unsetpublicips();
    void setPublicips(const std::vector<DetachBatchSharedbwReq_publicips>& value);


protected:
    std::vector<DetachBatchSharedbwReq_publicips> publicips_;
    bool publicipsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_DetachBatchSharedbwReq_H_
