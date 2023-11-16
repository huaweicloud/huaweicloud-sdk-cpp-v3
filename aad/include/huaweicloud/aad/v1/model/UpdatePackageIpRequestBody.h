
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdatePackageIpRequestBody_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdatePackageIpRequestBody_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v1/model/UpdateProtectedIpInPolicyBody.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新全量防护对象的请求体
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  UpdatePackageIpRequestBody
    : public ModelBase
{
public:
    UpdatePackageIpRequestBody();
    virtual ~UpdatePackageIpRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePackageIpRequestBody members

    /// <summary>
    /// 全量防护ip列表
    /// </summary>

    std::vector<UpdateProtectedIpInPolicyBody>& getProtectedIpList();
    bool protectedIpListIsSet() const;
    void unsetprotectedIpList();
    void setProtectedIpList(const std::vector<UpdateProtectedIpInPolicyBody>& value);


protected:
    std::vector<UpdateProtectedIpInPolicyBody> protectedIpList_;
    bool protectedIpListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdatePackageIpRequestBody_H_
