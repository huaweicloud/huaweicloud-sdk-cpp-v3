
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_Severity_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_Severity_H_


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
/// 工作项重要程度
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  Severity
    : public ModelBase
{
public:
    Severity();
    virtual ~Severity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Severity members

    /// <summary>
    /// **参数解释：** 工作项的重要程度。 **取值范围：** - 关键 - 重要 - 一般 - 提示
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 重要程度id。 **取值范围：** 10 （关键） 11 （重要） 12 （一般） 13 （提示）
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_Severity_H_
