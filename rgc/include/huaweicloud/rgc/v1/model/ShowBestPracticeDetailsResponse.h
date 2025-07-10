
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowBestPracticeDetailsResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowBestPracticeDetailsResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rgc/v1/model/BestPracticeCheckItemDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ShowBestPracticeDetailsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowBestPracticeDetailsResponse();
    virtual ~ShowBestPracticeDetailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBestPracticeDetailsResponse members

    /// <summary>
    /// 最佳实践检测结果
    /// </summary>

    std::vector<BestPracticeCheckItemDetail>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<BestPracticeCheckItemDetail>& value);


protected:
    std::vector<BestPracticeCheckItemDetail> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowBestPracticeDetailsResponse_H_
