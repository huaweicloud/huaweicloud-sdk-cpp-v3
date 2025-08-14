
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UserPropDTO_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UserPropDTO_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 用户自定义属性
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  UserPropDTO
    : public ModelBase
{
public:
    UserPropDTO();
    virtual ~UserPropDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserPropDTO members

    /// <summary>
    /// **参数说明**：用户自定义属性键。 **取值范围**：长度不超过128，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getPropKey() const;
    bool propKeyIsSet() const;
    void unsetpropKey();
    void setPropKey(const std::string& value);

    /// <summary>
    /// **参数说明**：用户自定义属性值。 **取值范围**：长度不超过128，只允许中文、字母、数字、以及_? &#39;#().,&amp;%@!-等字符的组合。
    /// </summary>

    std::string getPropValue() const;
    bool propValueIsSet() const;
    void unsetpropValue();
    void setPropValue(const std::string& value);


protected:
    std::string propKey_;
    bool propKeyIsSet_;
    std::string propValue_;
    bool propValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UserPropDTO_H_
