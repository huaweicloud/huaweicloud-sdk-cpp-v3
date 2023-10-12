
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_DeleteTagsRequestBody_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_DeleteTagsRequestBody_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// DeleteTagsRequestBody
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  DeleteTagsRequestBody
    : public ModelBase
{
public:
    DeleteTagsRequestBody();
    virtual ~DeleteTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTagsRequestBody members

    /// <summary>
    /// 资源id。  &gt; 域名ID
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 键列表
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_DeleteTagsRequestBody_H_
