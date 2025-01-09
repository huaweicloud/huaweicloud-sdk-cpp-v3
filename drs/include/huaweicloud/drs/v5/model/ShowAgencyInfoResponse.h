
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowAgencyInfoResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowAgencyInfoResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/AgencyRole.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowAgencyInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAgencyInfoResponse();
    virtual ~ShowAgencyInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAgencyInfoResponse members

    /// <summary>
    /// 委托是否存在。
    /// </summary>

    bool isIsExisted() const;
    bool isExistedIsSet() const;
    void unsetisExisted();
    void setIsExisted(bool value);

    /// <summary>
    /// 委托名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 委托绑定的权限策略信息。
    /// </summary>

    std::vector<AgencyRole>& getRoles();
    bool rolesIsSet() const;
    void unsetroles();
    void setRoles(const std::vector<AgencyRole>& value);


protected:
    bool isExisted_;
    bool isExistedIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<AgencyRole> roles_;
    bool rolesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowAgencyInfoResponse_H_
