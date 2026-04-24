
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateSubscriptionInfoReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateSubscriptionInfoReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  UpdateSubscriptionInfoReq
    : public ModelBase
{
public:
    UpdateSubscriptionInfoReq();
    virtual ~UpdateSubscriptionInfoReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSubscriptionInfoReq members

    /// <summary>
    /// 任务名称 约束：任务名称在4位到50位之间，不区分大小写，可以包含字母、数字、中划线或下划线，不能包括其他特殊字符。 - 最小长度：4 - 最大长度：50
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 消费时间点，在修改完消费时间点后，拉取到的增量数据从修改后的消费时间点开始。 约束：修改的时间点必须在订阅任务的时间范围内（从任务创建到当前时间之间），取值为时间戳，例如：1769393264000。
    /// </summary>

    int64_t getConsumeTime() const;
    bool consumeTimeIsSet() const;
    void unsetconsumeTime();
    void setConsumeTime(int64_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int64_t consumeTime_;
    bool consumeTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateSubscriptionInfoReq_H_
