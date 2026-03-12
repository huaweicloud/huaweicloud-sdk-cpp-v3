
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ListThumbnailInfoResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ListThumbnailInfoResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/QueryThumbnailInfo.h>
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
class HUAWEICLOUD_VOD_V1_EXPORT  ListThumbnailInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ListThumbnailInfoResponse();
    virtual ~ListThumbnailInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListThumbnailInfoResponse members

    /// <summary>
    /// 截图结果总数 
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 截图结果列表 
    /// </summary>

    std::vector<QueryThumbnailInfo>& getThumbnails();
    bool thumbnailsIsSet() const;
    void unsetthumbnails();
    void setThumbnails(const std::vector<QueryThumbnailInfo>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<QueryThumbnailInfo> thumbnails_;
    bool thumbnailsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ListThumbnailInfoResponse_H_
