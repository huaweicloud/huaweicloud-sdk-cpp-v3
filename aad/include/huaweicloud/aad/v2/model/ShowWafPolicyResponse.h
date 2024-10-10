
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ShowWafPolicyResponse_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ShowWafPolicyResponse_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v2/model/WafPolicyOptions.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  ShowWafPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowWafPolicyResponse();
    virtual ~ShowWafPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowWafPolicyResponse members

    /// <summary>
    /// 域名(包含端口)
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 0-中国大陆，1-中国大陆外
    /// </summary>

    int32_t getOverseasType() const;
    bool overseasTypeIsSet() const;
    void unsetoverseasType();
    void setOverseasType(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    WafPolicyOptions getOptions() const;
    bool optionsIsSet() const;
    void unsetoptions();
    void setOptions(const WafPolicyOptions& value);

    /// <summary>
    /// 智能CC防护等级：[0-宽松,1- 正常, 2- 严格]
    /// </summary>

    int32_t getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(int32_t value);

    /// <summary>
    /// 智能CC模式：0-预警，1-防护
    /// </summary>

    int32_t getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(int32_t value);


protected:
    std::string domainName_;
    bool domainNameIsSet_;
    int32_t overseasType_;
    bool overseasTypeIsSet_;
    WafPolicyOptions options_;
    bool optionsIsSet_;
    int32_t level_;
    bool levelIsSet_;
    int32_t mode_;
    bool modeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ShowWafPolicyResponse_H_
