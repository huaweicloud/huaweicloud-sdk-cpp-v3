
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListJobsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListJobsResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PoolJob.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListJobsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListJobsResponse();
    virtual ~ListJobsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListJobsResponse members

    /// <summary>
    /// **参数解释**： 结果总数。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数解释**：job列表。
    /// </summary>

    std::vector<PoolJob>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<PoolJob>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<PoolJob> items_;
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListJobsResponse_H_
