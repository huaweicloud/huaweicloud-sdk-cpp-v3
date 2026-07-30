
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMonitor_metric_dimensions_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMonitor_metric_dimensions_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolMonitor_metric_dimensions
    : public ModelBase
{
public:
    PoolMonitor_metric_dimensions();
    virtual ~PoolMonitor_metric_dimensions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolMonitor_metric_dimensions members

    /// <summary>
    /// **参数解释**：指标维度名称。 **取值范围**：指标名称。可选值如下： - clusterId：集群ID。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：指标维度取值。 **取值范围**：不涉及。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMonitor_metric_dimensions_H_
