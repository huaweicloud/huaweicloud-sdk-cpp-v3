
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_SearchArtifactsResult_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_SearchArtifactsResult_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsartifact/v2/model/ArtifactSearchResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  SearchArtifactsResult
    : public ModelBase
{
public:
    SearchArtifactsResult();
    virtual ~SearchArtifactsResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchArtifactsResult members

    /// <summary>
    /// **参数解释**： 文件列表。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<ArtifactSearchResult>& getArtifacts();
    bool artifactsIsSet() const;
    void unsetartifacts();
    void setArtifacts(const std::vector<ArtifactSearchResult>& value);


protected:
    std::vector<ArtifactSearchResult> artifacts_;
    bool artifactsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_SearchArtifactsResult_H_
