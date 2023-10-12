
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_StructProcessVO_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_StructProcessVO_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 灾备初始化进度信息体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  StructProcessVO
    : public ModelBase
{
public:
    StructProcessVO();
    virtual ~StructProcessVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StructProcessVO members

    /// <summary>
    /// 对象类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 状态
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 源对象数量
    /// </summary>

    int32_t getSrcCount() const;
    bool srcCountIsSet() const;
    void unsetsrcCount();
    void setSrcCount(int32_t value);

    /// <summary>
    /// 目标对象数量
    /// </summary>

    int32_t getDstCount() const;
    bool dstCountIsSet() const;
    void unsetdstCount();
    void setDstCount(int32_t value);

    /// <summary>
    /// 开始时间
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 结束时间
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);


protected:
    std::string type_;
    bool typeIsSet_;
    int32_t status_;
    bool statusIsSet_;
    int32_t srcCount_;
    bool srcCountIsSet_;
    int32_t dstCount_;
    bool dstCountIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_StructProcessVO_H_
