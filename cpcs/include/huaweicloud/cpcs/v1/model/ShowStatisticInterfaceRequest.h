
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatisticInterfaceRequest_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatisticInterfaceRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowStatisticInterfaceRequest
    : public ModelBase
{
public:
    ShowStatisticInterfaceRequest();
    virtual ~ShowStatisticInterfaceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStatisticInterfaceRequest members

    /// <summary>
    /// 集群id，默认为空，默认查询所有集群
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 应用id，默认为空，默认查询所有app
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 查询的初始时间戳，毫秒级时间戳，默认查询前三天
    /// </summary>

    int64_t getFrom() const;
    bool fromIsSet() const;
    void unsetfrom();
    void setFrom(int64_t value);

    /// <summary>
    /// 查询的终止时间戳，毫秒级时间戳，默认查询到当前时间
    /// </summary>

    int64_t getTo() const;
    bool toIsSet() const;
    void unsetto();
    void setTo(int64_t value);

    /// <summary>
    /// 统计周期，默认为1，五分钟为一个周期
    /// </summary>

    int32_t getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(int32_t value);

    /// <summary>
    /// 统计值，默认为min:最小值
    /// </summary>

    std::string getFilter() const;
    bool filterIsSet() const;
    void unsetfilter();
    void setFilter(const std::string& value);

    /// <summary>
    /// 算法，有：“sm2”,\&quot;rsa\&quot;
    /// </summary>

    std::string getAlgorithm() const;
    bool algorithmIsSet() const;
    void unsetalgorithm();
    void setAlgorithm(const std::string& value);

    /// <summary>
    /// 算法类型，0：国密算法，1：国际算法
    /// </summary>

    std::string getAlgorithmType() const;
    bool algorithmTypeIsSet() const;
    void unsetalgorithmType();
    void setAlgorithmType(const std::string& value);

    /// <summary>
    /// 证书类型，0：根证书，1：业务证书
    /// </summary>

    std::string getCertificateType() const;
    bool certificateTypeIsSet() const;
    void unsetcertificateType();
    void setCertificateType(const std::string& value);

    /// <summary>
    /// 密码服务类型
    /// </summary>

    std::string getServerType() const;
    bool serverTypeIsSet() const;
    void unsetserverType();
    void setServerType(const std::string& value);


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string appId_;
    bool appIdIsSet_;
    int64_t from_;
    bool fromIsSet_;
    int64_t to_;
    bool toIsSet_;
    int32_t period_;
    bool periodIsSet_;
    std::string filter_;
    bool filterIsSet_;
    std::string algorithm_;
    bool algorithmIsSet_;
    std::string algorithmType_;
    bool algorithmTypeIsSet_;
    std::string certificateType_;
    bool certificateTypeIsSet_;
    std::string serverType_;
    bool serverTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowStatisticInterfaceRequest& dereference_from_shared_ptr(std::shared_ptr<ShowStatisticInterfaceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatisticInterfaceRequest_H_
