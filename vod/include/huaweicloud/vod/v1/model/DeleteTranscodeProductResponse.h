
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_DeleteTranscodeProductResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_DeleteTranscodeProductResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/vod/v1/model/ProductGroupDelFailInfo.h>
#include <vector>
#include <huaweicloud/vod/v1/model/ProductGroupInfo.h>

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
class HUAWEICLOUD_VOD_V1_EXPORT  DeleteTranscodeProductResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteTranscodeProductResponse();
    virtual ~DeleteTranscodeProductResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTranscodeProductResponse members

    /// <summary>
    /// 媒资ID
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// SUCCESS：成功 FAIL：失败 PARTIAL_SUCCESS：部分成功 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 删除成功的产物
    /// </summary>

    std::vector<ProductGroupInfo>& getDeletedProducts();
    bool deletedProductsIsSet() const;
    void unsetdeletedProducts();
    void setDeletedProducts(const std::vector<ProductGroupInfo>& value);

    /// <summary>
    /// 删除失败的产物
    /// </summary>

    std::vector<ProductGroupDelFailInfo>& getFailedProducts();
    bool failedProductsIsSet() const;
    void unsetfailedProducts();
    void setFailedProducts(const std::vector<ProductGroupDelFailInfo>& value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<ProductGroupInfo> deletedProducts_;
    bool deletedProductsIsSet_;
    std::vector<ProductGroupDelFailInfo> failedProducts_;
    bool failedProductsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_DeleteTranscodeProductResponse_H_
