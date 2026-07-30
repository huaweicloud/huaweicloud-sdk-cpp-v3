
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListSearchAlgorithms_search_algo_list_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListSearchAlgorithms_search_algo_list_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/ListSearchAlgorithms_params.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListSearchAlgorithms_search_algo_list
    : public ModelBase
{
public:
    ListSearchAlgorithms_search_algo_list();
    virtual ~ListSearchAlgorithms_search_algo_list();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSearchAlgorithms_search_algo_list members

    /// <summary>
    /// 超参搜索算法的名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 超参搜索算法的参数列表。
    /// </summary>

    std::vector<ListSearchAlgorithms_params>& getParams();
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const std::vector<ListSearchAlgorithms_params>& value);

    /// <summary>
    /// 超参搜索算法的描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<ListSearchAlgorithms_params> params_;
    bool paramsIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListSearchAlgorithms_search_algo_list_H_
