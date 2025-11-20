
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_Users_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_Users_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cce/v3/model/User.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  Users
    : public ModelBase
{
public:
    Users();
    virtual ~Users();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Users members

    /// <summary>
    /// **参数解释**： 名称 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： user 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    User getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const User& value);


protected:
    std::string name_;
    bool nameIsSet_;
    User user_;
    bool userIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_Users_H_
