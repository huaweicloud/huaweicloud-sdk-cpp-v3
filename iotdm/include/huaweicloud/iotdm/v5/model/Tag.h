
#ifndef HUAWEICLOUD_SDK_IOTDM_V5_MODEL_Tag_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_MODEL_Tag_H_


#include <huaweicloud/iotdm/v5/IoTDMExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IOTDM_V5_EXPORT  Tag
    : public ModelBase
{
public:
    Tag();
    virtual ~Tag();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Tag members

    /// <summary>
    /// **参数说明**：标签键，标签的键可用字母(包含中文)、数字、空格和以下字符：下划线(_)点(.)冒号(:)等号(&#x3D;)加号(+)中划线(-)以及@，首尾不能有空格字符。 
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// **参数说明**：标签值，可为空字符串和null，标签的值可用字母(包含中文)、数字、空格和以下字符：下划线(_)点(.)冒号(:)等号(&#x3D;)加号(+)中划线(-)以及@。 
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDM_V5_MODEL_Tag_H_
