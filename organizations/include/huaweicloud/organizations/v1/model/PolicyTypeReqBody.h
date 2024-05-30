
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_PolicyTypeReqBody_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_PolicyTypeReqBody_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 策略类型相关操作的请求体。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  PolicyTypeReqBody
    : public ModelBase
{
public:
    PolicyTypeReqBody();
    virtual ~PolicyTypeReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PolicyTypeReqBody members

    /// <summary>
    /// 策略类型的名称，service_control_policy服务控制策略；tag_policy：标签策略。
    /// </summary>

    std::string getPolicyType() const;
    bool policyTypeIsSet() const;
    void unsetpolicyType();
    void setPolicyType(const std::string& value);

    /// <summary>
    /// 根的唯一标识符（ID）。
    /// </summary>

    std::string getRootId() const;
    bool rootIdIsSet() const;
    void unsetrootId();
    void setRootId(const std::string& value);


protected:
    std::string policyType_;
    bool policyTypeIsSet_;
    std::string rootId_;
    bool rootIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_PolicyTypeReqBody_H_
