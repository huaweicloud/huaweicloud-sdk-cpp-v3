
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ActionResources_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ActionResources_H_

#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/TagItem.h>
#include <huaweicloud/kms/v2/model/KeyDetails.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ActionResources
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

    KeyDetails getResourceDetail() const;
    bool resourceDetailIsSet() const;
    void unsetresourceDetail();
    void setResourceDetail(const KeyDetails& value);

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


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    KeyDetails resourceDetail_;
    bool resourceDetailIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    std::vector<TagItem> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ActionResources_H_
