
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_StorageMap_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_StorageMap_H_


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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  StorageMap
    : public ModelBase
{
public:
    StorageMap();
    virtual ~StorageMap();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StorageMap members

    /// <summary>
    /// **参数解释**： 存储大小。  **取值范围**： 不涉及。
    /// </summary>

    std::string getTotalStorage() const;
    bool totalStorageIsSet() const;
    void unsettotalStorage();
    void setTotalStorage(const std::string& value);

    /// <summary>
    /// **参数解释**： 文件数量。  **取值范围**： 不涉及。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::string totalStorage_;
    bool totalStorageIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_StorageMap_H_
