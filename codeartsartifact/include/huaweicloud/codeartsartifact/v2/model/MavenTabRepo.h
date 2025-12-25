
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_MavenTabRepo_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_MavenTabRepo_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  MavenTabRepo
    : public ModelBase
{
public:
    MavenTabRepo();
    virtual ~MavenTabRepo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MavenTabRepo members

    /// <summary>
    /// **参数解释**： release仓库名称。  **取值范围**： 不涉及。
    /// </summary>

    std::string getRelease() const;
    bool releaseIsSet() const;
    void unsetrelease();
    void setRelease(const std::string& value);

    /// <summary>
    /// **参数解释**： snapshot仓库名称。  **取值范围**： 不涉及。
    /// </summary>

    std::string getSnapshot() const;
    bool snapshotIsSet() const;
    void unsetsnapshot();
    void setSnapshot(const std::string& value);


protected:
    std::string release_;
    bool releaseIsSet_;
    std::string snapshot_;
    bool snapshotIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_MavenTabRepo_H_
