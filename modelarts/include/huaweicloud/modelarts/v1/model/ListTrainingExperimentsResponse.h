
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListTrainingExperimentsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListTrainingExperimentsResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/TrainingExperimentResponse.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListTrainingExperimentsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTrainingExperimentsResponse();
    virtual ~ListTrainingExperimentsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTrainingExperimentsResponse members

    /// <summary>
    /// **参数解释**：查询到所有训练实验总数。 **取值范围**：不涉及。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// **参数解释**：查询到所有符合查询条件的训练实验总数。 **取值范围**：不涉及。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数解释**：查询到所有训练实验限制个数。 **取值范围**：不涉及。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**：查询作业的页数，最小为0。例如设置为0，则表示从第一页开始查询。  **取值范围**：不涉及。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释**：查询到所有训练实验排序依赖字段。 **取值范围**：不涉及。
    /// </summary>

    std::string getSortBy() const;
    bool sortByIsSet() const;
    void unsetsortBy();
    void setSortBy(const std::string& value);

    /// <summary>
    /// **参数解释**：查询到所有训练实验排序方式。  **取值范围**： - asc：升序 - desc：降序
    /// </summary>

    std::string getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(const std::string& value);

    /// <summary>
    /// **参数解释**：查询到所有符合查询条件的训练实验详情。
    /// </summary>

    std::vector<TrainingExperimentResponse>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<TrainingExperimentResponse>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    int32_t count_;
    bool countIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string sortBy_;
    bool sortByIsSet_;
    std::string order_;
    bool orderIsSet_;
    std::vector<TrainingExperimentResponse> items_;
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListTrainingExperimentsResponse_H_
