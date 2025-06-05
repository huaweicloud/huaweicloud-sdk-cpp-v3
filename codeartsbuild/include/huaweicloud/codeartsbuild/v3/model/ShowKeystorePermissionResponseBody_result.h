
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowKeystorePermissionResponseBody_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowKeystorePermissionResponseBody_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/codeartsbuild/v3/model/AddKeystorePermissionResponseBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 结果
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowKeystorePermissionResponseBody_result
    : public ModelBase
{
public:
    ShowKeystorePermissionResponseBody_result();
    virtual ~ShowKeystorePermissionResponseBody_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowKeystorePermissionResponseBody_result members

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 权限结集合
    /// </summary>

    std::vector<AddKeystorePermissionResponseBody>& getPermissionList();
    bool permissionListIsSet() const;
    void unsetpermissionList();
    void setPermissionList(const std::vector<AddKeystorePermissionResponseBody>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<AddKeystorePermissionResponseBody> permissionList_;
    bool permissionListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowKeystorePermissionResponseBody_result_H_
