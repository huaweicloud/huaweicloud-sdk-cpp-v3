
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIterationV4Response_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIterationV4Response_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/Chart.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowIterationV4Response
    : public ModelBase, public HttpResponse
{
public:
    ShowIterationV4Response();
    virtual ~ShowIterationV4Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIterationV4Response members

    /// <summary>
    /// 迭代结束时间，年-月-日
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// 燃尽图
    /// </summary>

    std::vector<Chart>& getCharts();
    bool chartsIsSet() const;
    void unsetcharts();
    void setCharts(const std::vector<Chart>& value);

    /// <summary>
    /// 已关闭的工单数
    /// </summary>

    int32_t getClosedTotal() const;
    bool closedTotalIsSet() const;
    void unsetclosedTotal();
    void setClosedTotal(int32_t value);

    /// <summary>
    /// 迭代创建时间
    /// </summary>

    std::string getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const std::string& value);

    /// <summary>
    /// 迭代开始时间，年-月-日
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 是否有task
    /// </summary>

    bool isHaveTask() const;
    bool haveTaskIsSet() const;
    void unsethaveTask();
    void setHaveTask(bool value);

    /// <summary>
    /// 迭代id
    /// </summary>

    int32_t getIterationId() const;
    bool iterationIdIsSet() const;
    void unsetiterationId();
    void setIterationId(int32_t value);

    /// <summary>
    /// 迭代标题
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 开启的工单数
    /// </summary>

    int32_t getOpenedTotal() const;
    bool openedTotalIsSet() const;
    void unsetopenedTotal();
    void setOpenedTotal(int32_t value);

    /// <summary>
    /// 工作进展
    /// </summary>

    std::string getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(const std::string& value);

    /// <summary>
    /// 工单总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 迭代更新时间
    /// </summary>

    std::string getUpdatedTime() const;
    bool updatedTimeIsSet() const;
    void unsetupdatedTime();
    void setUpdatedTime(const std::string& value);

    /// <summary>
    /// 迭代的状态,0 未开始，1 进行中，2 结束
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::vector<Chart> charts_;
    bool chartsIsSet_;
    int32_t closedTotal_;
    bool closedTotalIsSet_;
    std::string createdTime_;
    bool createdTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    bool haveTask_;
    bool haveTaskIsSet_;
    int32_t iterationId_;
    bool iterationIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t openedTotal_;
    bool openedTotalIsSet_;
    std::string progress_;
    bool progressIsSet_;
    int32_t total_;
    bool totalIsSet_;
    std::string updatedTime_;
    bool updatedTimeIsSet_;
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

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIterationV4Response_H_
