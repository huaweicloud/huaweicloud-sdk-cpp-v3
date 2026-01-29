
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_OptionVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_OptionVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  OptionVO
    : public ModelBase
{
public:
    OptionVO();
    virtual ~OptionVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OptionVO members

    /// <summary>
    /// **参数解释：**  选项Id。 **取值范围：**  不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：**  选项名称。 **取值范围：**  不涉及。
    /// </summary>

    std::string getDisplayValue() const;
    bool displayValueIsSet() const;
    void unsetdisplayValue();
    void setDisplayValue(const std::string& value);

    /// <summary>
    /// **参数解释：**  选项的唯一标识，自定义的选项id和value相同。 **取值范围：**  不涉及。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// **参数解释：**  选项code。 **取值范围：**  不涉及。
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// **参数解释：**  选项名称的中文拼音首字母。 **取值范围：**  不涉及。
    /// </summary>

    std::string getValuePy() const;
    bool valuePyIsSet() const;
    void unsetvaluePy();
    void setValuePy(const std::string& value);

    /// <summary>
    /// **参数解释：**  选项在选项列表中的排序。 **取值范围：**  不涉及。
    /// </summary>

    int32_t getSequence() const;
    bool sequenceIsSet() const;
    void unsetsequence();
    void setSequence(int32_t value);

    /// <summary>
    /// **参数解释：**  层级选项的分层标识，单选列表和多选列表值都为1，层级字段按照层级依次为1,2,3,4。 **取值范围：**  不涉及。
    /// </summary>

    int32_t getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(int32_t value);

    /// <summary>
    /// **参数解释：**  选项所在的项目空间Id。 **取值范围：**  不涉及。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释：**  选项归属的定义级别。1,2,3为系统级，4为租户自定义，5为项目自定义。 **取值范围：**  不涉及。
    /// </summary>

    std::string getBelongDefinitionType() const;
    bool belongDefinitionTypeIsSet() const;
    void unsetbelongDefinitionType();
    void setBelongDefinitionType(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string displayValue_;
    bool displayValueIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string code_;
    bool codeIsSet_;
    std::string valuePy_;
    bool valuePyIsSet_;
    int32_t sequence_;
    bool sequenceIsSet_;
    int32_t level_;
    bool levelIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string belongDefinitionType_;
    bool belongDefinitionTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_OptionVO_H_
