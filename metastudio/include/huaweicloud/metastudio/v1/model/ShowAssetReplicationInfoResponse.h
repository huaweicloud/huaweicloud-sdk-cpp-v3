
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowAssetReplicationInfoResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowAssetReplicationInfoResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/ReplicationEncInfo.h>

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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowAssetReplicationInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAssetReplicationInfoResponse();
    virtual ~ShowAssetReplicationInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAssetReplicationInfoResponse members

    /// <summary>
    /// 资产ID。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 加密后的资产信息。
    /// </summary>

    std::string getAssetInfo() const;
    bool assetInfoIsSet() const;
    void unsetassetInfo();
    void setAssetInfo(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ReplicationEncInfo getEncryptionInfo() const;
    bool encryptionInfoIsSet() const;
    void unsetencryptionInfo();
    void setEncryptionInfo(const ReplicationEncInfo& value);

    /// <summary>
    /// 过期时间
    /// </summary>

    int64_t getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string assetInfo_;
    bool assetInfoIsSet_;
    ReplicationEncInfo encryptionInfo_;
    bool encryptionInfoIsSet_;
    int64_t expireTime_;
    bool expireTimeIsSet_;
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowAssetReplicationInfoResponse_H_
