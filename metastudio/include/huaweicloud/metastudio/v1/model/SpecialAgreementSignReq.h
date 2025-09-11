
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SpecialAgreementSignReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SpecialAgreementSignReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 增加租户权限
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SpecialAgreementSignReq
    : public ModelBase
{
public:
    SpecialAgreementSignReq();
    virtual ~SpecialAgreementSignReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SpecialAgreementSignReq members

    /// <summary>
    /// 当前服务协议类型: AUTO_PAY: 自动支付协议
    /// </summary>

    std::string getAgreementType() const;
    bool agreementTypeIsSet() const;
    void unsetagreementType();
    void setAgreementType(const std::string& value);

    /// <summary>
    /// 是否为去签署,true:签署;false:取消签署
    /// </summary>

    bool isToSign() const;
    bool toSignIsSet() const;
    void unsettoSign();
    void setToSign(bool value);


protected:
    std::string agreementType_;
    bool agreementTypeIsSet_;
    bool toSign_;
    bool toSignIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SpecialAgreementSignReq_H_
