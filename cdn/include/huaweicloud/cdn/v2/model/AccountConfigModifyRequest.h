
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_AccountConfigModifyRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_AccountConfigModifyRequest_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 租户配置权限修改请求体。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  AccountConfigModifyRequest
    : public ModelBase
{
public:
    AccountConfigModifyRequest();
    virtual ~AccountConfigModifyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccountConfigModifyRequest members

    /// <summary>
    /// OBS委托授权，使用OBS私有桶作为源站时需要开启该委托授权。当前仅支持传on：开启OBS委托授权。
    /// </summary>

    std::string getObsAgencyStatus() const;
    bool obsAgencyStatusIsSet() const;
    void unsetobsAgencyStatus();
    void setObsAgencyStatus(const std::string& value);

    /// <summary>
    /// SCM委托授权，配置HTTPS证书时，证书来源选择SCM证书时需要开启该委托授权。当前仅支持传on：开启SCM委托授权。
    /// </summary>

    std::string getScmAgencyStatus() const;
    bool scmAgencyStatusIsSet() const;
    void unsetscmAgencyStatus();
    void setScmAgencyStatus(const std::string& value);


protected:
    std::string obsAgencyStatus_;
    bool obsAgencyStatusIsSet_;
    std::string scmAgencyStatus_;
    bool scmAgencyStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_AccountConfigModifyRequest_H_
