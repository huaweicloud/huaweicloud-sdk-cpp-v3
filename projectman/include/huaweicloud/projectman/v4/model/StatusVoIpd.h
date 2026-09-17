
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_StatusVoIpd_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_StatusVoIpd_H_


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
/// 工作项状态查询接口返回状态数据
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  StatusVoIpd
    : public ModelBase
{
public:
    StatusVoIpd();
    virtual ~StatusVoIpd();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StatusVoIpd members

    /// <summary>
    /// **参数解释**： 状态名称。 **取值范围**： 不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项的状态属性。 **取值范围**： START、IN_PROGRESS、END。
    /// </summary>

    std::string getBelonging() const;
    bool belongingIsSet() const;
    void unsetbelonging();
    void setBelonging(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string belonging_;
    bool belongingIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_StatusVoIpd_H_
