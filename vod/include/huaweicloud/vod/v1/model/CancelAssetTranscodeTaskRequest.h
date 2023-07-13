
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_CancelAssetTranscodeTaskRequest_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_CancelAssetTranscodeTaskRequest_H_

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
class HUAWEICLOUD_VOD_V1_EXPORT  CancelAssetTranscodeTaskRequest
    : public ModelBase
{
public:
    CancelAssetTranscodeTaskRequest();
    virtual ~CancelAssetTranscodeTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CancelAssetTranscodeTaskRequest members

    /// <summary>
    /// 使用AK/SK方式认证时必选，请求的发生时间。 
    /// </summary>

    std::string getXSdkDate() const;
    bool xSdkDateIsSet() const;
    void unsetxSdkDate();
    void setXSdkDate(const std::string& value);

    /// <summary>
    /// 媒资ID。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);


protected:
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::string assetId_;
    bool assetIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CancelAssetTranscodeTaskRequest& dereference_from_shared_ptr(std::shared_ptr<CancelAssetTranscodeTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_CancelAssetTranscodeTaskRequest_H_
