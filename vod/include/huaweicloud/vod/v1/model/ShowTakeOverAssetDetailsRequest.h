
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowTakeOverAssetDetailsRequest_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowTakeOverAssetDetailsRequest_H_

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
/// Request Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ShowTakeOverAssetDetailsRequest
    : public ModelBase
{
public:
    ShowTakeOverAssetDetailsRequest();
    virtual ~ShowTakeOverAssetDetailsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowTakeOverAssetDetailsRequest members

    /// <summary>
    /// 使用AK/SK方式认证时必选，携带的鉴权信息。 
    /// </summary>

    std::string getAuthorization() const;
    bool authorizationIsSet() const;
    void unsetauthorization();
    void setAuthorization(const std::string& value);

    /// <summary>
    /// 使用AK/SK方式认证时必选，请求的发生时间。 
    /// </summary>

    std::string getXSdkDate() const;
    bool xSdkDateIsSet() const;
    void unsetxSdkDate();
    void setXSdkDate(const std::string& value);

    /// <summary>
    /// 媒资原始输入存放的桶。
    /// </summary>

    std::string getSourceBucket() const;
    bool sourceBucketIsSet() const;
    void unsetsourceBucket();
    void setSourceBucket(const std::string& value);

    /// <summary>
    /// 媒资原始输入的objectKey。
    /// </summary>

    std::string getSourceObject() const;
    bool sourceObjectIsSet() const;
    void unsetsourceObject();
    void setSourceObject(const std::string& value);


protected:
    std::string authorization_;
    bool authorizationIsSet_;
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::string sourceBucket_;
    bool sourceBucketIsSet_;
    std::string sourceObject_;
    bool sourceObjectIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowTakeOverAssetDetailsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowTakeOverAssetDetailsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowTakeOverAssetDetailsRequest_H_
