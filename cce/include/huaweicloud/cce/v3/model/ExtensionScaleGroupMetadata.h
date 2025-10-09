
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ExtensionScaleGroupMetadata_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ExtensionScaleGroupMetadata_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 扩容伸缩组的基本信息
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ExtensionScaleGroupMetadata
    : public ModelBase
{
public:
    ExtensionScaleGroupMetadata();
    virtual ~ExtensionScaleGroupMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExtensionScaleGroupMetadata members

    /// <summary>
    /// 扩展伸缩组的uuid，由系统自动生成
    /// </summary>

    std::string getUid() const;
    bool uidIsSet() const;
    void unsetuid();
    void setUid(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展伸缩组的名称。 **约束限制**： 不能为 **default**。 **取值范围**： 长度不能超过56个字符，只能包含数字和小写字母以及连字符（-），必须以小写字母开头以小写字母或者数字结尾。 **默认取值**： 不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string uid_;
    bool uidIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ExtensionScaleGroupMetadata_H_
