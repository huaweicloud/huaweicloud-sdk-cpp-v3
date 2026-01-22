
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ImportRuleAclRequestBody_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ImportRuleAclRequestBody_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/HttpContent.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ImportRuleAclRequestBody
    : public ModelBase
{
public:
    ImportRuleAclRequestBody();
    virtual ~ImportRuleAclRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImportRuleAclRequestBody members

    /// <summary>
    /// **参数解释**： 规则文件 **约束限制**： 请按模板要求的文件类型和内容导入规则，否则无法成功导入 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    HttpContent getFile() const;
    bool fileIsSet() const;
    void unsetfile();
    void setFile(const HttpContent& value);


protected:
    HttpContent file_;
    bool fileIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ImportRuleAclRequestBody_H_
