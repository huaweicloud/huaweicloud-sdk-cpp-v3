
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_LatestVersionFilesCount_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_LatestVersionFilesCount_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  LatestVersionFilesCount
    : public ModelBase
{
public:
    LatestVersionFilesCount();
    virtual ~LatestVersionFilesCount();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LatestVersionFilesCount members

    /// <summary>
    /// **参数解释**: 数目。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);


protected:
    int64_t count_;
    bool countIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_LatestVersionFilesCount_H_
