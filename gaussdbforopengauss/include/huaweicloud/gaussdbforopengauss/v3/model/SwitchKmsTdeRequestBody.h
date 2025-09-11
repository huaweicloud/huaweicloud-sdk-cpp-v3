
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SwitchKmsTdeRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SwitchKmsTdeRequestBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  SwitchKmsTdeRequestBody
    : public ModelBase
{
public:
    SwitchKmsTdeRequestBody();
    virtual ~SwitchKmsTdeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchKmsTdeRequestBody members

    /// <summary>
    /// **参数解释**: kms主密钥ID。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getKmsTdeKeyId() const;
    bool kmsTdeKeyIdIsSet() const;
    void unsetkmsTdeKeyId();
    void setKmsTdeKeyId(const std::string& value);

    /// <summary>
    /// **参数解释**: GaussDB使用透明加密的KMS主密钥ID所在资源空间名称。 获取方法请参见[获取项目名称](https://support.huaweicloud.com/api-gaussdb/gaussdb_api_196.html)。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getKmsProjectName() const;
    bool kmsProjectNameIsSet() const;
    void unsetkmsProjectName();
    void setKmsProjectName(const std::string& value);

    /// <summary>
    /// **参数解释**: 需要切换的状态：on表示开启。 **约束限制**: 不涉及。 **取值范围**: on: 开启。 **默认取值**: on
    /// </summary>

    std::string getKmsTdeStatus() const;
    bool kmsTdeStatusIsSet() const;
    void unsetkmsTdeStatus();
    void setKmsTdeStatus(const std::string& value);


protected:
    std::string kmsTdeKeyId_;
    bool kmsTdeKeyIdIsSet_;
    std::string kmsProjectName_;
    bool kmsProjectNameIsSet_;
    std::string kmsTdeStatus_;
    bool kmsTdeStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SwitchKmsTdeRequestBody_H_
