
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingJobEnginesResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingJobEnginesResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ListEngines_items.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowTrainingJobEnginesResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTrainingJobEnginesResponse();
    virtual ~ShowTrainingJobEnginesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTrainingJobEnginesResponse members

    /// <summary>
    /// 训练作业引擎规格总数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 引擎规格参数列表。
    /// </summary>

    std::vector<ListEngines_items>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<ListEngines_items>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<ListEngines_items> items_;
    bool itemsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingJobEnginesResponse_H_
