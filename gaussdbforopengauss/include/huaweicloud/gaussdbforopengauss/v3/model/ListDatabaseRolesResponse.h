
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListDatabaseRolesResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListDatabaseRolesResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/GaussDBListDatabaseRoles.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListDatabaseRolesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDatabaseRolesResponse();
    virtual ~ListDatabaseRolesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDatabaseRolesResponse members

    /// <summary>
    /// 列表中每个元素表示一个用户/角色。
    /// </summary>

    std::vector<GaussDBListDatabaseRoles>& getRoles();
    bool rolesIsSet() const;
    void unsetroles();
    void setRoles(const std::vector<GaussDBListDatabaseRoles>& value);

    /// <summary>
    /// 数据库用户/角色总数。
    /// </summary>

    int64_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int64_t value);


protected:
    std::vector<GaussDBListDatabaseRoles> roles_;
    bool rolesIsSet_;
    int64_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListDatabaseRolesResponse_H_
