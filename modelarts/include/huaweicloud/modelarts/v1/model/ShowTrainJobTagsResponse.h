
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainJobTagsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainJobTagsResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/TmsTag.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowTrainJobTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTrainJobTagsResponse();
    virtual ~ShowTrainJobTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTrainJobTagsResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<TmsTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TmsTag>& value);


protected:
    std::vector<TmsTag> tags_;
    bool tagsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainJobTagsResponse_H_
