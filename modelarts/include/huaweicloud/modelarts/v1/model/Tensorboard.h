
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Tensorboard_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Tensorboard_H_


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
/// Tensorboard连接信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Tensorboard
    : public ModelBase
{
public:
    Tensorboard();
    virtual ~Tensorboard();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Tensorboard members

    /// <summary>
    /// **参数解释**：训练作业的Tensorboard地址。 **取值范围**：不涉及。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// **参数解释**：训练作业的Tensorboard token。 **取值范围**：不涉及。
    /// </summary>

    std::string getToken() const;
    bool tokenIsSet() const;
    void unsettoken();
    void setToken(const std::string& value);


protected:
    std::string url_;
    bool urlIsSet_;
    std::string token_;
    bool tokenIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Tensorboard_H_
