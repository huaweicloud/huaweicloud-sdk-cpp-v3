
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowSearchAlgorithmsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowSearchAlgorithmsResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ListSearchAlgorithms_search_algo_list.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowSearchAlgorithmsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSearchAlgorithmsResponse();
    virtual ~ShowSearchAlgorithmsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSearchAlgorithmsResponse members

    /// <summary>
    /// 超参搜索算法的个数。
    /// </summary>

    int32_t getSearchAlgoCount() const;
    bool searchAlgoCountIsSet() const;
    void unsetsearchAlgoCount();
    void setSearchAlgoCount(int32_t value);

    /// <summary>
    /// 所有超参搜索算法的列表。
    /// </summary>

    std::vector<ListSearchAlgorithms_search_algo_list>& getSearchAlgoList();
    bool searchAlgoListIsSet() const;
    void unsetsearchAlgoList();
    void setSearchAlgoList(const std::vector<ListSearchAlgorithms_search_algo_list>& value);


protected:
    int32_t searchAlgoCount_;
    bool searchAlgoCountIsSet_;
    std::vector<ListSearchAlgorithms_search_algo_list> searchAlgoList_;
    bool searchAlgoListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowSearchAlgorithmsResponse_H_
