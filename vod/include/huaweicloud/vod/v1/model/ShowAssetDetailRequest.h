
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowAssetDetailRequest_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowAssetDetailRequest_H_

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
class HUAWEICLOUD_VOD_V1_EXPORT  ShowAssetDetailRequest
    : public ModelBase
{
public:
    ShowAssetDetailRequest();
    virtual ~ShowAssetDetailRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowAssetDetailRequest members

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

    /// <summary>
    /// 查询的信息类型。 - 为空时表示查询所有信息。 - 不为空时支持同时查询一个或者多个类型的信息，取值如下： - - base_info：媒资基本信息。 - - transcode_info：转码结果信息。 - - thumbnail_info：截图结果信息。 - - review_info：审核结果信息。
    /// </summary>

    std::vector<std::string>& getCategories();
    bool categoriesIsSet() const;
    void unsetcategories();
    void setCategories(const std::vector<std::string>& value);


protected:
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::string assetId_;
    bool assetIdIsSet_;
    std::vector<std::string> categories_;
    bool categoriesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAssetDetailRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAssetDetailRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowAssetDetailRequest_H_
