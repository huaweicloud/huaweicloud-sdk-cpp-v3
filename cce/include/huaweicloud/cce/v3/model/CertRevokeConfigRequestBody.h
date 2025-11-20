
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_CertRevokeConfigRequestBody_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_CertRevokeConfigRequestBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  CertRevokeConfigRequestBody
    : public ModelBase
{
public:
    CertRevokeConfigRequestBody();
    virtual ~CertRevokeConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CertRevokeConfigRequestBody members

    /// <summary>
    /// **参数解释**： 用户ID，获取方式参见本接口的接口约束 **约束限制**： 与agencyId互斥，二选一填写 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// **参数解释**： 用户ID，获取方式参见[如何获取用户ID](cce_02_0249.xml#section1) **约束限制**： 与agencyId互斥，二选一填写 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getAgencyId() const;
    bool agencyIdIsSet() const;
    void unsetagencyId();
    void setAgencyId(const std::string& value);


protected:
    std::string userId_;
    bool userIdIsSet_;
    std::string agencyId_;
    bool agencyIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_CertRevokeConfigRequestBody_H_
