
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_AssetReviewReq_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_AssetReviewReq_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/Review.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  AssetReviewReq
    : public ModelBase
{
public:
    AssetReviewReq();
    virtual ~AssetReviewReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssetReviewReq members

    /// <summary>
    /// 媒资ID
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Review getReview() const;
    bool reviewIsSet() const;
    void unsetreview();
    void setReview(const Review& value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    Review review_;
    bool reviewIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_AssetReviewReq_H_
