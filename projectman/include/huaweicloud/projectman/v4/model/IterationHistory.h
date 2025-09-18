
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IterationHistory_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IterationHistory_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/IterationHistory_operator.h>
#include <vector>
#include <huaweicloud/projectman/v4/model/IterationHistory_details.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IterationHistory
    : public ModelBase
{
public:
    IterationHistory();
    virtual ~IterationHistory();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IterationHistory members

    /// <summary>
    /// 迭代ID
    /// </summary>

    std::string getIterationId() const;
    bool iterationIdIsSet() const;
    void unsetiterationId();
    void setIterationId(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    IterationHistory_operator getOperator() const;
    bool operatorIsSet() const;
    void unsetoperator();
    void setOperator(const IterationHistory_operator& value);

    /// <summary>
    /// 操作类型
    /// </summary>

    std::string getOperate() const;
    bool operateIsSet() const;
    void unsetoperate();
    void setOperate(const std::string& value);

    /// <summary>
    /// 操作时间
    /// </summary>

    std::string getOperateTime() const;
    bool operateTimeIsSet() const;
    void unsetoperateTime();
    void setOperateTime(const std::string& value);

    /// <summary>
    /// 操作详情
    /// </summary>

    std::vector<IterationHistory_details>& getDetails();
    bool detailsIsSet() const;
    void unsetdetails();
    void setDetails(const std::vector<IterationHistory_details>& value);


protected:
    std::string iterationId_;
    bool iterationIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    IterationHistory_operator operator_;
    bool operatorIsSet_;
    std::string operate_;
    bool operateIsSet_;
    std::string operateTime_;
    bool operateTimeIsSet_;
    std::vector<IterationHistory_details> details_;
    bool detailsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IterationHistory_H_
