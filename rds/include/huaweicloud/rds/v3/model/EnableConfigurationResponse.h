
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_EnableConfigurationResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_EnableConfigurationResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/ApplyConfigurationResponse_apply_results.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  EnableConfigurationResponse
    : public ModelBase, public HttpResponse
{
public:
    EnableConfigurationResponse();
    virtual ~EnableConfigurationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// EnableConfigurationResponse members

    /// <summary>
    /// 参数组ID。
    /// </summary>

    std::string getConfigurationId() const;
    bool configurationIdIsSet() const;
    void unsetconfigurationId();
    void setConfigurationId(const std::string& value);

    /// <summary>
    /// 参数组名称。
    /// </summary>

    std::string getConfigurationName() const;
    bool configurationNameIsSet() const;
    void unsetconfigurationName();
    void setConfigurationName(const std::string& value);

    /// <summary>
    /// 参数模板是否都应用成功。  - “true”表示参数模板都应用成功。 - “false”表示存在应用失败的参数模板。
    /// </summary>

    bool isSuccess() const;
    bool successIsSet() const;
    void unsetsuccess();
    void setSuccess(bool value);

    /// <summary>
    /// 对每个实例的应用结果。
    /// </summary>

    std::vector<ApplyConfigurationResponse_apply_results>& getApplyResults();
    bool applyResultsIsSet() const;
    void unsetapplyResults();
    void setApplyResults(const std::vector<ApplyConfigurationResponse_apply_results>& value);


protected:
    std::string configurationId_;
    bool configurationIdIsSet_;
    std::string configurationName_;
    bool configurationNameIsSet_;
    bool success_;
    bool successIsSet_;
    std::vector<ApplyConfigurationResponse_apply_results> applyResults_;
    bool applyResultsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_EnableConfigurationResponse_H_
