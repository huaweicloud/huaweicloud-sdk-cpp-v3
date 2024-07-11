
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ShowProjectSuccessRateResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ShowProjectSuccessRateResponse_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  ShowProjectSuccessRateResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowProjectSuccessRateResponse();
    virtual ~ShowProjectSuccessRateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowProjectSuccessRateResponse members

    /// <summary>
    /// 成功率
    /// </summary>

    std::string getSuccessRate() const;
    bool successRateIsSet() const;
    void unsetsuccessRate();
    void setSuccessRate(const std::string& value);

    /// <summary>
    /// 项目id
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

    /// <summary>
    /// 应用部署开始时间范围的左边界（包含），格式yyyy-MM-dd
    /// </summary>

    std::string getStartDate() const;
    bool startDateIsSet() const;
    void unsetstartDate();
    void setStartDate(const std::string& value);

    /// <summary>
    /// 应用部署开始时间范围的右边界（包含），格式yyyy-MM-dd
    /// </summary>

    std::string getEndDate() const;
    bool endDateIsSet() const;
    void unsetendDate();
    void setEndDate(const std::string& value);

    /// <summary>
    /// 查询到的应用数
    /// </summary>

    int32_t getTaskCount() const;
    bool taskCountIsSet() const;
    void unsettaskCount();
    void setTaskCount(int32_t value);

    /// <summary>
    /// 查询到的应用部署记录数
    /// </summary>

    int32_t getRecordCount() const;
    bool recordCountIsSet() const;
    void unsetrecordCount();
    void setRecordCount(int32_t value);

    /// <summary>
    /// 成功的应用部署记录数
    /// </summary>

    int32_t getSuccessRecordCount() const;
    bool successRecordCountIsSet() const;
    void unsetsuccessRecordCount();
    void setSuccessRecordCount(int32_t value);


protected:
    std::string successRate_;
    bool successRateIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::string startDate_;
    bool startDateIsSet_;
    std::string endDate_;
    bool endDateIsSet_;
    int32_t taskCount_;
    bool taskCountIsSet_;
    int32_t recordCount_;
    bool recordCountIsSet_;
    int32_t successRecordCount_;
    bool successRecordCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ShowProjectSuccessRateResponse_H_
