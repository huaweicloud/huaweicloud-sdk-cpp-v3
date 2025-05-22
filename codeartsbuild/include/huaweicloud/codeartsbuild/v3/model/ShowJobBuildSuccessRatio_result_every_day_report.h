
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowJobBuildSuccessRatio_result_every_day_report_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowJobBuildSuccessRatio_result_every_day_report_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowJobBuildSuccessRatio_result_every_day_report
    : public ModelBase
{
public:
    ShowJobBuildSuccessRatio_result_every_day_report();
    virtual ~ShowJobBuildSuccessRatio_result_every_day_report();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowJobBuildSuccessRatio_result_every_day_report members

    /// <summary>
    /// 日期
    /// </summary>

    std::string getDate() const;
    bool dateIsSet() const;
    void unsetdate();
    void setDate(const std::string& value);

    /// <summary>
    /// 成功率
    /// </summary>

    int32_t getSuccessRatio() const;
    bool successRatioIsSet() const;
    void unsetsuccessRatio();
    void setSuccessRatio(int32_t value);


protected:
    std::string date_;
    bool dateIsSet_;
    int32_t successRatio_;
    bool successRatioIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowJobBuildSuccessRatio_result_every_day_report_H_
