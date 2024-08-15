
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RollUpgradeProgress_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RollUpgradeProgress_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 滚动升级信息。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  RollUpgradeProgress
    : public ModelBase
{
public:
    RollUpgradeProgress();
    virtual ~RollUpgradeProgress();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RollUpgradeProgress members

    /// <summary>
    /// 已升级分片数，非独立部署返回null。
    /// </summary>

    std::string getUpgradedDnGroupNumbers() const;
    bool upgradedDnGroupNumbersIsSet() const;
    void unsetupgradedDnGroupNumbers();
    void setUpgradedDnGroupNumbers(const std::string& value);

    /// <summary>
    /// 总分片数，非独立部署返回null。
    /// </summary>

    std::string getTotalDnGroupNumbers() const;
    bool totalDnGroupNumbersIsSet() const;
    void unsettotalDnGroupNumbers();
    void setTotalDnGroupNumbers(const std::string& value);

    /// <summary>
    /// 未完成升级的az，以“,”隔开，独立部署返回null。
    /// </summary>

    std::string getNotFullyUpgradedAz() const;
    bool notFullyUpgradedAzIsSet() const;
    void unsetnotFullyUpgradedAz();
    void setNotFullyUpgradedAz(const std::string& value);

    /// <summary>
    /// 已升级az，以“,”隔开，独立部署返回null。
    /// </summary>

    std::string getAlreadyUpgradedAz() const;
    bool alreadyUpgradedAzIsSet() const;
    void unsetalreadyUpgradedAz();
    void setAlreadyUpgradedAz(const std::string& value);

    /// <summary>
    /// az描述键值对Map&lt;String,String&gt;。
    /// </summary>

    std::map<std::string, std::string>& getAzDescriptionMap();
    bool azDescriptionMapIsSet() const;
    void unsetazDescriptionMap();
    void setAzDescriptionMap(const std::map<std::string, std::string>& value);


protected:
    std::string upgradedDnGroupNumbers_;
    bool upgradedDnGroupNumbersIsSet_;
    std::string totalDnGroupNumbers_;
    bool totalDnGroupNumbersIsSet_;
    std::string notFullyUpgradedAz_;
    bool notFullyUpgradedAzIsSet_;
    std::string alreadyUpgradedAz_;
    bool alreadyUpgradedAzIsSet_;
    std::map<std::string, std::string> azDescriptionMap_;
    bool azDescriptionMapIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RollUpgradeProgress_H_
