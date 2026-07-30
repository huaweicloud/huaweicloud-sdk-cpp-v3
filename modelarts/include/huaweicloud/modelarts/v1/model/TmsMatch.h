
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TmsMatch_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TmsMatch_H_


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
/// Tms通过标签查询资源时，传入的特殊key-value匹配项，目前只支持传入资源名称进行模糊查询。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  TmsMatch
    : public ModelBase
{
public:
    TmsMatch();
    virtual ~TmsMatch();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TmsMatch members

    /// <summary>
    /// **参数解释：** 匹配项名称，目前只支持resource_name。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 匹配项的值，不区分大小写，key为resource_name时使用模糊查询，匹配资源名称。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TmsMatch_H_
