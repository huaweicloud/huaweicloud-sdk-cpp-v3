
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferDeploymentHpaEventsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferDeploymentHpaEventsResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/HpaEventResponse.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListInferDeploymentHpaEventsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListInferDeploymentHpaEventsResponse();
    virtual ~ListInferDeploymentHpaEventsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInferDeploymentHpaEventsResponse members

    /// <summary>
    /// **参数解释：** 当前页。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getCurrent() const;
    bool currentIsSet() const;
    void unsetcurrent();
    void setCurrent(int32_t value);

    /// <summary>
    /// **参数解释：** 总页数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getPages() const;
    bool pagesIsSet() const;
    void unsetpages();
    void setPages(int32_t value);

    /// <summary>
    /// **参数解释：** 每一页的数量。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// **参数解释：** 总记录数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// **参数解释：** 服务事件列表。
    /// </summary>

    std::vector<HpaEventResponse>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<HpaEventResponse>& value);


protected:
    int32_t current_;
    bool currentIsSet_;
    int32_t pages_;
    bool pagesIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    int32_t total_;
    bool totalIsSet_;
    std::vector<HpaEventResponse> data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferDeploymentHpaEventsResponse_H_
