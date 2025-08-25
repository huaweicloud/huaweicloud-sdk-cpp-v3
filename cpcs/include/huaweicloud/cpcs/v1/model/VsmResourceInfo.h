
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_VsmResourceInfo_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_VsmResourceInfo_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  VsmResourceInfo
    : public ModelBase
{
public:
    VsmResourceInfo();
    virtual ~VsmResourceInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VsmResourceInfo members

    /// <summary>
    /// 当前租户拥有的vsm集群数量
    /// </summary>

    int32_t getClusterNum() const;
    bool clusterNumIsSet() const;
    void unsetclusterNum();
    void setClusterNum(int32_t value);

    /// <summary>
    /// 当前租户名下由cpcs代创建和管理的vsm集群数量
    /// </summary>

    int32_t getCpcsClusterNum() const;
    bool cpcsClusterNumIsSet() const;
    void unsetcpcsClusterNum();
    void setCpcsClusterNum(int32_t value);

    /// <summary>
    /// 当前租户拥有的vsm实例总数
    /// </summary>

    int32_t getInstanceNum() const;
    bool instanceNumIsSet() const;
    void unsetinstanceNum();
    void setInstanceNum(int32_t value);

    /// <summary>
    /// 当前租户名下由cpcs代创建和管理的vsm实例总数
    /// </summary>

    int32_t getCpcsInstanceNum() const;
    bool cpcsInstanceNumIsSet() const;
    void unsetcpcsInstanceNum();
    void setCpcsInstanceNum(int32_t value);

    /// <summary>
    /// 当前租户被分配的vsm实例配额数
    /// </summary>

    int32_t getInstanceQuota() const;
    bool instanceQuotaIsSet() const;
    void unsetinstanceQuota();
    void setInstanceQuota(int32_t value);


protected:
    int32_t clusterNum_;
    bool clusterNumIsSet_;
    int32_t cpcsClusterNum_;
    bool cpcsClusterNumIsSet_;
    int32_t instanceNum_;
    bool instanceNumIsSet_;
    int32_t cpcsInstanceNum_;
    bool cpcsInstanceNumIsSet_;
    int32_t instanceQuota_;
    bool instanceQuotaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_VsmResourceInfo_H_
