
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListPipelinesPage_highest_confidentiality_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListPipelinesPage_highest_confidentiality_H_


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
/// **参数解释**： 最高密级。 **约束限制**： 非涉密场景无该字段。 **取值范围**： 不涉及。 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ListPipelinesPage_highest_confidentiality
    : public ModelBase
{
public:
    ListPipelinesPage_highest_confidentiality();
    virtual ~ListPipelinesPage_highest_confidentiality();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPipelinesPage_highest_confidentiality members

    /// <summary>
    /// **参数解释**： 密级ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 密级等级逻辑ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// **参数解释**： 预留字段。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getReserve1() const;
    bool reserve1IsSet() const;
    void unsetreserve1();
    void setReserve1(const std::string& value);

    /// <summary>
    /// **参数解释**： 密级等级中文名。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// **参数解释**： 密级等级英文名。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getValueEn() const;
    bool valueEnIsSet() const;
    void unsetvalueEn();
    void setValueEn(const std::string& value);

    /// <summary>
    /// **参数解释**： 密级等级序号，密级越高数字越大。 **取值范围**： 正整数。 
    /// </summary>

    int32_t getSequence() const;
    bool sequenceIsSet() const;
    void unsetsequence();
    void setSequence(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string code_;
    bool codeIsSet_;
    std::string reserve1_;
    bool reserve1IsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string valueEn_;
    bool valueEnIsSet_;
    int32_t sequence_;
    bool sequenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListPipelinesPage_highest_confidentiality_H_
