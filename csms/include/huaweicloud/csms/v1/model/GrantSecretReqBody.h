
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_GrantSecretReqBody_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_GrantSecretReqBody_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 授权传入参数
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  GrantSecretReqBody
    : public ModelBase
{
public:
    GrantSecretReqBody();
    virtual ~GrantSecretReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GrantSecretReqBody members

    /// <summary>
    /// 资源id
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 资源类型（SECRET、GROUP）
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 被授权类型，（0：USER；2：GROUP）个人，群组
    /// </summary>

    std::string getGranteeType() const;
    bool granteeTypeIsSet() const;
    void unsetgranteeType();
    void setGranteeType(const std::string& value);

    /// <summary>
    /// 被授权id
    /// </summary>

    std::string getGranteeTargetId() const;
    bool granteeTargetIdIsSet() const;
    void unsetgranteeTargetId();
    void setGranteeTargetId(const std::string& value);

    /// <summary>
    /// 有效期截止时间
    /// </summary>

    utility::datetime getValidityTime() const;
    bool validityTimeIsSet() const;
    void unsetvalidityTime();
    void setValidityTime(const utility::datetime& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string granteeType_;
    bool granteeTypeIsSet_;
    std::string granteeTargetId_;
    bool granteeTargetIdIsSet_;
    utility::datetime validityTime_;
    bool validityTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_GrantSecretReqBody_H_
