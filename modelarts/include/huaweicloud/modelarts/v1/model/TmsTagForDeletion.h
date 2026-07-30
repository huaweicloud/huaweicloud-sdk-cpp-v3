
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TmsTagForDeletion_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TmsTagForDeletion_H_


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
/// 删除标签的标签结构体，value可以不填，当value不填，表示删除匹配到key的标签。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  TmsTagForDeletion
    : public ModelBase
{
public:
    TmsTagForDeletion();
    virtual ~TmsTagForDeletion();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TmsTagForDeletion members

    /// <summary>
    /// **参数解释：** Tms标签的key。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// **参数解释：** Tms标签的value，非必填。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TmsTagForDeletion_H_
