
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_GetIdentityCenterServiceStatusResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_GetIdentityCenterServiceStatusResponse_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  GetIdentityCenterServiceStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    GetIdentityCenterServiceStatusResponse();
    virtual ~GetIdentityCenterServiceStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetIdentityCenterServiceStatusResponse members

    /// <summary>
    /// IAM身份中心服务实例状态
    /// </summary>

    std::string getServiceStatus() const;
    bool serviceStatusIsSet() const;
    void unsetserviceStatus();
    void setServiceStatus(const std::string& value);

    /// <summary>
    /// IAM身份中心服务实例状态呈现原因
    /// </summary>

    std::vector<std::string>& getServiceStatusReasons();
    bool serviceStatusReasonsIsSet() const;
    void unsetserviceStatusReasons();
    void setServiceStatusReasons(const std::vector<std::string>& value);


protected:
    std::string serviceStatus_;
    bool serviceStatusIsSet_;
    std::vector<std::string> serviceStatusReasons_;
    bool serviceStatusReasonsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_GetIdentityCenterServiceStatusResponse_H_
