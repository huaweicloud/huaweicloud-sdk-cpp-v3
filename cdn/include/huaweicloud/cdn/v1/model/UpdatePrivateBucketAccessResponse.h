
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdatePrivateBucketAccessResponse_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdatePrivateBucketAccessResponse_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  UpdatePrivateBucketAccessResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdatePrivateBucketAccessResponse();
    virtual ~UpdatePrivateBucketAccessResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePrivateBucketAccessResponse members

    /// <summary>
    /// 桶开启关闭状态（true：开启；false：关闭）
    /// </summary>

    bool isStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(bool value);


protected:
    bool status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdatePrivateBucketAccessResponse_H_
