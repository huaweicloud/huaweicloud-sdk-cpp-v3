
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_DeleteDyAssetRequest_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_DeleteDyAssetRequest_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_VOD_V1_EXPORT  DeleteDyAssetRequest
    : public ModelBase
{
public:
    DeleteDyAssetRequest();
    virtual ~DeleteDyAssetRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteDyAssetRequest members

    /// <summary>
    /// 使用AK/SK方式认证时必选，请求的发生时间。 
    /// </summary>

    std::string getXSdkDate() const;
    bool xSdkDateIsSet() const;
    void unsetxSdkDate();
    void setXSdkDate(const std::string& value);

    /// <summary>
    /// obs桶名称
    /// </summary>

    std::string getBucket() const;
    bool bucketIsSet() const;
    void unsetbucket();
    void setBucket(const std::string& value);

    /// <summary>
    /// obs文件路径，不包含桶名
    /// </summary>

    std::vector<std::string>& getObject();
    bool objectIsSet() const;
    void unsetobject();
    void setObject(const std::vector<std::string>& value);

    /// <summary>
    /// 回调地址
    /// </summary>

    std::string getCallbackUrl() const;
    bool callbackUrlIsSet() const;
    void unsetcallbackUrl();
    void setCallbackUrl(const std::string& value);

    /// <summary>
    /// 用户透传信息
    /// </summary>

    std::string getSessionContext() const;
    bool sessionContextIsSet() const;
    void unsetsessionContext();
    void setSessionContext(const std::string& value);


protected:
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::string bucket_;
    bool bucketIsSet_;
    std::vector<std::string> object_;
    bool objectIsSet_;
    std::string callbackUrl_;
    bool callbackUrlIsSet_;
    std::string sessionContext_;
    bool sessionContextIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteDyAssetRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteDyAssetRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_DeleteDyAssetRequest_H_
