
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_TagRef_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_TagRef_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  TagRef
    : public ModelBase
{
public:
    TagRef();
    virtual ~TagRef();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TagRef members

    /// <summary>
    /// **参数说明**：标签键名称，可以是一个明确的静态字符串，也可以是动态的模板参数引用 - 明确的静态字符串：\&quot;myTagKey\&quot;。**取值范围**：长度不超过64，只允许中文、字母、数字、以及_.-等字符的组合 - 参数引用: {\&quot;ref\&quot; : \&quot;iotda::certificate::country\&quot;}
    /// </summary>

    Object getTagKey() const;
    bool tagKeyIsSet() const;
    void unsettagKey();
    void setTagKey(const Object& value);

    /// <summary>
    /// **参数说明**：标签值，可以是一个明确的静态字符串，也可以是动态的模板参数引用 - 明确的静态字符串：\&quot;myTagValue\&quot;。**取值范围**：长度不超过128，只允许中文、字母、数字、以及_.-等字符的组合。 - 参数引用: {\&quot;ref\&quot; : \&quot;iotda::certificate::country\&quot;}
    /// </summary>

    Object getTagValue() const;
    bool tagValueIsSet() const;
    void unsettagValue();
    void setTagValue(const Object& value);


protected:
    Object tagKey_;
    bool tagKeyIsSet_;
    Object tagValue_;
    bool tagValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_TagRef_H_
