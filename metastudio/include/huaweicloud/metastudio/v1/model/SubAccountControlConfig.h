
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SubAccountControlConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SubAccountControlConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 子账号控制配置
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SubAccountControlConfig
    : public ModelBase
{
public:
    SubAccountControlConfig();
    virtual ~SubAccountControlConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubAccountControlConfig members

    /// <summary>
    /// 子账号业务是否单独控制。
    /// </summary>

    bool isSeparatelyControlled() const;
    bool separatelyControlledIsSet() const;
    void unsetseparatelyControlled();
    void setSeparatelyControlled(bool value);

    /// <summary>
    /// 子账号类型。 * IAM_USER: 使用调用者IAM user id填充 X-App-UserId。如果请求中携带X-App-UserId，也会被忽略替换。
    /// </summary>

    std::string getSubAccountType() const;
    bool subAccountTypeIsSet() const;
    void unsetsubAccountType();
    void setSubAccountType(const std::string& value);


protected:
    bool separatelyControlled_;
    bool separatelyControlledIsSet_;
    std::string subAccountType_;
    bool subAccountTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SubAccountControlConfig_H_
