
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_DeleteTranscodeProductReq_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_DeleteTranscodeProductReq_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  DeleteTranscodeProductReq
    : public ModelBase
{
public:
    DeleteTranscodeProductReq();
    virtual ~DeleteTranscodeProductReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTranscodeProductReq members

    /// <summary>
    /// 媒资Id
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// GROUP：模板组级删除。 PRODUCT：产物级删除
    /// </summary>

    std::string getDeleteType() const;
    bool deleteTypeIsSet() const;
    void unsetdeleteType();
    void setDeleteType(const std::string& value);

    /// <summary>
    /// 删除的产物信息
    /// </summary>

    std::vector<ProductGroupInfo>& getDeleteInfos();
    bool deleteInfosIsSet() const;
    void unsetdeleteInfos();
    void setDeleteInfos(const std::vector<ProductGroupInfo>& value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string deleteType_;
    bool deleteTypeIsSet_;
    std::vector<ProductGroupInfo> deleteInfos_;
    bool deleteInfosIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_DeleteTranscodeProductReq_H_
