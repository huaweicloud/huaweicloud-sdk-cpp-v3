
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_EmailDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_EmailDto_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// The email address associated with the user.
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  EmailDto
    : public ModelBase
{
public:
    EmailDto();
    virtual ~EmailDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EmailDto members

    /// <summary>
    /// 一个布尔值，表示这是否为用户的主电子邮箱
    /// </summary>

    bool isPrimary() const;
    bool primaryIsSet() const;
    void unsetprimary();
    void setPrimary(bool value);

    /// <summary>
    /// 表示电子邮箱类型的字符串
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 包含电子邮箱地址的字符串
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 电子邮箱地址的验证状态
    /// </summary>

    std::string getVerificationStatus() const;
    bool verificationStatusIsSet() const;
    void unsetverificationStatus();
    void setVerificationStatus(const std::string& value);


protected:
    bool primary_;
    bool primaryIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string verificationStatus_;
    bool verificationStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_EmailDto_H_
