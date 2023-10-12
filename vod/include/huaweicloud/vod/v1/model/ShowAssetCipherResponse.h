
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowAssetCipherResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowAssetCipherResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_VOD_V1_EXPORT  ShowAssetCipherResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAssetCipherResponse();
    virtual ~ShowAssetCipherResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAssetCipherResponse members

    /// <summary>
    /// 媒资ID。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 密钥密文。
    /// </summary>

    std::string getEdk() const;
    bool edkIsSet() const;
    void unsetedk();
    void setEdk(const std::string& value);

    /// <summary>
    /// 密钥明文。
    /// </summary>

    std::string getDk() const;
    bool dkIsSet() const;
    void unsetdk();
    void setDk(const std::string& value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string edk_;
    bool edkIsSet_;
    std::string dk_;
    bool dkIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowAssetCipherResponse_H_
