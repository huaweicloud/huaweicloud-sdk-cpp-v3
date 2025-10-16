
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatusClusterItem_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatusClusterItem_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cpcs/v1/model/StatisticalCharacteristic.h>

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
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowStatusClusterItem
    : public ModelBase
{
public:
    ShowStatusClusterItem();
    virtual ~ShowStatusClusterItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStatusClusterItem members

    /// <summary>
    /// 成功率
    /// </summary>

    double getSuccessRate() const;
    bool successRateIsSet() const;
    void unsetsuccessRate();
    void setSuccessRate(double value);

    /// <summary>
    /// 失败率
    /// </summary>

    double getFailRate() const;
    bool failRateIsSet() const;
    void unsetfailRate();
    void setFailRate(double value);

    /// <summary>
    /// 成功次数
    /// </summary>

    int64_t getSuccessCount() const;
    bool successCountIsSet() const;
    void unsetsuccessCount();
    void setSuccessCount(int64_t value);

    /// <summary>
    /// 总次数
    /// </summary>

    int64_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int64_t value);

    /// <summary>
    /// 平均值
    /// </summary>

    double getAverageValue() const;
    bool averageValueIsSet() const;
    void unsetaverageValue();
    void setAverageValue(double value);

    /// <summary>
    /// 总数
    /// </summary>

    double getTotalValue() const;
    bool totalValueIsSet() const;
    void unsettotalValue();
    void setTotalValue(double value);

    /// <summary>
    /// 指标是否超出限制
    /// </summary>

    bool isLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(bool value);

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


protected:
    double successRate_;
    bool successRateIsSet_;
    double failRate_;
    bool failRateIsSet_;
    int64_t successCount_;
    bool successCountIsSet_;
    int64_t totalCount_;
    bool totalCountIsSet_;
    double averageValue_;
    bool averageValueIsSet_;
    double totalValue_;
    bool totalValueIsSet_;
    bool limit_;
    bool limitIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string clusterName_;
    bool clusterNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatusClusterItem_H_
