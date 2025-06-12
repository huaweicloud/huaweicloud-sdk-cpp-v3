
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ConfirmTrainingSegmentResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ConfirmTrainingSegmentResponse_H_


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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ConfirmTrainingSegmentResponse
    : public ModelBase, public HttpResponse
{
public:
    ConfirmTrainingSegmentResponse();
    virtual ~ConfirmTrainingSegmentResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConfirmTrainingSegmentResponse members

    /// <summary>
    /// 是否确认成功。
    /// </summary>

    bool isConfirmResult() const;
    bool confirmResultIsSet() const;
    void unsetconfirmResult();
    void setConfirmResult(bool value);

    /// <summary>
    /// 讲解不匹配的文本索引。
    /// </summary>

    std::vector<int32_t>& getUnmatchedIndexHit();
    bool unmatchedIndexHitIsSet() const;
    void unsetunmatchedIndexHit();
    void setUnmatchedIndexHit(std::vector<int32_t> value);


protected:
    bool confirmResult_;
    bool confirmResultIsSet_;
    std::vector<int32_t> unmatchedIndexHit_;
    bool unmatchedIndexHitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ConfirmTrainingSegmentResponse_H_
