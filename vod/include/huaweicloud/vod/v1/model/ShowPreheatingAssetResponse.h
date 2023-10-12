
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowPreheatingAssetResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowPreheatingAssetResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/PreheatingResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ShowPreheatingAssetResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowPreheatingAssetResponse();
    virtual ~ShowPreheatingAssetResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPreheatingAssetResponse members

    /// <summary>
    /// 预热任务数组 
    /// </summary>

    std::vector<PreheatingResult>& getPreheatingResults();
    bool preheatingResultsIsSet() const;
    void unsetpreheatingResults();
    void setPreheatingResults(const std::vector<PreheatingResult>& value);


protected:
    std::vector<PreheatingResult> preheatingResults_;
    bool preheatingResultsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowPreheatingAssetResponse_H_
