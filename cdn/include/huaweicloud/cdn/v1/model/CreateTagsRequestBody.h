
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_CreateTagsRequestBody_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_CreateTagsRequestBody_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
/// CreateTagsRequestBody
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  CreateTagsRequestBody
    : public ModelBase
{
public:
    CreateTagsRequestBody();
    virtual ~CreateTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTagsRequestBody members

    /// <summary>
    /// 资源id。  &gt; 域名ID
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 标签列表。
    /// </summary>

    std::vector<Map>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Map>& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::vector<Map> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_CreateTagsRequestBody_H_
