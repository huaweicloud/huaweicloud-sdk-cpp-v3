
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateIterationRequestV4_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateIterationRequestV4_H_


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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  UpdateIterationRequestV4
    : public ModelBase
{
public:
    UpdateIterationRequestV4();
    virtual ~UpdateIterationRequestV4();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateIterationRequestV4 members

    /// <summary>
    /// 开始时间，年-月-日
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 结束时间，年-月-日
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 标题
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 迭代的状态，0 未开始 &lt;--&gt; 1 进行中&lt;--&gt; 2 结束 &lt;--&gt; 1&lt;--&gt;0, 状态不能跨状态更改
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 迭代结束时，工作项的处理（close 所有的工作项关闭，empty 没有关闭的工作项 放在block里面），status更新为2时需要填写over_type
    /// </summary>

    std::string getOverType() const;
    bool overTypeIsSet() const;
    void unsetoverType();
    void setOverType(const std::string& value);


protected:
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string overType_;
    bool overTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateIterationRequestV4_H_
