
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AssumeAgencyForPodIdentityRequestBody_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AssumeAgencyForPodIdentityRequestBody_H_


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
/// 使用ServiceAccount token获取对应的pod-identity关联相关委托临时凭据请求参数
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  AssumeAgencyForPodIdentityRequestBody
    : public ModelBase
{
public:
    AssumeAgencyForPodIdentityRequestBody();
    virtual ~AssumeAgencyForPodIdentityRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssumeAgencyForPodIdentityRequestBody members

    /// <summary>
    /// **参数解释：** pod-identity关联所绑定的ServiceAccount token。 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 无
    /// </summary>

    std::string getToken() const;
    bool tokenIsSet() const;
    void unsettoken();
    void setToken(const std::string& value);


protected:
    std::string token_;
    bool tokenIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AssumeAgencyForPodIdentityRequestBody_H_
