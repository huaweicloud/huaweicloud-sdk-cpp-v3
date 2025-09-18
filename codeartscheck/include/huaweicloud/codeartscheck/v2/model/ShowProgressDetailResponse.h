
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowProgressDetailResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowProgressDetailResponse_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartscheck/v2/model/ProgressDetailV2.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  ShowProgressDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowProgressDetailResponse();
    virtual ~ShowProgressDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowProgressDetailResponse members

    /// <summary>
    /// 任务状态,0表示检查中，1表示检查失败，2表示检查成功，3表示任务中止
    /// </summary>

    int32_t getTaskStatus() const;
    bool taskStatusIsSet() const;
    void unsettaskStatus();
    void setTaskStatus(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ProgressDetailV2 getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(const ProgressDetailV2& value);


protected:
    int32_t taskStatus_;
    bool taskStatusIsSet_;
    ProgressDetailV2 progress_;
    bool progressIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowProgressDetailResponse_H_
