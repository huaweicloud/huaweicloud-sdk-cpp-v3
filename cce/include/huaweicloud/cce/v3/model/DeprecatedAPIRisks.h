
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_DeprecatedAPIRisks_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_DeprecatedAPIRisks_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 废弃API风险来源
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  DeprecatedAPIRisks
    : public ModelBase
{
public:
    DeprecatedAPIRisks();
    virtual ~DeprecatedAPIRisks();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeprecatedAPIRisks members

    /// <summary>
    /// 请求路径，如/apis/policy/v1beta1/podsecuritypolicies
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 客户端信息
    /// </summary>

    std::string getUserAgent() const;
    bool userAgentIsSet() const;
    void unsetuserAgent();
    void setUserAgent(const std::string& value);


protected:
    std::string url_;
    bool urlIsSet_;
    std::string userAgent_;
    bool userAgentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_DeprecatedAPIRisks_H_
