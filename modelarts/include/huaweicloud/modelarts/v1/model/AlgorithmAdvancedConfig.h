
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmAdvancedConfig_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmAdvancedConfig_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/AutoSearch.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 算法高级策略：  - auto_search
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AlgorithmAdvancedConfig
    : public ModelBase
{
public:
    AlgorithmAdvancedConfig();
    virtual ~AlgorithmAdvancedConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlgorithmAdvancedConfig members

    /// <summary>
    /// 
    /// </summary>

    AutoSearch getAutoSearch() const;
    bool autoSearchIsSet() const;
    void unsetautoSearch();
    void setAutoSearch(const AutoSearch& value);


protected:
    AutoSearch autoSearch_;
    bool autoSearchIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmAdvancedConfig_H_
