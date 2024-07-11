
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateHlsConfigResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateHlsConfigResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v1/model/PushDomainApplication.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  UpdateHlsConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateHlsConfigResponse();
    virtual ~UpdateHlsConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateHlsConfigResponse members

    /// <summary>
    /// 推流域名
    /// </summary>

    std::string getPushDomain() const;
    bool pushDomainIsSet() const;
    void unsetpushDomain();
    void setPushDomain(const std::string& value);

    /// <summary>
    /// 推流域名APP配置
    /// </summary>

    std::vector<PushDomainApplication>& getApplication();
    bool applicationIsSet() const;
    void unsetapplication();
    void setApplication(const std::vector<PushDomainApplication>& value);


protected:
    std::string pushDomain_;
    bool pushDomainIsSet_;
    std::vector<PushDomainApplication> application_;
    bool applicationIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateHlsConfigResponse_H_
