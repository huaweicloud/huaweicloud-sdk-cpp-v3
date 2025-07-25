
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListLivePlatformsResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListLivePlatformsResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/LivePlatformInfo.h>
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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ListLivePlatformsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListLivePlatformsResponse();
    virtual ~ListLivePlatformsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLivePlatformsResponse members

    /// <summary>
    /// 直播平台列表
    /// </summary>

    std::vector<LivePlatformInfo>& getLivePlatforms();
    bool livePlatformsIsSet() const;
    void unsetlivePlatforms();
    void setLivePlatforms(const std::vector<LivePlatformInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<LivePlatformInfo> livePlatforms_;
    bool livePlatformsIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListLivePlatformsResponse_H_
