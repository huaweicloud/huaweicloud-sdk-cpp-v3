
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_CadDomainSwitchRequest_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_CadDomainSwitchRequest_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  CadDomainSwitchRequest
    : public ModelBase
{
public:
    CadDomainSwitchRequest();
    virtual ~CadDomainSwitchRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CadDomainSwitchRequest members

    /// <summary>
    /// 域名id
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 是否开启WEB基础防护开关。0 - 开启， 1 - 关闭
    /// </summary>

    int32_t getWafSwitch() const;
    bool wafSwitchIsSet() const;
    void unsetwafSwitch();
    void setWafSwitch(int32_t value);

    /// <summary>
    /// 是否开启CC防护开关。0 - 开启， 1 - 关闭。开启CC开关必须同时开启WEB基础防护开关
    /// </summary>

    int32_t getCcSwitch() const;
    bool ccSwitchIsSet() const;
    void unsetccSwitch();
    void setCcSwitch(int32_t value);


protected:
    std::string domainId_;
    bool domainIdIsSet_;
    int32_t wafSwitch_;
    bool wafSwitchIsSet_;
    int32_t ccSwitch_;
    bool ccSwitchIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_CadDomainSwitchRequest_H_
