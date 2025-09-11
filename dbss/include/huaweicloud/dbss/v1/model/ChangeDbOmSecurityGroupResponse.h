
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ChangeDbOmSecurityGroupResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ChangeDbOmSecurityGroupResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ChangeDbOmSecurityGroupResponse
    : public ModelBase, public HttpResponse
{
public:
    ChangeDbOmSecurityGroupResponse();
    virtual ~ChangeDbOmSecurityGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeDbOmSecurityGroupResponse members

    /// <summary>
    /// - 0: 正常 - 非0: 异常
    /// </summary>

    int32_t getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(int32_t value);

    /// <summary>
    /// 备注
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 订单号
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);


protected:
    int32_t code_;
    bool codeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ChangeDbOmSecurityGroupResponse_H_
