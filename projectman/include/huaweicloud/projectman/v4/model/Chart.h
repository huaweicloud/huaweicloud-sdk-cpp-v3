
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_Chart_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_Chart_H_


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
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  Chart
    : public ModelBase
{
public:
    Chart();
    virtual ~Chart();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Chart members

    /// <summary>
    /// 统计时间
    /// </summary>

    std::string getDate() const;
    bool dateIsSet() const;
    void unsetdate();
    void setDate(const std::string& value);

    /// <summary>
    /// 完成story工单
    /// </summary>

    int32_t getFinishedNum() const;
    bool finishedNumIsSet() const;
    void unsetfinishedNum();
    void setFinishedNum(int32_t value);

    /// <summary>
    /// 迭代id
    /// </summary>

    int32_t getIterationId() const;
    bool iterationIdIsSet() const;
    void unsetiterationId();
    void setIterationId(int32_t value);

    /// <summary>
    /// 项目id
    /// </summary>

    int32_t getProjectNumId() const;
    bool projectNumIdIsSet() const;
    void unsetprojectNumId();
    void setProjectNumId(int32_t value);

    /// <summary>
    /// 未完成story数
    /// </summary>

    int32_t getRemainingNum() const;
    bool remainingNumIsSet() const;
    void unsetremainingNum();
    void setRemainingNum(int32_t value);

    /// <summary>
    /// 总story数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::string date_;
    bool dateIsSet_;
    int32_t finishedNum_;
    bool finishedNumIsSet_;
    int32_t iterationId_;
    bool iterationIdIsSet_;
    int32_t projectNumId_;
    bool projectNumIdIsSet_;
    int32_t remainingNum_;
    bool remainingNumIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_Chart_H_
