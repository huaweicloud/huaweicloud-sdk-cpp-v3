
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchActionDevServerIds_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchActionDevServerIds_H_


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
/// 批量操作Lite Server实例ID列表。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchActionDevServerIds
    : public ModelBase
{
public:
    BatchActionDevServerIds();
    virtual ~BatchActionDevServerIds();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchActionDevServerIds members

    /// <summary>
    /// **参数解释**：Lite Server实例ID。 **约束限制**：不涉及。 **取值范围**：不涉及 **默认取值**：不涉及
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchActionDevServerIds_H_
