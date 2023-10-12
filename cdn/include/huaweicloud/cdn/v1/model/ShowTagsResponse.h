
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowTagsResponse_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowTagsResponse_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/Map.h>
#include <vector>

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
class HUAWEICLOUD_CDN_V1_EXPORT  ShowTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTagsResponse();
    virtual ~ShowTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTagsResponse members

    /// <summary>
    /// 标签列表。
    /// </summary>

    std::vector<Map>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Map>& value);


protected:
    std::vector<Map> tags_;
    bool tagsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowTagsResponse_H_
