
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_SwitchTokenResponse_user_domain_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_SwitchTokenResponse_user_domain_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 主账号信息
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  SwitchTokenResponse_user_domain
    : public ModelBase
{
public:
    SwitchTokenResponse_user_domain();
    virtual ~SwitchTokenResponse_user_domain();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchTokenResponse_user_domain members

    /// <summary>
    /// 主账号名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 主账号id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_SwitchTokenResponse_user_domain_H_
