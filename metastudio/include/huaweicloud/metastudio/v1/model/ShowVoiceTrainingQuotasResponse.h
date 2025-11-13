
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowVoiceTrainingQuotasResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowVoiceTrainingQuotasResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/ResourceAvailableNums.h>
#include <huaweicloud/metastudio/v1/model/VoiceTrainingResource.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowVoiceTrainingQuotasResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowVoiceTrainingQuotasResponse();
    virtual ~ShowVoiceTrainingQuotasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowVoiceTrainingQuotasResponse members

    /// <summary>
    /// 声音模型训练资源总条数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ResourceAvailableNums getResourceAvailableNums() const;
    bool resourceAvailableNumsIsSet() const;
    void unsetresourceAvailableNums();
    void setResourceAvailableNums(const ResourceAvailableNums& value);

    /// <summary>
    /// 声音模型训练资源列表。
    /// </summary>

    std::vector<VoiceTrainingResource>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<VoiceTrainingResource>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    ResourceAvailableNums resourceAvailableNums_;
    bool resourceAvailableNumsIsSet_;
    std::vector<VoiceTrainingResource> resources_;
    bool resourcesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowVoiceTrainingQuotasResponse_H_
