
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_IntranetConnectionModifyRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_IntranetConnectionModifyRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// **参数解释：** 修改自定义URL请求体。 **约束限制：** 不涉及。  **取值范围：** 不涉及。  **默认取值：** 不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  IntranetConnectionModifyRequest
    : public ModelBase
{
public:
    IntranetConnectionModifyRequest();
    virtual ~IntranetConnectionModifyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IntranetConnectionModifyRequest members

    /// <summary>
    /// **参数解释：** 自定义URL，格式为：{协议}://{域名}{路径} **约束限制：** url个数不超过10个，单个url长度不超过1024。 **取值范围：** - 协议范围：http，https，wss，ws。 - 域名范围：支持域名或IP:端口。域名长度不超过63，包含字母、数字、中划线（-)且不能以中划线（-)开头或结尾，顶级域名不能包含数字；端口范围为1-65535。 - 路径范围：斜杠（/）开头，仅包含字母、数字、点号（.）、中划线（-)、下划线（_）、斜杠（/）的路径。 **默认取值：** 不涉及。
    /// </summary>

    std::vector<std::string>& getCustomUrls();
    bool customUrlsIsSet() const;
    void unsetcustomUrls();
    void setCustomUrls(const std::vector<std::string>& value);


protected:
    std::vector<std::string> customUrls_;
    bool customUrlsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_IntranetConnectionModifyRequest_H_
