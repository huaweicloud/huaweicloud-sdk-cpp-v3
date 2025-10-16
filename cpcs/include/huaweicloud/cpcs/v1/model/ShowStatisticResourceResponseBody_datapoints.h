
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatisticResourceResponseBody_datapoints_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatisticResourceResponseBody_datapoints_H_


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
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowStatisticResourceResponseBody_datapoints
    : public ModelBase
{
public:
    ShowStatisticResourceResponseBody_datapoints();
    virtual ~ShowStatisticResourceResponseBody_datapoints();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStatisticResourceResponseBody_datapoints members

    /// <summary>
    /// 数据
    /// </summary>

    int32_t getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(int32_t value);

    /// <summary>
    /// 数量
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);

    /// <summary>
    /// 接口名称
    /// </summary>

    std::string getApiName() const;
    bool apiNameIsSet() const;
    void unsetapiName();
    void setApiName(const std::string& value);

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
    /// 服务类型
    /// </summary>

    std::string getServerType() const;
    bool serverTypeIsSet() const;
    void unsetserverType();
    void setServerType(const std::string& value);


protected:
    int32_t data_;
    bool dataIsSet_;
    int64_t count_;
    bool countIsSet_;
    std::string apiName_;
    bool apiNameIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string serverType_;
    bool serverTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatisticResourceResponseBody_datapoints_H_
