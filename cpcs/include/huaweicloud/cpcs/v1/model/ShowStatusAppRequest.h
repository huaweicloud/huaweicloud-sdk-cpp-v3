
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatusAppRequest_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatusAppRequest_H_


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
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowStatusAppRequest
    : public ModelBase
{
public:
    ShowStatusAppRequest();
    virtual ~ShowStatusAppRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStatusAppRequest members

    /// <summary>
    /// 集群ID，默认空字符串，默认查询所有集群。
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 应用ID，默认空字符串，默认查询所有应用。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 集群ID，默认空字符串，默认查询所有集群。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 查询范围起始时间，毫秒时间戳，默认为0，默认查询三天前。
    /// </summary>

    int64_t getFrom() const;
    bool fromIsSet() const;
    void unsetfrom();
    void setFrom(int64_t value);

    /// <summary>
    /// 查询范围终止时间，毫秒时间戳，默认为0，默认查询到当前时间。
    /// </summary>

    int64_t getTo() const;
    bool toIsSet() const;
    void unsetto();
    void setTo(int64_t value);

    /// <summary>
    /// 数据统计周期，默认0，默认为5分钟。
    /// </summary>

    int32_t getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(int32_t value);

    /// <summary>
    /// 统计类型，默认min，默认用统计周期中数据的最小值。
    /// </summary>

    std::string getFilter() const;
    bool filterIsSet() const;
    void unsetfilter();
    void setFilter(const std::string& value);

    /// <summary>
    /// 服务类型，默认空字符串，默认查询所有服务类型。
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
    std::string instanceId_;
    bool instanceIdIsSet_;
    int64_t from_;
    bool fromIsSet_;
    int64_t to_;
    bool toIsSet_;
    int32_t period_;
    bool periodIsSet_;
    std::string filter_;
    bool filterIsSet_;
    std::string serverType_;
    bool serverTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowStatusAppRequest& dereference_from_shared_ptr(std::shared_ptr<ShowStatusAppRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatusAppRequest_H_
