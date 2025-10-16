
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowResourceDetailAccessKeyResponseBody_ak_list_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowResourceDetailAccessKeyResponseBody_ak_list_H_


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
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowResourceDetailAccessKeyResponseBody_ak_list
    : public ModelBase
{
public:
    ShowResourceDetailAccessKeyResponseBody_ak_list();
    virtual ~ShowResourceDetailAccessKeyResponseBody_ak_list();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowResourceDetailAccessKeyResponseBody_ak_list members

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
    /// 应用ID
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 应用名称
    /// </summary>

    std::string getAppName() const;
    bool appNameIsSet() const;
    void unsetappName();
    void setAppName(const std::string& value);

    /// <summary>
    /// 访问密钥ID
    /// </summary>

    std::string getAccessKeyId() const;
    bool accessKeyIdIsSet() const;
    void unsetaccessKeyId();
    void setAccessKeyId(const std::string& value);

    /// <summary>
    /// 访问密钥名称
    /// </summary>

    std::string getAccessKeyName() const;
    bool accessKeyNameIsSet() const;
    void unsetaccessKeyName();
    void setAccessKeyName(const std::string& value);

    /// <summary>
    /// 访问密钥状态
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 最后访问时间，UNIX时间戳，单位毫秒
    /// </summary>

    int64_t getLastAccessTime() const;
    bool lastAccessTimeIsSet() const;
    void unsetlastAccessTime();
    void setLastAccessTime(int64_t value);


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
    std::string appId_;
    bool appIdIsSet_;
    std::string appName_;
    bool appNameIsSet_;
    std::string accessKeyId_;
    bool accessKeyIdIsSet_;
    std::string accessKeyName_;
    bool accessKeyNameIsSet_;
    int32_t status_;
    bool statusIsSet_;
    int64_t lastAccessTime_;
    bool lastAccessTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowResourceDetailAccessKeyResponseBody_ak_list_H_
