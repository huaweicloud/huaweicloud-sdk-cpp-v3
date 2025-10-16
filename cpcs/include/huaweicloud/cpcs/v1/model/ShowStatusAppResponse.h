
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatusAppResponse_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatusAppResponse_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/ShowStatusAppItem.h>
#include <string>
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
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowStatusAppResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowStatusAppResponse();
    virtual ~ShowStatusAppResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStatusAppResponse members

    /// <summary>
    /// 资源名称
    /// </summary>

    std::string getMetricName() const;
    bool metricNameIsSet() const;
    void unsetmetricName();
    void setMetricName(const std::string& value);

    /// <summary>
    /// 应用列表
    /// </summary>

    std::vector<ShowStatusAppItem>& getAppList();
    bool appListIsSet() const;
    void unsetappList();
    void setAppList(const std::vector<ShowStatusAppItem>& value);

    /// <summary>
    /// 总访问次数
    /// </summary>

    int64_t getTotalAccessCount() const;
    bool totalAccessCountIsSet() const;
    void unsettotalAccessCount();
    void setTotalAccessCount(int64_t value);

    /// <summary>
    /// 成功访问次数
    /// </summary>

    int64_t getSuccessAccessCount() const;
    bool successAccessCountIsSet() const;
    void unsetsuccessAccessCount();
    void setSuccessAccessCount(int64_t value);


protected:
    std::string metricName_;
    bool metricNameIsSet_;
    std::vector<ShowStatusAppItem> appList_;
    bool appListIsSet_;
    int64_t totalAccessCount_;
    bool totalAccessCountIsSet_;
    int64_t successAccessCount_;
    bool successAccessCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatusAppResponse_H_
