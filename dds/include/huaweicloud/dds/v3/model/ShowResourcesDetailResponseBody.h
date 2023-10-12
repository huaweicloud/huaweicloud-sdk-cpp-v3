
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowResourcesDetailResponseBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowResourcesDetailResponseBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ShowResourcesDetailResponseBody
    : public ModelBase
{
public:
    ShowResourcesDetailResponseBody();
    virtual ~ShowResourcesDetailResponseBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowResourcesDetailResponseBody members

    /// <summary>
    /// 配额资源类型，当前配额类型仅支持实例类型（instance）。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 实例类型： - 若值为“Single”，则表示单节点实例配额信息。 - 若值为“ReplicaSet”，则表示副本集实例配额信息。 - 若值为“Sharding”，则表示集群实例配额信息。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 当前配额值。
    /// </summary>

    int32_t getQuota() const;
    bool quotaIsSet() const;
    void unsetquota();
    void setQuota(int32_t value);

    /// <summary>
    /// 已使用的资源数。
    /// </summary>

    int32_t getUsed() const;
    bool usedIsSet() const;
    void unsetused();
    void setUsed(int32_t value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string mode_;
    bool modeIsSet_;
    int32_t quota_;
    bool quotaIsSet_;
    int32_t used_;
    bool usedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowResourcesDetailResponseBody_H_
