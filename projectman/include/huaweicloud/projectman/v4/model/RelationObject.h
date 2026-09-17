
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_RelationObject_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_RelationObject_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 关系对应的实体，比如工作项
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  RelationObject
    : public ModelBase
{
public:
    RelationObject();
    virtual ~RelationObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RelationObject members

    /// <summary>
    /// **参数解释**： 实体的种类。 **取值范围**： 不涉及。
    /// </summary>

    std::string getObjectType() const;
    bool objectTypeIsSet() const;
    void unsetobjectType();
    void setObjectType(const std::string& value);

    /// <summary>
    /// **参数解释**： 类型列表。 **取值范围**： 不涉及。
    /// </summary>

    std::vector<std::string>& getCategories();
    bool categoriesIsSet() const;
    void unsetcategories();
    void setCategories(const std::vector<std::string>& value);


protected:
    std::string objectType_;
    bool objectTypeIsSet_;
    std::vector<std::string> categories_;
    bool categoriesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_RelationObject_H_
