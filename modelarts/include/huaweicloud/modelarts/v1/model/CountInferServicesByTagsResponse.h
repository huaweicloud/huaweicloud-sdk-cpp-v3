
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CountInferServicesByTagsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CountInferServicesByTagsResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CountInferServicesByTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    CountInferServicesByTagsResponse();
    virtual ~CountInferServicesByTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CountInferServicesByTagsResponse members

    /// <summary>
    /// **参数解释：** 资源实例总数量。 **取值范围：** 不涉及
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CountInferServicesByTagsResponse_H_
