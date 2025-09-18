
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowBugsPerDeveloperResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowBugsPerDeveloperResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowBugsPerDeveloperResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowBugsPerDeveloperResponse();
    virtual ~ShowBugsPerDeveloperResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBugsPerDeveloperResponse members

    /// <summary>
    /// 指标分子数值
    /// </summary>

    std::string getDividendValue() const;
    bool dividendValueIsSet() const;
    void unsetdividendValue();
    void setDividendValue(const std::string& value);

    /// <summary>
    /// 指标分母数值
    /// </summary>

    std::string getDivisorValue() const;
    bool divisorValueIsSet() const;
    void unsetdivisorValue();
    void setDivisorValue(const std::string& value);

    /// <summary>
    /// 指标名称
    /// </summary>

    std::string getMetricName() const;
    bool metricNameIsSet() const;
    void unsetmetricName();
    void setMetricName(const std::string& value);

    /// <summary>
    /// 指标数值
    /// </summary>

    std::string getMetricValue() const;
    bool metricValueIsSet() const;
    void unsetmetricValue();
    void setMetricValue(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 项目名称
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);


protected:
    std::string dividendValue_;
    bool dividendValueIsSet_;
    std::string divisorValue_;
    bool divisorValueIsSet_;
    std::string metricName_;
    bool metricNameIsSet_;
    std::string metricValue_;
    bool metricValueIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowBugsPerDeveloperResponse_H_
