
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateImageGroupRequestBody_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateImageGroupRequestBody_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/UpdateImageGroupRequestBody_tags.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新镜像标签请求体，包含两个字段read_me和tags，其中read_me为镜像说明信息，支持30k长度以内字符串；tags为标签列表，标签为键值对
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UpdateImageGroupRequestBody
    : public ModelBase
{
public:
    UpdateImageGroupRequestBody();
    virtual ~UpdateImageGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateImageGroupRequestBody members

    /// <summary>
    /// **参数解释**：镜像组更新的概览信息。 **约束限制**：不涉及。 **取值范围**：长度限制30000个字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getReadMe() const;
    bool readMeIsSet() const;
    void unsetreadMe();
    void setReadMe(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像组更新的标签。 **约束限制**：最大支持20个标签。 **取值范围**：key值最大支持长度128，value值最大支持255。 **默认取值**：不涉及。
    /// </summary>

    std::vector<UpdateImageGroupRequestBody_tags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<UpdateImageGroupRequestBody_tags>& value);


protected:
    std::string readMe_;
    bool readMeIsSet_;
    std::vector<UpdateImageGroupRequestBody_tags> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateImageGroupRequestBody_H_
