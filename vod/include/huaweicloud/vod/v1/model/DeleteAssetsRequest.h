
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_DeleteAssetsRequest_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_DeleteAssetsRequest_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_VOD_V1_EXPORT  DeleteAssetsRequest
    : public ModelBase
{
public:
    DeleteAssetsRequest();
    virtual ~DeleteAssetsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteAssetsRequest members

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
    /// 媒资ID，支持一次删除多个媒资，批量删除时以逗号分隔。
    /// </summary>

    std::vector<std::string>& getAssetId();
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::vector<std::string>& value);

    /// <summary>
    /// 删除类型，当值为origin时只删除源文件，保留转码后文件。
    /// </summary>

    std::string getDeleteType() const;
    bool deleteTypeIsSet() const;
    void unsetdeleteType();
    void setDeleteType(const std::string& value);


protected:
    std::string authorization_;
    bool authorizationIsSet_;
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::vector<std::string> assetId_;
    bool assetIdIsSet_;
    std::string deleteType_;
    bool deleteTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteAssetsRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteAssetsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_DeleteAssetsRequest_H_
