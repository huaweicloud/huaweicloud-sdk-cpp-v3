
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdateExpirationTimeRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdateExpirationTimeRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/UpdateExpirationTimeReq.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  UpdateExpirationTimeRequest
    : public ModelBase
{
public:
    UpdateExpirationTimeRequest();
    virtual ~UpdateExpirationTimeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateExpirationTimeRequest members

    /// <summary>
    /// 存储库ID，默认取值不涉及。 [获取方法请参见\&quot;[获取存储库ID](https://support.huaweicloud.com/api-cbr/ListVault.html)\&quot;。](tag:hws) [获取方法请参见\&quot;[获取存储库ID](https://support.huaweicloud.com/intl/zh-cn/api-cbr/ListVault.html)\&quot;。](tag:hws_hk)
    /// </summary>

    std::string getVaultId() const;
    bool vaultIdIsSet() const;
    void unsetvaultId();
    void setVaultId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateExpirationTimeReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateExpirationTimeReq& value);


protected:
    std::string vaultId_;
    bool vaultIdIsSet_;
    UpdateExpirationTimeReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateExpirationTimeRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateExpirationTimeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdateExpirationTimeRequest_H_
