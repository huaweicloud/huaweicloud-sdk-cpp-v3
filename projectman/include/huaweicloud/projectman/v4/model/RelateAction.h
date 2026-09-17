
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_RelateAction_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_RelateAction_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/RelationObject.h>
#include <vector>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  RelateAction
    : public ModelBase
{
public:
    RelateAction();
    virtual ~RelateAction();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RelateAction members

    /// <summary>
    /// **参数解释**： 关联行为code。 **取值范围**： 不涉及。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释**： 关联行为名称。 **取值范围**： 不涉及。
    /// </summary>

    std::string getActionDisplayName() const;
    bool actionDisplayNameIsSet() const;
    void unsetactionDisplayName();
    void setActionDisplayName(const std::string& value);

    /// <summary>
    /// **参数解释**： 关联的对象列表。 **取值范围**： 不涉及。
    /// </summary>

    std::vector<RelationObject>& getRelateObjectList();
    bool relateObjectListIsSet() const;
    void unsetrelateObjectList();
    void setRelateObjectList(const std::vector<RelationObject>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::string actionDisplayName_;
    bool actionDisplayNameIsSet_;
    std::vector<RelationObject> relateObjectList_;
    bool relateObjectListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_RelateAction_H_
