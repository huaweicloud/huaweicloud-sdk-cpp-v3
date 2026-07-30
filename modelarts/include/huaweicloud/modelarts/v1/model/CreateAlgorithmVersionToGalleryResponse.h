
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateAlgorithmVersionToGalleryResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateAlgorithmVersionToGalleryResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateAlgorithmVersionToGalleryResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateAlgorithmVersionToGalleryResponse();
    virtual ~CreateAlgorithmVersionToGalleryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAlgorithmVersionToGalleryResponse members

    /// <summary>
    /// **参数解释**：资产id。 **取值范围**：不涉及。
    /// </summary>

    std::string getContentId() const;
    bool contentIdIsSet() const;
    void unsetcontentId();
    void setContentId(const std::string& value);

    /// <summary>
    /// **参数解释**：版本号id。 **取值范围**：不涉及。
    /// </summary>

    std::string getVersionId() const;
    bool versionIdIsSet() const;
    void unsetversionId();
    void setVersionId(const std::string& value);

    /// <summary>
    /// **参数解释**：版本数量。 **取值范围**：不涉及。
    /// </summary>

    std::string getVersionNum() const;
    bool versionNumIsSet() const;
    void unsetversionNum();
    void setVersionNum(const std::string& value);

    /// <summary>
    /// **参数解释**：资产uri地址。 **取值范围**：不涉及。
    /// </summary>

    std::string getContentUri() const;
    bool contentUriIsSet() const;
    void unsetcontentUri();
    void setContentUri(const std::string& value);


protected:
    std::string contentId_;
    bool contentIdIsSet_;
    std::string versionId_;
    bool versionIdIsSet_;
    std::string versionNum_;
    bool versionNumIsSet_;
    std::string contentUri_;
    bool contentUriIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateAlgorithmVersionToGalleryResponse_H_
