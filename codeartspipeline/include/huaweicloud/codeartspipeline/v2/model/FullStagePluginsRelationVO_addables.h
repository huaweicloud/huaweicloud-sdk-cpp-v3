
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_FullStagePluginsRelationVO_addables_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_FullStagePluginsRelationVO_addables_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  FullStagePluginsRelationVO_addables
    : public ModelBase
{
public:
    FullStagePluginsRelationVO_addables();
    virtual ~FullStagePluginsRelationVO_addables();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FullStagePluginsRelationVO_addables members

    /// <summary>
    /// **参数解释**： 额外属性1。 **取值范围**： 不涉及。 
    /// </summary>

    bool isAdditionalProp1() const;
    bool additionalProp1IsSet() const;
    void unsetadditionalProp1();
    void setAdditionalProp1(bool value);

    /// <summary>
    /// **参数解释**： 额外属性2。 **取值范围**： 不涉及。 
    /// </summary>

    bool isAdditionalProp2() const;
    bool additionalProp2IsSet() const;
    void unsetadditionalProp2();
    void setAdditionalProp2(bool value);

    /// <summary>
    /// **参数解释**： 额外属性3。 **取值范围**： 不涉及。 
    /// </summary>

    bool isAdditionalProp3() const;
    bool additionalProp3IsSet() const;
    void unsetadditionalProp3();
    void setAdditionalProp3(bool value);


protected:
    bool additionalProp1_;
    bool additionalProp1IsSet_;
    bool additionalProp2_;
    bool additionalProp2IsSet_;
    bool additionalProp3_;
    bool additionalProp3IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_FullStagePluginsRelationVO_addables_H_
