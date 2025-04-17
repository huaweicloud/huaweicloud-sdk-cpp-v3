
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_RefreshTaskReq_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_RefreshTaskReq_H_


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
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  RefreshTaskReq
    : public ModelBase
{
public:
    RefreshTaskReq();
    virtual ~RefreshTaskReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RefreshTaskReq members

    /// <summary>
    /// 完成态、删除态、发布态的媒资ID列表，一次性最多刷新10个媒资ID。
    /// </summary>

    std::vector<std::string>& getAssetIdList();
    bool assetIdListIsSet() const;
    void unsetassetIdList();
    void setAssetIdList(const std::vector<std::string>& value);

    /// <summary>
    /// 完成态、删除态、发布态的播放URL列表，一次性最多刷新10个URL。 单个URL的长度不能超过10240。 
    /// </summary>

    std::vector<std::string>& getUrls();
    bool urlsIsSet() const;
    void unseturls();
    void setUrls(const std::vector<std::string>& value);


protected:
    std::vector<std::string> assetIdList_;
    bool assetIdListIsSet_;
    std::vector<std::string> urls_;
    bool urlsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_RefreshTaskReq_H_
