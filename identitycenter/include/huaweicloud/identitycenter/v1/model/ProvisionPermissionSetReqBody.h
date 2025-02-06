
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ProvisionPermissionSetReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ProvisionPermissionSetReqBody_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// ProvisionPermissionSet的请求体
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ProvisionPermissionSetReqBody
    : public ModelBase
{
public:
    ProvisionPermissionSetReqBody();
    virtual ~ProvisionPermissionSetReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProvisionPermissionSetReqBody members

    /// <summary>
    /// 账号ID
    /// </summary>

    std::string getTargetId() const;
    bool targetIdIsSet() const;
    void unsettargetId();
    void setTargetId(const std::string& value);

    /// <summary>
    /// 创建绑定的实体类型
    /// </summary>

    std::string getTargetType() const;
    bool targetTypeIsSet() const;
    void unsettargetType();
    void setTargetType(const std::string& value);


protected:
    std::string targetId_;
    bool targetIdIsSet_;
    std::string targetType_;
    bool targetTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ProvisionPermissionSetReqBody_H_
