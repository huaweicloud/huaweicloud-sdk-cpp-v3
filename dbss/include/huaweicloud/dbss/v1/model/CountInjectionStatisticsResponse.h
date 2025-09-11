
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_CountInjectionStatisticsResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_CountInjectionStatisticsResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dbss/v1/model/InjectionStatisticsBean.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  CountInjectionStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    CountInjectionStatisticsResponse();
    virtual ~CountInjectionStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CountInjectionStatisticsResponse members

    /// <summary>
    /// 生成时间
    /// </summary>

    std::string getGenerateTime() const;
    bool generateTimeIsSet() const;
    void unsetgenerateTime();
    void setGenerateTime(const std::string& value);

    /// <summary>
    /// 注入列表
    /// </summary>

    std::vector<InjectionStatisticsBean>& getInjectionStatistics();
    bool injectionStatisticsIsSet() const;
    void unsetinjectionStatistics();
    void setInjectionStatistics(const std::vector<InjectionStatisticsBean>& value);

    /// <summary>
    /// 状态  - FINISHED：已完成  - RUNNING：运行中
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string generateTime_;
    bool generateTimeIsSet_;
    std::vector<InjectionStatisticsBean> injectionStatistics_;
    bool injectionStatisticsIsSet_;
    std::string status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_CountInjectionStatisticsResponse_H_
