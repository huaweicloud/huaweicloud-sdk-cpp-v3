
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateAlgorithmVersionToGalleryBody_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateAlgorithmVersionToGalleryBody_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/ContentInfo.h>
#include <huaweicloud/modelarts/v1/model/AlgorithmInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建发布算法资产请求
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateAlgorithmVersionToGalleryBody
    : public ModelBase
{
public:
    CreateAlgorithmVersionToGalleryBody();
    virtual ~CreateAlgorithmVersionToGalleryBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAlgorithmVersionToGalleryBody members

    /// <summary>
    /// **参数解释**：资产id。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getContentId() const;
    bool contentIdIsSet() const;
    void unsetcontentId();
    void setContentId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ContentInfo getContentInfo() const;
    bool contentInfoIsSet() const;
    void unsetcontentInfo();
    void setContentInfo(const ContentInfo& value);

    /// <summary>
    /// 
    /// </summary>

    AlgorithmInfo getAlgorithm() const;
    bool algorithmIsSet() const;
    void unsetalgorithm();
    void setAlgorithm(const AlgorithmInfo& value);


protected:
    std::string contentId_;
    bool contentIdIsSet_;
    ContentInfo contentInfo_;
    bool contentInfoIsSet_;
    AlgorithmInfo algorithm_;
    bool algorithmIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateAlgorithmVersionToGalleryBody_H_
