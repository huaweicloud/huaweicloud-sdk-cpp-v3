
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_Artifact_hash_code_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_Artifact_hash_code_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  Artifact_hash_code
    : public ModelBase
{
public:
    Artifact_hash_code();
    virtual ~Artifact_hash_code();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Artifact_hash_code members

    /// <summary>
    /// **参数解释**： 哈希算法。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getHashType() const;
    bool hashTypeIsSet() const;
    void unsethashType();
    void setHashType(const std::string& value);

    /// <summary>
    /// **参数解释**： 哈希值。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getHashValue() const;
    bool hashValueIsSet() const;
    void unsethashValue();
    void setHashValue(const std::string& value);


protected:
    std::string hashType_;
    bool hashTypeIsSet_;
    std::string hashValue_;
    bool hashValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_Artifact_hash_code_H_
