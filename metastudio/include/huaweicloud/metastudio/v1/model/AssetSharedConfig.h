
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AssetSharedConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AssetSharedConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 共享配置
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  AssetSharedConfig
    : public ModelBase
{
public:
    AssetSharedConfig();
    virtual ~AssetSharedConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssetSharedConfig members

    /// <summary>
    /// 共享类型。 * PRIVATE: 私有，仅本租户可访问。 * PUBLIC: 公开，所有租户可访问。当前仅提供系统资产可公开访问。 * SHARED：共享，指定租户可访问。拥有者指定租户可访问。
    /// </summary>

    std::string getSharedType() const;
    bool sharedTypeIsSet() const;
    void unsetsharedType();
    void setSharedType(const std::string& value);

    /// <summary>
    /// 共享过期时间。默认过期时间为30天，即共享当天+30的23:59:59。
    /// </summary>

    std::string getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(const std::string& value);

    /// <summary>
    /// 允许访问本资产的租户列表。
    /// </summary>

    std::vector<std::string>& getAllowedProjectIds();
    bool allowedProjectIdsIsSet() const;
    void unsetallowedProjectIds();
    void setAllowedProjectIds(const std::vector<std::string>& value);


protected:
    std::string sharedType_;
    bool sharedTypeIsSet_;
    std::string expireTime_;
    bool expireTimeIsSet_;
    std::vector<std::string> allowedProjectIds_;
    bool allowedProjectIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AssetSharedConfig_H_
