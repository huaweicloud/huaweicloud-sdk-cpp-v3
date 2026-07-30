
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowGallerySubscription_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowGallerySubscription_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Gallery 订阅信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkflowGallerySubscription
    : public ModelBase
{
public:
    WorkflowGallerySubscription();
    virtual ~WorkflowGallerySubscription();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowGallerySubscription members

    /// <summary>
    /// 资产ID。
    /// </summary>

    std::string getContentId() const;
    bool contentIdIsSet() const;
    void unsetcontentId();
    void setContentId(const std::string& value);

    /// <summary>
    /// 版本ID。
    /// </summary>

    std::string getVersionId() const;
    bool versionIdIsSet() const;
    void unsetversionId();
    void setVersionId(const std::string& value);

    /// <summary>
    /// 超期时间。
    /// </summary>

    std::string getExpiredAt() const;
    bool expiredAtIsSet() const;
    void unsetexpiredAt();
    void setExpiredAt(const std::string& value);


protected:
    std::string contentId_;
    bool contentIdIsSet_;
    std::string versionId_;
    bool versionIdIsSet_;
    std::string expiredAt_;
    bool expiredAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowGallerySubscription_H_
