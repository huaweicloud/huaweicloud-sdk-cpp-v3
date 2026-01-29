
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemLabelVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemLabelVO_H_


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
/// 标签对象
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  WorkItemLabelVO
    : public ModelBase
{
public:
    WorkItemLabelVO();
    virtual ~WorkItemLabelVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkItemLabelVO members

    /// <summary>
    /// **参数解释：**  标签Id。 **约束限制：**  最小长度：18，最大长度：19。 **取值范围：**  不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：**  对象类型。 **约束限制：**  固定为Label，表示当前对象类型为标签。 **取值范围：**  不涉及。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释：**  标签所属的工作项的类别。 **取值范围：**  - requirement - raw requirement - bug - task - feature
    /// </summary>

    std::string getLabelType() const;
    bool labelTypeIsSet() const;
    void unsetlabelType();
    void setLabelType(const std::string& value);

    /// <summary>
    /// **参数解释：**  标签颜色的RGB值。 **取值范围：**  - #86CAFF - #6DDEBB - #A6DD82 - #FAC20A  - #FA9841 - #F66F6A - #F3689A - #A97AF8 - #71757F - #5E7CE0 - #207AB3 - #169E6C - #6CA83B - #B58200 - #B54E04 - #B02121 - #AD215B - #572DB3 - #4F4F4F - #3C51A6
    /// </summary>

    std::string getColor() const;
    bool colorIsSet() const;
    void unsetcolor();
    void setColor(const std::string& value);

    /// <summary>
    /// **参数解释：**  标签标题。 **约束限制：**  最小长度：1，最大长度：30。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// **参数解释：**  表示当前对象数据类型为标签。 **约束限制：**  固定为label。 **取值范围：**  label。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：**  标签的生命周期。 **取值范围：**  - 正在工作 - 作废 - 删除
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// **参数解释：**  最近修改人。 **约束限制：**  不涉及。
    /// </summary>

    std::string getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetmodifiedBy();
    void setModifiedBy(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string labelType_;
    bool labelTypeIsSet_;
    std::string color_;
    bool colorIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string modifiedBy_;
    bool modifiedByIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemLabelVO_H_
