
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectLiveFaceByUrlResponse_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectLiveFaceByUrlResponse_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/frs/v2/model/WarningList.h>
#include <vector>
#include <huaweicloud/frs/v2/model/LiveDetectFaceResp_result.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_FRS_V2_EXPORT  DetectLiveFaceByUrlResponse
    : public ModelBase, public HttpResponse
{
public:
    DetectLiveFaceByUrlResponse();
    virtual ~DetectLiveFaceByUrlResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DetectLiveFaceByUrlResponse members

    /// <summary>
    /// 
    /// </summary>

    LiveDetectFaceResp_result getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const LiveDetectFaceResp_result& value);

    /// <summary>
    /// 警告信息列表。 调用失败时无此字段。
    /// </summary>

    std::vector<WarningList>& getWarningList();
    bool warningListIsSet() const;
    void unsetwarningList();
    void setWarningList(const std::vector<WarningList>& value);


protected:
    LiveDetectFaceResp_result result_;
    bool resultIsSet_;
    std::vector<WarningList> warningList_;
    bool warningListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectLiveFaceByUrlResponse_H_
