
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DemandStatisticResponseV4_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DemandStatisticResponseV4_H_


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
/// 需求概览信息
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  DemandStatisticResponseV4
    : public ModelBase
{
public:
    DemandStatisticResponseV4();
    virtual ~DemandStatisticResponseV4();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DemandStatisticResponseV4 members

    /// <summary>
    /// 已关闭数量
    /// </summary>

    int32_t getClosedNum() const;
    bool closedNumIsSet() const;
    void unsetclosedNum();
    void setClosedNum(int32_t value);

    /// <summary>
    /// 模块
    /// </summary>

    std::string getModule() const;
    bool moduleIsSet() const;
    void unsetmodule();
    void setModule(const std::string& value);

    /// <summary>
    /// 新建的数量
    /// </summary>

    int32_t getNewNum() const;
    bool newNumIsSet() const;
    void unsetnewNum();
    void setNewNum(int32_t value);

    /// <summary>
    /// 开发中的数量
    /// </summary>

    int32_t getProcessNum() const;
    bool processNumIsSet() const;
    void unsetprocessNum();
    void setProcessNum(int32_t value);

    /// <summary>
    /// 已拒绝数量
    /// </summary>

    int32_t getRejectedNum() const;
    bool rejectedNumIsSet() const;
    void unsetrejectedNum();
    void setRejectedNum(int32_t value);

    /// <summary>
    /// 已解决数量
    /// </summary>

    int32_t getSolvedNum() const;
    bool solvedNumIsSet() const;
    void unsetsolvedNum();
    void setSolvedNum(int32_t value);

    /// <summary>
    /// 测试中的数量
    /// </summary>

    int32_t getTestNum() const;
    bool testNumIsSet() const;
    void unsettestNum();
    void setTestNum(int32_t value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    int32_t closedNum_;
    bool closedNumIsSet_;
    std::string module_;
    bool moduleIsSet_;
    int32_t newNum_;
    bool newNumIsSet_;
    int32_t processNum_;
    bool processNumIsSet_;
    int32_t rejectedNum_;
    bool rejectedNumIsSet_;
    int32_t solvedNum_;
    bool solvedNumIsSet_;
    int32_t testNum_;
    bool testNumIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DemandStatisticResponseV4_H_
