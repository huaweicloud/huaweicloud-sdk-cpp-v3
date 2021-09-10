
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ListAssetCategoryResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ListAssetCategoryResponse_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/QueryCategoryRsp.h>
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
class HUAWEICLOUD_VOD_V1_EXPORT  ListAssetCategoryResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAssetCategoryResponse();
    virtual ~ListAssetCategoryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListAssetCategoryResponse members

    /// <summary>
    /// 分类返回值
    /// </summary>

    std::vector<QueryCategoryRsp>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<QueryCategoryRsp>& value);


protected:
    std::vector<QueryCategoryRsp> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ListAssetCategoryResponse_H_
