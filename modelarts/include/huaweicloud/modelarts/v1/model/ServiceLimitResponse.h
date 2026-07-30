
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceLimitResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceLimitResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/RateLimitResponse.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 服务限制信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServiceLimitResponse
    : public ModelBase
{
public:
    ServiceLimitResponse();
    virtual ~ServiceLimitResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceLimitResponse members

    /// <summary>
    /// 
    /// </summary>

    RateLimitResponse getRateLimit() const;
    bool rateLimitIsSet() const;
    void unsetrateLimit();
    void setRateLimit(const RateLimitResponse& value);

    /// <summary>
    /// **参数解释：** 请求大小限制。 **取值范围：** 1-50M。
    /// </summary>

    int32_t getRequestSizeLimit() const;
    bool requestSizeLimitIsSet() const;
    void unsetrequestSizeLimit();
    void setRequestSizeLimit(int32_t value);

    /// <summary>
    /// **参数解释：** 超时时间。 **取值范围：** 1到7200秒。
    /// </summary>

    int32_t getRequestTimeout() const;
    bool requestTimeoutIsSet() const;
    void unsetrequestTimeout();
    void setRequestTimeout(int32_t value);

    /// <summary>
    /// **参数解释：** IP白名单。
    /// </summary>

    std::vector<std::string>& getIpWhiteList();
    bool ipWhiteListIsSet() const;
    void unsetipWhiteList();
    void setIpWhiteList(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** IP黑名单。
    /// </summary>

    std::vector<std::string>& getIpBlackList();
    bool ipBlackListIsSet() const;
    void unsetipBlackList();
    void setIpBlackList(const std::vector<std::string>& value);


protected:
    RateLimitResponse rateLimit_;
    bool rateLimitIsSet_;
    int32_t requestSizeLimit_;
    bool requestSizeLimitIsSet_;
    int32_t requestTimeout_;
    bool requestTimeoutIsSet_;
    std::vector<std::string> ipWhiteList_;
    bool ipWhiteListIsSet_;
    std::vector<std::string> ipBlackList_;
    bool ipBlackListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceLimitResponse_H_
