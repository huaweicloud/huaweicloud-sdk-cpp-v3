
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ContentInfo_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ContentInfo_H_


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
/// 算法内容详情
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ContentInfo
    : public ModelBase
{
public:
    ContentInfo();
    virtual ~ContentInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ContentInfo members

    /// <summary>
    /// **参数解释**：版本数量。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getVersionNum() const;
    bool versionNumIsSet() const;
    void unsetversionNum();
    void setVersionNum(const std::string& value);

    /// <summary>
    /// **参数解释**：描述。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getDesc() const;
    bool descIsSet() const;
    void unsetdesc();
    void setDesc(const std::string& value);


protected:
    std::string versionNum_;
    bool versionNumIsSet_;
    std::string desc_;
    bool descIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ContentInfo_H_
