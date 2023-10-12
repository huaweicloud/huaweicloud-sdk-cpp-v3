
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_TagItem_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_TagItem_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  TagItem
    : public ModelBase
{
public:
    TagItem();
    virtual ~TagItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TagItem members

    /// <summary>
    /// 标签的名称。 同一个凭据，一个标签键只能对应一个标签值；不同的凭据可以使用相同的标签键。 用户最多可以给单个凭据添加20个标签。  约束：取值范围为1到128个字符，满足正则匹配\&quot;^((?!\\\\s)(?!_sys_)[\\\\p{L}\\\\p{Z}\\\\p{N}_.:&#x3D;+\\\\-@]*)(?&lt;!\\\\s)$\&quot;
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 标签的值。  约束：取值范围不超过255个字符，满足正则匹配\&quot;^([\\\\p{L}\\\\p{Z}\\\\p{N}_.:\\/&#x3D;+\\\\-@]*)$\&quot;
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

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_TagItem_H_
