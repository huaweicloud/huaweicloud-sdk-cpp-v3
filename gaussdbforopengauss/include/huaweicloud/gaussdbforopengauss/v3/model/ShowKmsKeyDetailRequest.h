
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowKmsKeyDetailRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowKmsKeyDetailRequest_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ShowKmsKeyDetailRequest
    : public ModelBase
{
public:
    ShowKmsKeyDetailRequest();
    virtual ~ShowKmsKeyDetailRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowKmsKeyDetailRequest members

    /// <summary>
    /// **参数解释**: 语言。 **约束限制**: 不涉及。 **取值范围**: - zh-cn  - en-us  **默认取值**: en-us
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// **参数解释**: kms秘钥ID。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getKmsKeyId() const;
    bool kmsKeyIdIsSet() const;
    void unsetkmsKeyId();
    void setKmsKeyId(const std::string& value);

    /// <summary>
    /// **参数解释**: GaussDB使用透明加密的KMS主密钥ID所在资源空间名称。 获取方法请参见[获取项目名称](https://support.huaweicloud.com/api-gaussdb/gaussdb_api_196.html)。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getKmsProjectName() const;
    bool kmsProjectNameIsSet() const;
    void unsetkmsProjectName();
    void setKmsProjectName(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string kmsKeyId_;
    bool kmsKeyIdIsSet_;
    std::string kmsProjectName_;
    bool kmsProjectNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowKmsKeyDetailRequest& dereference_from_shared_ptr(std::shared_ptr<ShowKmsKeyDetailRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowKmsKeyDetailRequest_H_
