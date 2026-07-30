
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DevServerJobItem_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DevServerJobItem_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DevServerJobItem
    : public ModelBase
{
public:
    DevServerJobItem();
    virtual ~DevServerJobItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DevServerJobItem members

    /// <summary>
    /// **参数解释**：细粒度任务类型。 **取值范围**：- COMMON   - DEVICE_LOG_COLLECT 等
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：任务所需参数。
    /// </summary>

    std::map<std::string, std::string>& getSpec();
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const std::map<std::string, std::string>& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::map<std::string, std::string> spec_;
    bool specIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DevServerJobItem_H_
