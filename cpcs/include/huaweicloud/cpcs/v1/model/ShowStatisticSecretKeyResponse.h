
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatisticSecretKeyResponse_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatisticSecretKeyResponse_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/VendorKeyStatistic.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowStatisticSecretKeyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowStatisticSecretKeyResponse();
    virtual ~ShowStatisticSecretKeyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStatisticSecretKeyResponse members

    /// <summary>
    /// 总数量
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 无效数量
    /// </summary>

    int32_t getInvalidCount() const;
    bool invalidCountIsSet() const;
    void unsetinvalidCount();
    void setInvalidCount(int32_t value);

    /// <summary>
    /// 有效数量
    /// </summary>

    int32_t getValidCount() const;
    bool validCountIsSet() const;
    void unsetvalidCount();
    void setValidCount(int32_t value);

    /// <summary>
    /// 密钥分布按服务类型统计
    /// </summary>

    std::vector<VendorKeyStatistic>& getKeyCountsByServiceType();
    bool keyCountsByServiceTypeIsSet() const;
    void unsetkeyCountsByServiceType();
    void setKeyCountsByServiceType(const std::vector<VendorKeyStatistic>& value);

    /// <summary>
    /// 密钥分布按算法统计
    /// </summary>

    std::vector<VendorKeyStatistic>& getKeyCountsByAlgorithm();
    bool keyCountsByAlgorithmIsSet() const;
    void unsetkeyCountsByAlgorithm();
    void setKeyCountsByAlgorithm(const std::vector<VendorKeyStatistic>& value);

    /// <summary>
    /// 密钥分布按算法和集群统计
    /// </summary>

    std::vector<VendorKeyStatistic>& getKeyCountsByAlgorithmAndCluster();
    bool keyCountsByAlgorithmAndClusterIsSet() const;
    void unsetkeyCountsByAlgorithmAndCluster();
    void setKeyCountsByAlgorithmAndCluster(const std::vector<VendorKeyStatistic>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    int32_t invalidCount_;
    bool invalidCountIsSet_;
    int32_t validCount_;
    bool validCountIsSet_;
    std::vector<VendorKeyStatistic> keyCountsByServiceType_;
    bool keyCountsByServiceTypeIsSet_;
    std::vector<VendorKeyStatistic> keyCountsByAlgorithm_;
    bool keyCountsByAlgorithmIsSet_;
    std::vector<VendorKeyStatistic> keyCountsByAlgorithmAndCluster_;
    bool keyCountsByAlgorithmAndClusterIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatisticSecretKeyResponse_H_
