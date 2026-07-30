
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateApiKeyReq_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateApiKeyReq_H_


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
/// 创建api-key请求体
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateApiKeyReq
    : public ModelBase
{
public:
    CreateApiKeyReq();
    virtual ~CreateApiKeyReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateApiKeyReq members

    /// <summary>
    /// **参数解释：** api-key名称，用户在[创建API_KEY](CreateInferApiKey.xml)时自定义。 **约束限制：** api-key在删除之前名字不能重复。 **取值范围：** 支持1-64个字符，可以包含字母、汉字、数字、连字符和下划线。 **默认取值：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** api-key描述。 **约束限制：** 不涉及。 **取值范围：** 长度不可以超过256，不能包含感叹号，大于号，小于号，等号，与，单引号，双引号。 **默认取值：** 默认为空。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** api-key生效范围。 **约束限制：** 不涉及。 **取值范围：** - USER：表示生效范围为用户级别，可以访问该用户创建的所有在线服务。 - SERVICE：表示生效范围为单个服务，可以访问绑定该api-key的在线服务。 **默认取值：** 不涉及。
    /// </summary>

    std::string getScope() const;
    bool scopeIsSet() const;
    void unsetscope();
    void setScope(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string scope_;
    bool scopeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateApiKeyReq_H_
