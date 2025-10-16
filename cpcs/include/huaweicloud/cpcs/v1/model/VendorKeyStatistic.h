
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_VendorKeyStatistic_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_VendorKeyStatistic_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  VendorKeyStatistic
    : public ModelBase
{
public:
    VendorKeyStatistic();
    virtual ~VendorKeyStatistic();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VendorKeyStatistic members

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 有效数量
    /// </summary>

    int32_t getValidCount() const;
    bool validCountIsSet() const;
    void unsetvalidCount();
    void setValidCount(int32_t value);

    /// <summary>
    /// 无效数量
    /// </summary>

    int32_t getInvalidCount() const;
    bool invalidCountIsSet() const;
    void unsetinvalidCount();
    void setInvalidCount(int32_t value);

    /// <summary>
    /// 租户ID
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 集群ID
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 集群名称
    /// </summary>

    std::string getClusterName() const;
    bool clusterNameIsSet() const;
    void unsetclusterName();
    void setClusterName(const std::string& value);

    /// <summary>
    /// 服务类型
    /// </summary>

    std::string getServerType() const;
    bool serverTypeIsSet() const;
    void unsetserverType();
    void setServerType(const std::string& value);

    /// <summary>
    /// 算法
    /// </summary>

    std::string getAlgorithm() const;
    bool algorithmIsSet() const;
    void unsetalgorithm();
    void setAlgorithm(const std::string& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    int32_t validCount_;
    bool validCountIsSet_;
    int32_t invalidCount_;
    bool invalidCountIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string clusterName_;
    bool clusterNameIsSet_;
    std::string serverType_;
    bool serverTypeIsSet_;
    std::string algorithm_;
    bool algorithmIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_VendorKeyStatistic_H_
