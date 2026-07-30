
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListEventCategoriesResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListEventCategoriesResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/EventCategoriesResp.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListEventCategoriesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListEventCategoriesResponse();
    virtual ~ListEventCategoriesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListEventCategoriesResponse members

    /// <summary>
    /// **参数解释**：事件类型。
    /// </summary>

    std::vector<EventCategoriesResp>& getEventCategories();
    bool eventCategoriesIsSet() const;
    void unseteventCategories();
    void setEventCategories(const std::vector<EventCategoriesResp>& value);


protected:
    std::vector<EventCategoriesResp> eventCategories_;
    bool eventCategoriesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListEventCategoriesResponse_H_
