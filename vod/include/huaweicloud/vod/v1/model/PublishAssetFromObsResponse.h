
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_PublishAssetFromObsResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_PublishAssetFromObsResponse_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_VOD_V1_EXPORT  PublishAssetFromObsResponse
    : public ModelBase, public HttpResponse
{
public:
    PublishAssetFromObsResponse();
    virtual ~PublishAssetFromObsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PublishAssetFromObsResponse members

    /// <summary>
    /// 媒资ID 
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_PublishAssetFromObsResponse_H_
