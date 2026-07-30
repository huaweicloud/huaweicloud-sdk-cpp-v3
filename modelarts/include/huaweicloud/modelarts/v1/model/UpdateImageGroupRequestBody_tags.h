
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateImageGroupRequestBody_tags_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateImageGroupRequestBody_tags_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UpdateImageGroupRequestBody_tags
    : public ModelBase
{
public:
    UpdateImageGroupRequestBody_tags();
    virtual ~UpdateImageGroupRequestBody_tags();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateImageGroupRequestBody_tags members

    /// <summary>
    /// **参数解释**：标签键 **约束限制**：最大支持20个标签键。 **取值范围**：key值最大支持长度128 **默认取值**：null。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// **参数解释**：标签值 **约束限制**：最大支持20个标签值。 **取值范围**：value值最大支持长度255 **默认取值**：null。
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateImageGroupRequestBody_tags_H_
