
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CategoryLayerDTO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CategoryLayerDTO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/CategoryLayerDTO.h>
#include <string>
#include <huaweicloud/projectman/v4/model/BaseCategory.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Category层级数据类型
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CategoryLayerDTO
    : public ModelBase
{
public:
    CategoryLayerDTO();
    virtual ~CategoryLayerDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CategoryLayerDTO members

    /// <summary>
    /// 
    /// </summary>

    BaseCategory getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const BaseCategory& value);

    /// <summary>
    /// **参数解释**： 父类字段。 **取值范围**： 不涉及。
    /// </summary>

    std::string getLinkParentField() const;
    bool linkParentFieldIsSet() const;
    void unsetlinkParentField();
    void setLinkParentField(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项层级ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 子工作项层级数据类型。 **取值范围**： 不涉及。
    /// </summary>

    std::vector<CategoryLayerDTO>& getChildren();
    bool childrenIsSet() const;
    void unsetchildren();
    void setChildren(const std::vector<CategoryLayerDTO>& value);

    /// <summary>
    /// **参数解释**： 层级对象类型编码。 **取值范围**： 不涉及。
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// **参数解释**： 对象类型编码。 **取值范围**： 不涉及。
    /// </summary>

    std::string getCategoryCode() const;
    bool categoryCodeIsSet() const;
    void unsetcategoryCode();
    void setCategoryCode(const std::string& value);

    /// <summary>
    /// **参数解释**： 对象类型ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getCategoryId() const;
    bool categoryIdIsSet() const;
    void unsetcategoryId();
    void setCategoryId(const std::string& value);

    /// <summary>
    /// **参数解释**： 层级类型。 **取值范围**： 不涉及。
    /// </summary>

    std::string getLayerType() const;
    bool layerTypeIsSet() const;
    void unsetlayerType();
    void setLayerType(const std::string& value);

    /// <summary>
    /// **参数解释**： 父ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// **参数解释**： 根工作项ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getRootId() const;
    bool rootIdIsSet() const;
    void unsetrootId();
    void setRootId(const std::string& value);

    /// <summary>
    /// **参数解释**： 画布X轴坐标。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getPositionX() const;
    bool positionXIsSet() const;
    void unsetpositionX();
    void setPositionX(int32_t value);

    /// <summary>
    /// **参数解释**： 画布Y轴坐标。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getPositionY() const;
    bool positionYIsSet() const;
    void unsetpositionY();
    void setPositionY(int32_t value);


protected:
    BaseCategory category_;
    bool categoryIsSet_;
    std::string linkParentField_;
    bool linkParentFieldIsSet_;
    std::string id_;
    bool idIsSet_;
    std::vector<CategoryLayerDTO>* children_;
    bool childrenIsSet_;
    std::string code_;
    bool codeIsSet_;
    std::string categoryCode_;
    bool categoryCodeIsSet_;
    std::string categoryId_;
    bool categoryIdIsSet_;
    std::string layerType_;
    bool layerTypeIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::string rootId_;
    bool rootIdIsSet_;
    int32_t positionX_;
    bool positionXIsSet_;
    int32_t positionY_;
    bool positionYIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CategoryLayerDTO_H_
