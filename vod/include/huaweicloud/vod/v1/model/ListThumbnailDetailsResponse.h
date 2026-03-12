
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ListThumbnailDetailsResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ListThumbnailDetailsResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/ThumbnailRsp.h>
#include <vector>

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
class HUAWEICLOUD_VOD_V1_EXPORT  ListThumbnailDetailsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListThumbnailDetailsResponse();
    virtual ~ListThumbnailDetailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListThumbnailDetailsResponse members

    /// <summary>
    /// 截图图片总数 
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 截图结果列表 
    /// </summary>

    std::vector<ThumbnailRsp>& getThumbnailResult();
    bool thumbnailResultIsSet() const;
    void unsetthumbnailResult();
    void setThumbnailResult(const std::vector<ThumbnailRsp>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<ThumbnailRsp> thumbnailResult_;
    bool thumbnailResultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ListThumbnailDetailsResponse_H_
