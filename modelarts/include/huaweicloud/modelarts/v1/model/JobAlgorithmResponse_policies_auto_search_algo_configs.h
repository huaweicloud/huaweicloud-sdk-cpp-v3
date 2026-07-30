
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobAlgorithmResponse_policies_auto_search_algo_configs_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobAlgorithmResponse_policies_auto_search_algo_configs_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/AutoSearchAlgoConfigParameter.h>
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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  JobAlgorithmResponse_policies_auto_search_algo_configs
    : public ModelBase
{
public:
    JobAlgorithmResponse_policies_auto_search_algo_configs();
    virtual ~JobAlgorithmResponse_policies_auto_search_algo_configs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobAlgorithmResponse_policies_auto_search_algo_configs members

    /// <summary>
    /// 搜索算法名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 搜索算法参数。
    /// </summary>

    std::vector<AutoSearchAlgoConfigParameter>& getParams();
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const std::vector<AutoSearchAlgoConfigParameter>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<AutoSearchAlgoConfigParameter> params_;
    bool paramsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobAlgorithmResponse_policies_auto_search_algo_configs_H_
