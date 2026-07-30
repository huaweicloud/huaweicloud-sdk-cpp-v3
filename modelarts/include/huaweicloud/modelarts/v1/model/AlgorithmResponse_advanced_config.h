
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmResponse_advanced_config_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmResponse_advanced_config_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/AlgorithmResponse_advanced_config_auto_search.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AlgorithmResponse_advanced_config
    : public ModelBase
{
public:
    AlgorithmResponse_advanced_config();
    virtual ~AlgorithmResponse_advanced_config();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlgorithmResponse_advanced_config members

    /// <summary>
    /// 
    /// </summary>

    AlgorithmResponse_advanced_config_auto_search getAutoSearch() const;
    bool autoSearchIsSet() const;
    void unsetautoSearch();
    void setAutoSearch(const AlgorithmResponse_advanced_config_auto_search& value);


protected:
    AlgorithmResponse_advanced_config_auto_search autoSearch_;
    bool autoSearchIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmResponse_advanced_config_H_
