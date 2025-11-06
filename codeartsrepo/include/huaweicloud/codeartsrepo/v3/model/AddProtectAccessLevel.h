
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_AddProtectAccessLevel_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_AddProtectAccessLevel_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  AddProtectAccessLevel
    : public ModelBase
{
public:
    AddProtectAccessLevel();
    virtual ~AddProtectAccessLevel();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddProtectAccessLevel members

    /// <summary>
    /// 提交权限 0:任何人不允许提交，30:开发者及管理员可提交，40:管理员可提交
    /// </summary>

    int32_t getPushAccessLevel() const;
    bool pushAccessLevelIsSet() const;
    void unsetpushAccessLevel();
    void setPushAccessLevel(int32_t value);

    /// <summary>
    /// 合并权限 0:任何人不允许合并，30:开发者及管理员可合并，40:管理员可合并,合并权限必须大于等于提交权限
    /// </summary>

    int32_t getMergeAccessLevel() const;
    bool mergeAccessLevelIsSet() const;
    void unsetmergeAccessLevel();
    void setMergeAccessLevel(int32_t value);


protected:
    int32_t pushAccessLevel_;
    bool pushAccessLevelIsSet_;
    int32_t mergeAccessLevel_;
    bool mergeAccessLevelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_AddProtectAccessLevel_H_
