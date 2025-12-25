
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_OpensourceCount_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_OpensourceCount_H_


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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  OpensourceCount
    : public ModelBase
{
public:
    OpensourceCount();
    virtual ~OpensourceCount();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OpensourceCount members

    /// <summary>
    /// **参数解释**: 危急漏洞数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getCritical() const;
    bool criticalIsSet() const;
    void unsetcritical();
    void setCritical(int32_t value);

    /// <summary>
    /// **参数解释**: 高危漏洞数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getHigh() const;
    bool highIsSet() const;
    void unsethigh();
    void setHigh(int32_t value);

    /// <summary>
    /// **参数解释**: 中危漏洞数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getMedium() const;
    bool mediumIsSet() const;
    void unsetmedium();
    void setMedium(int32_t value);

    /// <summary>
    /// **参数解释**: 低危漏洞数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getLow() const;
    bool lowIsSet() const;
    void unsetlow();
    void setLow(int32_t value);


protected:
    int32_t critical_;
    bool criticalIsSet_;
    int32_t high_;
    bool highIsSet_;
    int32_t medium_;
    bool mediumIsSet_;
    int32_t low_;
    bool lowIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_OpensourceCount_H_
