
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_BatchGetSecretValueRequestBody_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_BatchGetSecretValueRequestBody_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  BatchGetSecretValueRequestBody
    : public ModelBase
{
public:
    BatchGetSecretValueRequestBody();
    virtual ~BatchGetSecretValueRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchGetSecretValueRequestBody members

    /// <summary>
    /// **参数解释：**  待获取凭据值的凭据名称。 **约束限制：**  不涉及  **取值范围：** 不涉及  **默认取值：**  不涉及
    /// </summary>

    std::vector<std::string>& getSecretNameList();
    bool secretNameListIsSet() const;
    void unsetsecretNameList();
    void setSecretNameList(const std::vector<std::string>& value);


protected:
    std::vector<std::string> secretNameList_;
    bool secretNameListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_BatchGetSecretValueRequestBody_H_
