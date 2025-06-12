
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTrainingSegmentInfoResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTrainingSegmentInfoResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowTrainingSegmentInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTrainingSegmentInfoResponse();
    virtual ~ShowTrainingSegmentInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTrainingSegmentInfoResponse members

    /// <summary>
    /// 确认过的语句索引。
    /// </summary>

    std::vector<int32_t>& getConfirmedIndex();
    bool confirmedIndexIsSet() const;
    void unsetconfirmedIndex();
    void setConfirmedIndex(std::vector<int32_t> value);


protected:
    std::vector<int32_t> confirmedIndex_;
    bool confirmedIndexIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTrainingSegmentInfoResponse_H_
