
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_Principal_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_Principal_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  Principal
    : public ModelBase
{
public:
    Principal();
    virtual ~Principal();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Principal members

    /// <summary>
    /// **参数解释：** 授权对象的类型。 **约束限制：** 不涉及 **取值范围：** - user：用户 - group：用户组 - agency：委托账号  **默认取值：** 不涉及
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 授权对象ID列表，根据授权对象的类型，用户、用户组和委托账号，填入对应的ID。 **约束限制：** 当前最多支持同时授权500个用户/用户组。 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::vector<std::string>& getIds();
    bool idsIsSet() const;
    void unsetids();
    void setIds(const std::vector<std::string>& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::vector<std::string> ids_;
    bool idsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_Principal_H_
