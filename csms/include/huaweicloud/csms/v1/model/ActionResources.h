
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_ActionResources_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_ActionResources_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/TagItem.h>
#include <string>
#include <huaweicloud/csms/v1/model/Secret.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  ActionResources
    : public ModelBase
{
public:
    ActionResources();
    virtual ~ActionResources();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ActionResources members

    /// <summary>
    /// 资源ID。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Secret getResourceDetail() const;
    bool resourceDetailIsSet() const;
    void unsetresourceDetail();
    void setResourceDetail(const Secret& value);

    /// <summary>
    /// 资源名称，默认为空字符串。
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);

    /// <summary>
    /// 标签列表，没有标签，数组默认为空。
    /// </summary>

    std::vector<TagItem>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagItem>& value);

    /// <summary>
    /// 标签列表，key和value键值对的集合。  - key：表示标签键，一个凭据下最多包含10个key，key不能为空，不能重复，同一个key中value不能重复。key最大长度为36个字符。  - value：表示标签值。每个值最大长度43个字符，value之间为“与”的关系。
    /// </summary>

    std::vector<TagItem>& getSysTags();
    bool sysTagsIsSet() const;
    void unsetsysTags();
    void setSysTags(const std::vector<TagItem>& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    Secret resourceDetail_;
    bool resourceDetailIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    std::vector<TagItem> tags_;
    bool tagsIsSet_;
    std::vector<TagItem> sysTags_;
    bool sysTagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_ActionResources_H_
